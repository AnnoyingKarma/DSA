#include <iostream>
#include <algorithm>

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
  int pairSum(ListNode* head) {
      ListNode* sp=head;
      ListNode* fp=head;

      while(fp && fp->next){
          sp=sp->next;
          fp=fp->next->next;
      }
      ListNode* previous =nullptr;
      while(sp){
          ListNode* next = sp->next;
          sp->next=previous;
          previous=sp;
          sp=next;
      }
      ListNode* firstHead=head;
      ListNode* secondHead=previous;
      
      int maxSum=2;
      while(secondHead){
          maxSum=max(maxSum,firstHead->val+secondHead->val);
          firstHead=firstHead->next;
          secondHead=secondHead->next;
      }
      return maxSum;

  }
};

int main(){
  Solution sol;
  ListNode* head=new ListNode(5);
  head->next=new ListNode(9);
  head->next->next=new ListNode(2);
  head->next->next->next=new ListNode(1);
  cout << sol.pairSum(head);
}