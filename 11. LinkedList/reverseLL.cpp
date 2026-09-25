#include <iostream>
#include <vector>
#include <stack> 
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

//iterative
/*
Node* reverseList(Node* head) {

  Node* traverse=head;
  stack<int> s;
  if(head==nullptr||head->next==nullptr) return head;
  
  while(traverse){
    s.push(traverse->data);
    traverse=traverse->next;
  }
  traverse=head;
  while(traverse){
    traverse->data=s.top();
    s.pop();
    traverse=traverse->next;
  }
  return head;

}

Node* reverseList(Node* head){
  if(head==nullptr || head->next==nullptr) return head;
  Node* back=nullptr;
  Node* traverse=head;
  
  while(traverse){
    Node* front=traverse->next;
    traverse->next=back;
    back=traverse;
    traverse=front;
  }
  return back;
}
*/

Node* reverseList(Node* head){

/// to do 


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
  print(head);
  cout << "\n";
  head=reverseList(head);
  print(head);
  
}