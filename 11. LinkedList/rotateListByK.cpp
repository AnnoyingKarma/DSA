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

Node* rotateRight(Node* head,int k){
  if(head==nullptr || head->next==nullptr) return head;
  Node* traverse=head;
  int cnt=0;
  while(traverse->next){
    cnt++;
    traverse=traverse->next;
  }
  cnt++;
  traverse->next=head;
  k=k%cnt;
  if(k==0){
    traverse->next=nullptr;
    return head;
  }
  int n=cnt-k;
  traverse=head;
  for(int i=1; i<n; i++){
    traverse=traverse->next;
  }
  Node* newHead=traverse->next;
  traverse->next=nullptr;

  return newHead;
}

int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);

  print(head);
  cout << "\n";
  head=rotateRight(head,2);
  print(head);
}