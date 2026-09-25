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

Node* delMiddleNode(Node* head){
  Node* slowPointer=head;
  Node* fastPointer=head->next->next;

  if(!head || !head->next) return nullptr;
  while(fastPointer && fastPointer->next){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
  }
  Node* temp=slowPointer->next;
  slowPointer->next=slowPointer->next->next;
  delete temp;
  return head;
}

int main(){

  vector<int> arr={1};

  Node* head= array2LL(arr);
  head=delMiddleNode(head);
  print(head);

}