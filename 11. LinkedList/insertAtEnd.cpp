#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *insertAtEnd(Node *head, int x) {
  
  Node* traverse=head;
  while(traverse->next!=nullptr){
    traverse=traverse->next;
  }
  Node* temp=new Node(x);
  traverse->next=temp;
  return head;
}


int main(){

  Node* head=new Node(3);

  Node* ans=insertAtEnd(head,4);

  cout << ans->data << " " << ans->next;
}