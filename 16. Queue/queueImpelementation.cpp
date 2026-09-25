#include <iostream>
using namespace std;

template <typename T>

class Queue{

	private:
		int rear;
		int front;
		int capacity;
		T* arr;
		
		void resize(){
			T* temp = new T[capacity*2];
			for(int i=front; i<rear; i++){
				temp[i-front]=arr[i];
			}
			rear-=front;
			front = 0;
			capacity*=2;
			delete[] arr;
			arr=temp;
		}

	public:
		Queue() : rear(0), front(0), capacity(1){
			arr=new T[capacity];
		}
		
		~Queue(){
			delete[] arr;
		}

		void push(T data){
			if(capacity<=rear) resize();
			arr[rear++]=data;
		}

		void pop(){
			if(front == rear){
				cout << throw runtime_error("Queue is empty");
			}
			front++;
		}	
		void display(){
			for(int i=front; i<rear; i++){
				cout << arr[i] << "  ";
			}
			cout << '\n';
		}
		int size(){
			return rear-front;
		}
};

int main(){
	Queue<int> q1;
	q1.push(100);
	q1.display();
	q1.push(200);
	q1.display();
	cout << q1.size() << "\n";
}
