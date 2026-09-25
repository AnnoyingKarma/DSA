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
// SC=O(1),TC=O(N^2)
Node* sortList(Node* head){
  Node* traverse=head;
  while(traverse){
    Node* traverseTwo=traverse;
    while(traverseTwo){
      if(traverseTwo->data<=traverse->data){
        int temp=traverse->data;
        traverse->data=traverseTwo->data;
        traverseTwo->data=temp;
      }
      traverseTwo=traverseTwo->next;
    }
    traverse=traverse->next;
  }
  return head;
}
*/

/*
// SC=O(n), TC=O(N log N)
Node* sortList(Node* head){
  Node* traverse=head;
  vector<int> arr;
  while(traverse){
    arr.push_back(traverse->data);
    traverse=traverse->next;
  }
  sort(arr.begin(),arr.end());
  traverse=head;
  int i=0;
  while(traverse){
    traverse->data=arr[i++];
    traverse=traverse->next;
  }
  return head;
}
*/


Node* mergeLL(Node* left, Node* right){
  Node* temp=new Node(-1);
  Node* check=temp;
  while(left && right){
    if(left->data<=right->data){
      temp->next=left;
      left=left->next;
    }
    else{
      temp->next=right;
      right=right->next;
    }
    temp=temp->next;
  }
  if(left){
    temp->next=left;
  }
  else{
    temp->next=right;
  }
  return check->next;
}

Node* findMiddle(Node* head){
  if(!head || !head->next) return head;
  Node* slow=head;
  Node* fast=head->next;
  
  while(fast && fast->next){
    slow=slow->next;
    fast=fast->next;
  }
  return slow;
}

Node* sortList(Node* head){
  if(!head || !head->next)return head;
  Node* middle = findMiddle(head);
  Node* left=head;
  Node* right=middle->next;
  middle->next=nullptr;

  left=sortList(left);
  right=sortList(right);

  return mergeLL(left,right);
}

int main(){

  vector<int> arr={5,4,3,2,1};

  Node* head= array2LL(arr);
  head=sortList(head);
  print(head);

}