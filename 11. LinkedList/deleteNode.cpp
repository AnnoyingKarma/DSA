#include <iostream>
#include <vector>
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

Node* findVal(Node* head,int val){
  Node* traverse =head;
  while(traverse){
    if(traverse->data==val){
      return traverse;
    }
    traverse=traverse->next;
  }
  return traverse;
}

void deleteElement(Node* val){
  Node* traverse=val;
  while(traverse->next->next!=nullptr){
    traverse->data=traverse->next->data;
    traverse->next=traverse->next->next;
  }
}

void print(Node* head){
  Node* traverse=head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

int main(){
  vector<int> arr={1,2,5,9};
  Node* head=array2LL(arr);
  Node* val=findVal(head,5);

  deleteElement(val);
  print(head);
}
