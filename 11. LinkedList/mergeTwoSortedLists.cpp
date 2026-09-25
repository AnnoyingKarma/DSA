#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x)
  {
    val=x;
    next=nullptr;
  }
};

ListNode* buildList(const vector<int>& values){
  ListNode dummy(0);
  ListNode* tail=&dummy;

  for(int val:values){
    tail->next = new ListNode(val);
    tail = tail->next;
  }
  return dummy.next;
}

void setNode(ListNode*& list,ListNode*& tail){
  tail->next=list;
  tail=tail->next;
  list=list->next;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
  ListNode dummy(0);
  ListNode* tail=&dummy;
  ListNode* listOne=list1;
  ListNode* listTwo=list2;
  while(listOne && listTwo){
    if(listOne->val <= listTwo->val){
      setNode(listOne,tail);
    }else{
      setNode(listTwo,tail);
    }
  }
  tail->next = listOne ? listOne : listTwo;

  return dummy.next;

}

int main(){
  ListNode* list1 = buildList({1,2,4});
  ListNode* list2 = buildList({1,3,4});

  ListNode* head = mergeTwoLists(list1,list2);

  while(head){
    cout << head->val << " ";
    head = head->next;
  }

}