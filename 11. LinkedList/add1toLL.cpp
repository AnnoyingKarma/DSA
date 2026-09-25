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

/*
Node* addOne(Node* head){

  Node* notNine=nullptr;
  Node* traverse=head;
  
  while(traverse){
    if(traverse->data!=9) notNine=traverse;
    traverse=traverse->next;
  }

  if(notNine&&!notNine->next) {
    notNine->data++;
    return head;
  }
  else if(notNine==nullptr){
    traverse=head;
    Node* newHead=new Node(1);
    while(traverse){
      traverse->data=0;
      traverse=traverse->next;
    }
    newHead->next=head;
    return newHead;
  }
  notNine->data++;
  notNine=notNine->next;
  while(notNine){
    notNine->data=0;
    notNine=notNine->next;
  }
  return head;
}
*/

void add(Node* traverse,int &carry){
  
  if(!traverse) return;
  add(traverse->next,carry);
  carry=traverse->data+carry;
  int sum=traverse->data+carry;
  traverse->data=sum%10;
  carry=sum/10;
}

Node* addOne(Node* head){
  Node* traverse=head;
  int carry=0;
  add(head,carry);
  if(carry) {
    Node* newHead=new Node(1);
    newHead->next=head;
    return newHead;
  }
  return head;
}


int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);
  head=addOne(head);
  print(head);

}