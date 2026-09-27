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
  ListNode *swapNodes(ListNode *head, int k) {
    int cnt = 0;
    ListNode *current = head;
    while (current) {
      current = current->next;
      ++cnt;
    }
    current = head;
    int l = cnt - k + 1;
    cnt = 1;
    ListNode *one = head;
    ListNode *two = head;
    while (current) {
      if (cnt == k) {
        one = current;
      }
      if (cnt == l) {
        two = current;
      }
      ++cnt;
      current = current->next;
    }
    swap(one->val, two->val);
    return head;
  }
};

int main() {
  ListNode *head = new ListNode(0);
  ListNode *newHead = head;
  for (int i = 0; i < 4; ++i) {
    head->next = new ListNode(i + 1);
    head = head->next;
  }
  Solution sol;
  ListNode *ans = sol.swapNodes(newHead, 2);
  while (ans) {
    cout << ans->val << " ";
    ans = ans->next;
  }
}