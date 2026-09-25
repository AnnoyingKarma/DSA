#include <iostream>
#include <vector>

using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int data):data(data),next(nullptr),prev(nullptr){}

};

Node* arrayToDll (const vector<int> &arr){

  int n=arr.size();
  if(n==0){
    return nullptr;
  }
  Node* head=new Node(arr[0]);
  Node* traverse=head;
  for(int i=1; i<n; ++i){
    Node *temp = new Node(arr[i]);
    traverse->next=temp;
    temp->prev=traverse;
    traverse=temp;
  }
  return head;
}

void printDll (Node* head){
  Node* traverse=head;
  while(traverse){
    cout << traverse->data << " ";
     traverse=traverse->next;
  }

}

Node* removeDuplicate(Node* head){
  if(head==nullptr || head->next==nullptr) return head;
  Node* back=head;
  Node* traverse=head->next;
  while(traverse){
    if(traverse->data==back->data){
      back->next=traverse->next;
      if(traverse->next)traverse->next->prev=back;
      Node* temp=traverse;
      traverse=traverse->next;
      delete temp;
    }
    else{
      back=traverse;
      traverse=traverse->next;
    }
  }
  return head;
}


int main(){
  vector<int> arr={1,1,2,3,3};
  Node* head = arrayToDll(arr);
  
  printDll(head);
  cout << "\n";
  removeDuplicate(head);
  printDll(head);
}