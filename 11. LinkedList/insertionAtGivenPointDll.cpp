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

void addNode(Node *head, int pos, int data)
{
  Node* traverse = head;
  size_t cnt=0;
  while(traverse){
    if(cnt==pos){
      Node* temp=new Node(data);
      if(traverse->right==nullptr){
        traverse->right=temp;
        temp->left=traverse;
        return;
      }
      else{
      temp->right=traverse->right;
      temp->left=traverse;
      traverse->right->left=temp;
      traverse->right=temp;
      return;
      }
    }
    traverse=traverse->right;
    cnt++;
  }
}

int main(){
  vector<int> arr={1,2,3,4,5,6};
  Node* head = arrayToDll(arr);
  printDll(head);
  addNode(head,0,100);
  cout << "\n";
  printDll(head);
}

