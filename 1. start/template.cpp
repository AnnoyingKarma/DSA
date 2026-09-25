#include <iostream>

	template <class T>
	T name = "Truce";
	// or
	template <typename Y>
	Y score = 75.123323;	

	template <typename C>

void print (C& value){
	std::cout << "Value : " << value << "\n";
}

int main(){

	std::cout << " " << score<int> << " " << name<std::string> << "\n";
	int a=100;
	float b=12.12323;
	std::string c="Sycin";
	print(a);
	print(b);
	print(c);
}
