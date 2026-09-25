#include <iostream>

void print (int &i){
	std:: cout << i << " " << &i << " " << sizeof(i) << "\n";
}


int main(int argc,char * argv[]){
	int a=10;
   	int b=25;
	int *pa=&a;
	int *pb=&b;
	
	print(a);
	print(b);

	return 0;
}
