#include <iostream>
#include <vector>

using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int data):data(data),next(nullptr),prev(nullptr){}

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
    traverse->next=temp;
    temp->prev=traverse;
    traverse=temp;
  }
  return head;
}

void printDll (Node* head){
  Node* traverse=head;
  while(traverse){
    cout << traverse->data << " ";
     traverse=traverse->next;
  }

}

vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target){

  vector<pair<int,int>> vp;
  Node* traverse=head;
  while(traverse->next!=nullptr){
    if(traverse->data>=target){
      break;
    }
    traverse=traverse->next;
  }

  Node* start=head;
  while(start!=traverse && start->prev!=traverse){
    long long sum=traverse->data+start->data;
    if(sum>target){
      traverse=traverse->prev;
    }
    else if(sum<target){
      start=start->next;
    }
    else{
      vp.push_back({start->data,traverse->data});
      traverse=traverse->prev;
      start=start->next;
    }
  }
  return vp;

}

int main(){
  vector<int> arr={1,2,3,4};
  Node* head = arrayToDll(arr);
  vector<pair<int,int>> ans=findPairsWithGivenSum(head,5);

  for(auto it:ans){
    cout << it.first << " " << it.second ;
    cout << "\n";
  }
}