#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data, Node* next):data(data),next(next){}
  Node(int data):data(data),next(nullptr){}

};

int main(){

  Node node1(5,nullptr);
  Node node2=Node(10,nullptr);
  Node* node3= new Node(6,nullptr);
  cout << node1.data << " " << node1.next << "\n";
  cout << node2.data << " " << node2.next << "\n"; 
  cout << node3->data << " " << node3->next << "\n";
  delete node3;

}