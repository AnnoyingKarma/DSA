#include <iostream>
#include <vector>
#include <unordered_set>
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
Node* removeNthFromEnd(Node* head, int n){
  if(!head || !head->next) return head;
  Node* slowPointer=head;
  Node* fastPointer=head;
  int cnt=1;
  while(fastPointer->next && fastPointer->next->next){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
    cnt++;
  }
  cnt*=2;
  if(!fastPointer->next)cnt--;

  Node* traverse=head;
  Node* prev=nullptr;

  while(traverse){
    if(cnt==n){
      if(prev==nullptr) return traverse->next;
      prev->next=traverse->next;
      return head;
    }
    prev=traverse;
    traverse=traverse->next;
    cnt--;
  }
  return head;
}
*/

Node* removeNthFromEnd(Node* head,int n){
  if(head==nullptr || head->next == nullptr) return nullptr;
  
  Node* slowPointer=head;
  Node* fastPointer=head;
  int cnt=n;
  while(fastPointer){
    if(cnt<0){
      slowPointer=slowPointer->next;
    }
    fastPointer=fastPointer->next;
    cnt--;
  }
  cout << cnt << "\n";
  if(cnt==0) return head->next;
  Node* temp=slowPointer->next;
  slowPointer->next=slowPointer->next->next;
  delete temp;
  return head;
}


int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);
  head=removeNthFromEnd(head,3);
  print(head);

}