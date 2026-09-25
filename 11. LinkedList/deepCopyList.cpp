#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Node {
public:
  int val;
  Node* next;
  Node* random;
  
  Node(int _val) {
    val = _val;
    next = NULL;
    random = NULL;
  }
};

Node* array2LL(vector<pair<int,int>> &arr){
  int n=arr.size();
  Node* head= new Node(arr[0].first);
  Node* traverse = head;
  for(int i=1; i<n; i++){
    Node* temp=new Node(arr[i].first);
    traverse->next = temp;
  }

  return head;
}


void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->val << " " << traverse->random->val << "\n";
    traverse=traverse->next;
  }
}

/*
Node* deepCopy(Node* head){
  Node* traverse=head;
  if(head==nullptr) return head;
  unordered_map<Node*, Node*> umap;

  while(traverse){
    umap[traverse]=new Node(traverse->val);
    traverse=traverse->next;
  }
  traverse=head;
  while(traverse){
    umap[traverse]->next=umap[traverse->next];
    umap[traverse]->random=umap[traverse->random];
    traverse=traverse->next;
  }
  return umap[head];
}
*/

Node* deepCopy(Node* head){

  if(!head) return head;

  Node* traverse=head;

  while(traverse){
    Node* temp=new Node(traverse->val);
    temp->next=traverse->next;
    traverse->next=temp;
    traverse=temp->next;
  }

  traverse=head;
  while(traverse){
    if(traverse->random) traverse->next->random=traverse->random->next;
    traverse=traverse->next->next;
  }

  Node* newHead=head->next;
  traverse=head;
  while(traverse){
    Node* temp=traverse->next;
    traverse->next=temp->next;
    traverse=traverse->next;
    if(traverse)temp->next=traverse->next;
  }
  return newHead;
}


int main(){

  vector<pair<int,int>> arr={{7,NULL},{13,0},{11,4},{10,2},{1,0}};

  Node* head= array2LL(arr);
  print(head);

}