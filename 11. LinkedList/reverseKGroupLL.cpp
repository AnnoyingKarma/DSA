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

bool checkAvailable(const Node* traverse,int k){
  while(k--){
    if(traverse==nullptr) return false;
   traverse = traverse->next;
  }
  return true;
}

Node* reverseGroup(Node* head,int k){
  Node* newHead=nullptr;
  Node* back=nullptr;
  Node* front=head->next;
  Node* joinPoint1=head;
  Node* joinPoint2=nullptr;
  Node* traverse=head;
  Node* temp=nullptr;
  while(traverse){
    int x=k;
    
    if(!checkAvailable(traverse,k)){
      joinPoint1->next=traverse;
      break;
    }
    temp=traverse;
    while(x--){
      traverse->next=back;
      back=traverse;
      traverse=front;
      if(front==nullptr) break;
      front=front->next;
    }
    joinPoint2=back;
    if(!newHead) newHead=back;
    if(!joinPoint1)joinPoint1=back;
    if(!joinPoint2 && joinPoint1!=back)joinPoint2=back;
    if(joinPoint2==newHead) joinPoint2=nullptr;
    if(joinPoint1 && joinPoint2){
      joinPoint1->next=joinPoint2;
      joinPoint1=temp;
      joinPoint2=nullptr;
      temp->next=nullptr;
    }
  }
  if(newHead) return newHead;
  return head;
}

int main(){

  vector<int> arr={1,2,3,4,5,6};

  Node* head= array2LL(arr);

  print(head);
  cout << "\n";
  head=reverseGroup(head,1);
  print(head);
}