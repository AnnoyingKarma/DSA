#include <iostream>
#include <vector>
#include <algorithm>
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

Node* segregate(Node* head){
  Node* zero=new Node(-1);
  Node* newHead0=zero;
  Node* one=new Node(-1);
  Node* newHead1=one;
  Node* two=new Node(-1);
  Node* newHead2=two;

  Node* traverse=head;
  
  while(traverse){
    if(traverse->data==0){
      zero->next=traverse;
      zero=zero->next; 
    }
    else if(traverse->data==1){
      one->next=traverse;
      one=one->next; 
    }
    else if(traverse->data==2){
      two->next=traverse;
      two=two->next;
    }
    traverse=traverse->next;
  }

  zero->next = (newHead1->next) ? newHead1->next : newHead2->next;
  one->next=newHead2->next;
  two->next=nullptr;

  Node* newHead=newHead0->next;

  delete(newHead0);
  delete(newHead1);
  delete(newHead2);

  return newHead;
}

int main(){

  vector<int> arr={2,1,0};

  Node* head= array2LL(arr);
  head=segregate(head);
  print(head);

}