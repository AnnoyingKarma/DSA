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


void print(Node* head){
  Node* traverse= head;
  while(traverse){
    cout << traverse->data << " ";
    traverse=traverse->next;
  }
}

Node* reverseLL(Node* head){
  if(head==nullptr || head->next==nullptr) return head;
  Node* traverse=head;
  Node* back=nullptr;

  while(traverse){
    Node* front=traverse->next;
    traverse->next=back;
    back=traverse;
    traverse=front;
  }
  return back;
}


bool isPalindrome(Node* head){
  Node* slowPointer=head;
  Node* fastPointer=head;

  while(fastPointer->next && fastPointer->next->next){
    slowPointer=slowPointer->next;
    fastPointer=fastPointer->next->next;
  }

  Node* firstHalf=head;
  Node* secondHalf=reverseLL(slowPointer->next);
  Node* temp=secondHalf;
  while(secondHalf){
    if(secondHalf->data != firstHalf->data){
      reverseLL(temp);
      return false;

    }
    secondHalf=secondHalf->next;
    firstHalf=firstHalf->next;
  }
  reverseLL(temp);
  return true;
}

/*
bool isPalindrome(Node* head){
  string s;
  Node* traverse= head;

  while(traverse){
    s+=traverse->data;
    traverse=traverse->next;
  }

  int n=s.length();

  int pointerOne=0;
  int pointerTwo=n-1;

  while(pointerOne<=pointerTwo){
    if(s[pointerOne]==s[pointerTwo]){
      pointerOne++;
      pointerTwo--;
    }
    else{
      return false;
    }
  }
  return true;

}
*/

int main(){

  vector<int> arr={1,2,3,4,5};

  Node* head= array2LL(arr);

  cout << isPalindrome(head);

}