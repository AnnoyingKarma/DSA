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

bool length(Node* traverseA, Node* traverseB){
  int cntA=0,cntB=0;
  while(traverseA){
    cntA++;
    traverseA=traverseA->next;
  }
  while (traverseB){
    cntB++;
    traverseB=traverseB->next;
  }
  if(cntA>cntB){
    return false;
  }
  else{
    return true;
  }
  
}

Node* addLL(Node* headA, Node* headB){

  Node* traverseA=headA;
  Node* traverseB=headB;
  int carry=0;
  while(traverseA){
    int sum=traverseA->data+carry;
    if(traverseB){
      sum+=traverseB->data;
      traverseB=traverseB->next;
    }
    traverseA->data=sum%10;
    carry=sum/10;
    if(traverseA->next==nullptr && carry!=0){
      Node* newNode=new Node(carry);
      traverseA->next=newNode;
      break;
    }
    traverseA=traverseA->next;
  }

  return headA;
}

int main(){

  vector<int> arr={3,5};

  Node* headA= array2LL(arr);
  arr={4,5,9,9};
  Node* headB=array2LL(arr);
  Node* head=nullptr;
  if(length(headA,headB)){
    head=addLL(headB,headA);
  }
  else head=addLL(headA,headB);
  print(head);
}