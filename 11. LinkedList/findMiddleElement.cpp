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
/*
Node* middleNode(Node* head) {
  Node* traverse=head;
  int cnt=0;
  while(traverse){
    cnt++;
    traverse=traverse->next;
  }

  cnt=(cnt/2)+1;
  traverse=head;
  for(int i=1; i<cnt; ++i){
    traverse=traverse->next;
  }
  return traverse;

}
*/

//floyd algo
Node* middleNode(Node* head) {

  Node* slowPointer=head;
  Node* fastPointer=head;

  while(fastPointer!=nullptr && fastPointer->next!=nullptr){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
  }
  return slowPointer;
}

int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);

  head=middleNode(head);
  cout << head->data;
}