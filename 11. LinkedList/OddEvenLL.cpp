#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data, Node* next):data(data),next(next){}
  Node(int data):data(data),next(nullptr){}
};

Node* array2LL(vector<int> &arr){
  int n=arr.size();
  Node* head= new Node(arr[0]);
  Node* traverse = head;
  for(int i=1; i<n; i++){
    Node* temp=new Node(arr[i]);
    traverse->next = temp;
    traverse=temp;
  }
  return head;
}


void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

/*
Node* OddEven(Node* head){

  if(head==nullptr || head->next==nullptr) return head;
  Node* odd=head;
  Node* even=head->next;
  Node* join=even;
  while(even->next!=nullptr && odd->next!=nullptr){
    odd->next=odd->next->next;
    odd=odd->next;
    if(even->next->next!=nullptr) {
      even->next=even->next->next;
      even=even->next;
    }
  }
  even->next=nullptr;
  odd->next=join;
  return head;
}
*/

Node* OddEven(Node* head) {
    if (!head || !head->next) return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even; // Keep the start of even list

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead; // Connect end of odd list to head of even list
    return head;
}


int main(){

  vector<int> arr={1,2,3,4};

  Node* head= array2LL(arr);
  
  OddEven(head);
  print(head);

}