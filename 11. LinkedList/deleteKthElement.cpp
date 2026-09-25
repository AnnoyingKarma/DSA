#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node():data(-1),next(nullptr){}
  Node(int data):data(data),next(nullptr){}
};

Node* array2LL(vector<int> arr){
  int n=arr.size();
  if(n==0){
    Node* head=new Node();
    return head;
  }
  Node* head=new Node(arr[0]);
  Node* traverse = head;
  for(int i=1; i<n; ++i){
    Node* temp=new Node(arr[i]);
    traverse->next=temp;
    traverse=temp;
  }
  return head;
}

void print(Node* head){
  Node* traverse=head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

Node* deleteKthElement (Node* head,int k){
  int cnt=2;
  if(k==1){
    Node* temp=head->next;
    return temp;
  }
  Node* traverse= head->next;
  Node* prev=head;
  while(traverse){
    if(cnt==k){
      prev->next=traverse->next;
    }
    cnt++;
    prev=traverse;
    traverse=traverse->next;
  }
  return head;

}

int main(){

  vector<int> arr={1,2,3,4,5,6};
  Node* head=array2LL(arr);

  print(head);
  cout << "\n";

  head=deleteKthElement(head,6);
  print(head);

}