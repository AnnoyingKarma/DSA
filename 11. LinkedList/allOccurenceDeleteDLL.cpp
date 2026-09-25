#include <iostream>
#include <vector>

using namespace std;

class Node{
  public:
  int data;
  Node* right;
  Node* left;

  Node(int data):data(data),right(nullptr),left(nullptr){}

};

Node* arrayToDll (const vector<int> &arr){

  int n=arr.size();
  if(n==0){
    return nullptr;
  }
  Node* head=new Node(arr[0]);
  Node* traverse=head;
  for(int i=1; i<n; ++i){
    Node *temp = new Node(arr[i]);
    traverse->right=temp;
    temp->left=traverse;
    traverse=temp;
  }
  return head;
}

void printDll (Node* head){
  Node* traverse=head;
  while(traverse){
    cout << traverse->data << " ";
     traverse=traverse->right;
  }

}
/*
void deleteOcc (Node **head, int x){
  Node* traverse=*head;
  Node* prev=nullptr;
  while (traverse) {
    if(traverse->data==x){
      if(traverse->left){
        traverse->left->right=traverse->right;
      }else{
        *head=traverse->right;
      }
      if(traverse->right){
        traverse->right->left=traverse->left;
      }
      Node* temp=traverse;
      traverse=traverse->right;
      delete temp;
    }else{
      prev=traverse;
      traverse=traverse->right;
    }
    
  }
}
*/

void deleteOcc(Node **head,int x){
  Node* dummy=new Node(-1);
  dummy->right=*head;
  Node* traverse=*head;
  Node* prev=dummy;
  while(traverse){
    if(traverse->data!=x){
      prev->right=traverse;
      traverse->left=prev;
      prev = traverse;
    }
    else{
      Node* temp=traverse;
      traverse=traverse->right;
      delete temp;
      continue;
    }
    traverse=traverse->right;
  }
  prev->right=nullptr;
  *head=dummy->right;
  if(*head){
    (*head)->left=nullptr;
  }
  delete dummy;
}


int main(){
  vector<int> arr={1};
  Node* head = arrayToDll(arr);
  printDll(head);
  cout << "\n";
  deleteOcc(&head,1);
  printDll(head);
}