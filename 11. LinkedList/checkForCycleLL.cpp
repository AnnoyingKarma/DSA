#include <iostream>
#include <vector>
#include <unordered_set>
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
//using unordered set
/*
bool hasCycle(Node* head){


  if(head==nullptr || head->next==nullptr) return false;
  Node* traverse= head;
  unordered_set<int*> uset;
  
  while(traverse){
    if(uset.find(&traverse->data)!=uset.end()){
      return true;
    }
    uset.insert(&traverse->data);
    traverse=traverse->next;
  }
  return false;
}
*/

/*
// just used O(1) space 
bool hasCycle(Node* head){

  Node* temp=new Node(-1);

  Node* traverse=head;
  while(traverse){
    Node* prev=traverse;
    traverse=traverse->next;
    prev->next=temp;
    prev=traverse;
    if(traverse->next==temp){
      return true;
    }
  }
  return false;

}
*/

//using hare and tortoise or floyd or fast and slow pointer
bool hasCycle(Node* head){

  if(head==nullptr || head->next == nullptr)return false;
  Node* slowPointer=head;
  Node* fastPointer=head;

  while(fastPointer!=nullptr && fastPointer->next!=nullptr){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
    if(slowPointer==fastPointer) return true;
  }
  return false;
}


void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

int main(){

  vector<int> arr={1,2};

  Node* head= array2LL(arr);
  cout << hasCycle(head) << "\n"; 
}