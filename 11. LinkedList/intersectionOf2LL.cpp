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
//pretty good solution but not optimal enough hahah
Node* intersection(Node* headA,Node* headB){
  
  int cntA=0;
  int cntB=0;
  Node* traverse=headA;
  while(traverse){
    traverse=traverse->next;
    cntA++;
  }
  traverse=headB;
  while(traverse){
    traverse=traverse->next;
    cntB++;
  }

  bool first;
  int cntC=0;
  if(cntA<=cntB){
    cntC=cntB-cntA;
    first=false;
  }
  else{
    cntC=cntA-cntB;
    first=true;
  }
  
  Node* traverse1 = first ? headA : headB;
  Node* traverse2 = first ? headB : headA;
  while(cntC--){
    traverse1=traverse1->next;
  }

  while(traverse1&&traverse2){
    if(traverse1==traverse2){
      return traverse1;
    }
    traverse1=traverse1->next;
    traverse2=traverse2->next;
  }

  return nullptr;

}
*/

Node * intersection(Node* headA, Node* headB){

  Node* a=headA;
  Node* b=headB;

  while(a&&b){
    a=a->next;
    b=b->next;
    if(a==b) return a;
    if(!a && !b) return nullptr;
    if(!a){
      a=headB;
    }
    if(!b){
      b=headA;
    }
  }
  return nullptr;
}

int main(){

  vector<int> arr={5,4,3,2,1};

  Node* head= array2LL(arr);
  print(head);

}