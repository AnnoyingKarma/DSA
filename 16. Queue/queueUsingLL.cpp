#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int value):data(value),next(nullptr){

		}

};

class Queue{
	private:
		Node* head;
		int space;
	
	public: 
		Queue():head(nullptr)
}
