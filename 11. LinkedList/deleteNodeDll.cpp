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

Node* deleteNode(Node* head, int x) {

  if(x==1){
    head->right->left=nullptr;
    return head->right;
  }
  Node* traverse = head->right;
  int cnt=2;
  while(traverse){
    if(cnt==x && traverse->right==nullptr){
      traverse->left->right=nullptr;
      return head;
    }
    else if(cnt==x){
      traverse->left->right=traverse->right;
      traverse->right->left=traverse->left;
      return head;
    }
    traverse=traverse->right;
    cnt++;
  }
  return head;
}

int main(){
  vector<int> arr={1,2,3,4,5,6};
  Node* head = arrayToDll(arr);
  printDll(head);
  cout << "\n";
  head=deleteNode(head,6);
  printDll(head);
}

