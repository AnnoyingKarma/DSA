#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* below;

		Node(int value):data(value),below(nullptr){

		}
};

class Stack {
	private:
		Node* top;
		int capacity;
	public:
		Stack():top(nullptr),capacity(0){

		}
		
		void push(int value){
			Node* temp = new Node(value);
			temp->below=top;
			top=temp;
			capacity++;
		}

		void pop(){
			if(capacity == 0) throw runtime_error("Stack is empty");
			Node* temp = top;
			top=top->below;
			capacity--;
			delete temp;
		}
		
		int atTop(){
			if(capacity == 0) throw runtime_error("Stack is empty");
			return top->data;
		}

		int size(){
			return capacity;
		}

		void display(){
			if(capacity == 0) throw runtime_error("Stack is empty");
			
			Node* temp = top;
			while(temp!=nullptr){
				cout << temp->data << " ";
				temp=temp->below;
			}
		}

};

int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.display();
	s.pop();
	s.display();
	s.pop();
	cout << s.size() << "\n";
	s.push(10);
	s.push(10);
	s.push(10);
	s.push(10);
	s.push(10);
	s.push(10);
	s.push(10);
	s.display();
}
