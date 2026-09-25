#include <iostream>

int main(){
	class DynamicArray{
		private: 
   			int *arr;
			int size;
		public:
			DynamicArray(int size):size(size),arr(new int[size])
			{
				for(int i=0; i<size; ++i){
					arr[i]=i+1;
				}	
			}
			~DynamicArray(){
				delete [] arr;
			}
			void setValue(int index,int value){
				arr[index]=value;
			}
			int getValue(int index){
				return arr[index];
			}
			void displayAll(){
				for(int i=0; i<size; ++i){
					std::cout << "Values : " << arr[i] << " -- " << "Index : " << i << "\n";
				}
			}
	};
	DynamicArray ab(5);
	ab.setValue(3,100);
	std::cout << ab.getValue(3) << "\n";
	ab.displayAll();
}
