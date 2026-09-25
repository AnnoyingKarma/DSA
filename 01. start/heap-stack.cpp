#include <iostream>

void print(int &z){
    std::cout << z << " " << &z << " " << sizeof(z) << "\n"; 
}

int main(){    
    //stack array
    int arr[10]={0};
    //heap array
    int * brr = new int[10];

    std::cout << "\n" << "Heap Array" << "\n";
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        print(arr[i]);
    }
    std::cout << "\n" << "Heap Array" << "\n";
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        print(brr[i]);
    }

    delete[] brr;   
}