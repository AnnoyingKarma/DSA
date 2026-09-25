#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node():data(-1),next(nullptr){}
  Node(int data):data(data),next(nullptr){}
  Node(int data,Node* next):data(data),next(next){}
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

Node* insertAtKth(Node* head, int k){
  Node* temp=new Node(-1);
  if(k==1){
    Node* temp=new Node(-1,head);
    return temp;
  }
  Node* traverse =head;

  int cnt=2;
  while(traverse){
    if(cnt==k){
      temp->next=traverse->next;
      traverse->next=temp;
      return head;
    }
    traverse=traverse->next;
    cnt++;
  }
  return head;
}


int main(){

  vector<int> arr={1,2,3,4,5,6};
  Node* head=array2LL(arr);

  print(head);
  cout << "\n";

  head=insertAtKth(head,7);
  print(head);

}