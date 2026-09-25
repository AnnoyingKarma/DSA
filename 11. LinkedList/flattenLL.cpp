#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* bottom;

  Node(int data): data(data), next(nullptr), bottom(nullptr){}

};

Node* arrToLL(vector<vector<int>> arr){
  Node* head=new Node(-1);
  Node* traverseN=head;
  Node* traverseB=head;
  int n=arr.size();
  for(int i=0; i<n; ++i){
    int m=arr[i].size();
    Node* temp=new Node(arr[i][0]);
    traverseN->next=temp;
    traverseN=traverseN->next;
    traverseB=traverseN;
    for(int j=1; j<m; j++){
      temp=new Node(arr[i][j]);
      traverseB->bottom=temp;
      traverseB=traverseB->bottom;
    }
  }
  return head->next;
}

void print(Node* head){
  Node* traverse=head;
  while(traverse){
    Node* traverseB=traverse;
    while(traverseB){
      cout << traverseB->data << " ";
      traverseB=traverseB->bottom;
    }
    cout << "\n";
    traverse=traverse->next;
  }
  cout << "\n";
}

/*
Node* addNode(Node* root,Node* value){
  if(!value) return value;
  if(!root) return root;
  Node* prev=root;
  Node* traverse=prev->bottom;
  if(value->data<=prev->data){
    value->bottom=prev;
    return value;
  }
  while(traverse){
    if(value->data<traverse->data){
      prev->bottom=value;
      value->bottom=traverse;
      return root;
    }
    prev=traverse;
    traverse=traverse->bottom;
  }
  prev->bottom=value;
  value->bottom=nullptr;
  return root;
}

Node* flatten (Node* root){
  if(!root || !root->next) return root;
  Node* traverse=root;
  while(traverse){
    Node* additionPoint=root;
    Node* traverseB=traverse->next;
    while(traverseB){
      Node* temp=traverseB->bottom;
      root=addNode(additionPoint,traverseB);
      traverseB=temp;
    }
    traverse=traverse->next;
  }
  return root;
}

*/

Node* merge(Node* head,Node* traverse){
  while(traverse){
    Node* temp=traverse;
    Node* back=head;
    Node* current=head->bottom;
    while(temp && current){
      if(temp->data<=current->data){
        back->bottom=temp;
        back=temp;
        temp=temp->bottom;
        back->bottom=current;
      }
      else{
        back=back->bottom;
        current=current->bottom;
      }
    }
    if(temp!=nullptr){
      back->bottom=temp;
    }
    traverse=traverse->next;
  }
  return head->bottom;
}

Node* flatten(Node* root){
  if(root==nullptr || root->next==nullptr) return root;
  Node* head=new Node(-1);
  head->bottom=root;
  Node* traverse=root->next;
  return merge(head,traverse);

}

int main(){

  vector<vector<int>> arr={{7,15,21,25,36,39,42,51,52,54,59,64,64,67,72,72,72,75,92,97},{2,14,28,29,58,77},{15,23,23,25,26,28,32,55,56,58,63,67,68,74,76,79,90,93,97},{67,76}};

  Node* head=arrToLL(arr);
  print(head);
  head=flatten(head);
  print(head);
}