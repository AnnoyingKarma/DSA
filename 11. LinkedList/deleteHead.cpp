#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next=nullptr;

  Node(int x):data(x){}
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
  Node* traverse=head;
  while(traverse!=nullptr){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

Node* deleteHead(Node* head){
  if(head==nullptr) return head;
  Node* temp=head;
  Node* next=head->next;
  delete temp;
  head=next;
  return head;
}

int main(){
  vector<int> arr={1,2,3,4,5,6,7,8,9};
  Node* head=array2LL(arr);
  print(head);
  head=deleteHead(head);
  cout<< "\n";
  print(head);
} 
