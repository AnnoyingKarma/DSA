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

/*
int countNodesinLoop(Node *head) {
  if(head==nullptr || head->next==nullptr)return 0;
  Node* traverse=head;
  int cnt=-1;
  head->data=cnt;
  while(traverse->next!=nullptr){
    traverse=traverse->next;
    if(traverse->data<0){
      traverse->data++;
      return abs(cnt-traverse->data);
    }
    cnt--;
    traverse->data=cnt;
  }
  return 0;

}
*/
 
int countNodesinLoop(Node* head){

  if(head==nullptr || head->next==nullptr) return 0;

  Node* slowPointer = head;
  Node* fastPointer = head;
  int cnt=0;
  while( fastPointer!=nullptr && fastPointer->next!=nullptr){

    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;

    if(slowPointer==fastPointer){
      do{
        slowPointer=slowPointer->next;
        cnt++;
      }while(slowPointer!=fastPointer);
      return cnt;
    }

  }
  return 0;
}

void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);
  cout << countNodesinLoop(head) << "\n"; 
}