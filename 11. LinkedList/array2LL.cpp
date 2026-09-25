#include <iostream>
#include <vector>
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

int lengthOfLL(Node* head){
  int cnt=0;
  Node* temp=head;
  while(temp){
    temp=temp->next;
    cnt++;
  }
  return cnt;
}

bool checkForValueInLL(Node* head, int value){
  Node* temp=head;

  while(temp){
    if(temp->data==value) return true;
    temp=temp->next;
  }
  return false;
}

int main(){

  vector<int> arr={1,0,2,43,45,123};

  Node* head= array2LL(arr);

  Node* temp=head;

  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  cout << "\n" << lengthOfLL(head) << "\n";

  cout << checkForValueInLL(head, 123);
}