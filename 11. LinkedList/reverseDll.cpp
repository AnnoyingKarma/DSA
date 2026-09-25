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

Node* reverseDLL(Node * head){
  
  Node* traverse=head;
  Node* temp=nullptr;
  while(traverse!=nullptr){
    temp=traverse->left;
    traverse->left=traverse->right;;
    traverse->right=temp;
    traverse=traverse->left;
  }
  return temp->left;
}

int main(){
  vector<int> arr={1,2,3,4,5,6};
  Node* head = arrayToDll(arr);
  printDll(head);
  cout << "\n";
  head=reverseDLL(head);
  printDll(head);
}

