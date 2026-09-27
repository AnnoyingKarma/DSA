#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode* swapPairs(ListNode* head) {
    ListNode* current=head;
    ListNode* front=head->next;
    ListNode* newHead=head->next;
    ListNode* back=new ListNode(0);
    while(current&&current->next){
      front=current->next;
      back->next=front;
      current->next=current->next->next;
      front->next=current;
      back=current;
      current=current->next;
    }
    return newHead;
  }
};

int main(){
  ListNode* head=new ListNode(0);
  ListNode* newHead=head;
  for(int i=0; i<4; ++i){
    head->next=new ListNode(i+1);
    head=head->next;
  }
  Solution sol;
  ListNode* ans=sol.swapPairs(newHead);
  while(ans){
    cout << ans->val << " ";
    ans=ans->next;
  }
}