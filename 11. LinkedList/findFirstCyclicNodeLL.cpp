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
  traverse->next=head;
  return head;
}

// using fast and slow pointer
Node* detectCycle(Node* head){
  
  if(head==nullptr || head->next==nullptr) return NULL;

  Node* slowPointer=head;
  Node* fastPointer=head;

  while(fastPointer!=nullptr && fastPointer->next!=nullptr){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
    if(slowPointer==fastPointer){

      slowPointer=head;
      while(slowPointer!=fastPointer){
        slowPointer=slowPointer->next;
        fastPointer=fastPointer->next;
      }
      return slowPointer;
    }
  }
  return NULL;
}

void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

int main(){

  vector<int> arr={1,2};

  Node* head= array2LL(arr);

  cout << detectCycle(head)->data  << " ";

}