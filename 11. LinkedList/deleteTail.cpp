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

Node* deleteTail(Node* head){
  Node* traverse=head;
  if(traverse->next==nullptr || traverse==nullptr)return nullptr;
  /* simple way
  while(traverse){
    Node* prev=traverse;
    traverse=traverse->next;
    if(traverse->next==nullptr){ 
      prev->next=nullptr;
      delete traverse;
      return head;
    }
  }
  */

  while(traverse->next->next!=nullptr){
    traverse=traverse->next;
  }
  delete traverse->next;
  traverse->next=nullptr;
  return head;
}

int main(){
  vector<int> arr={1,2,3};
  Node* head=array2LL(arr);
  print(head);
  head=deleteTail(head);
  cout<< "\n";
  print(head);
} 

