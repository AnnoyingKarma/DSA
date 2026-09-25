#include <iostream>
using namespace std;

template <typename T>


class Stackk{
  private:
    T* arr;
    int capacity;
    int topp;

    void resize(){
      int newCapacity=capacity*2;
      T* newArr = new T[newCapacity];
      for(int i=0; i<=topp; i++){
        newArr[i]=arr[i];
      }
      delete[] arr;
      arr=newArr;
      capacity=newCapacity;
    }

  public:

    Stackk(int initialCapacity = 1):capacity(initialCapacity),topp(-1){
      arr= new T[capacity];
    }

    void push(T x){
      if(topp==capacity-1){
        resize();
      }
      arr[++topp]=x;
    }
    void pop(){
      if(empty()) throw std::runtime_error("Stack is empty");
      topp--;
    }
    T top(){
      if(empty()) throw std::runtime_error("Stack is empty");
      return arr[topp];
    }
    int size(){
      return topp+1;
    }
    bool empty(){
      return topp<0;
    }

    ~Stackk(){
      delete[] arr;
    }

};



int main(){

  Stackk<string> st;
  cout << st.empty() << "\n";
  st.push("hello");
  st.push("how");
  st.push("are");
  st.push("you");
  cout << st.top() << "\n";
  st.pop();
  cout << st.top() << "\n";
	
}
