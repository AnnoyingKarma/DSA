#include<iostream>
#include<vector>

int main(){
		class OpOv{
			private:
				int a;
				float b;	
			public:
				OpOv(int a,float b):a(a),b(b){
				}
				OpOv operator +(OpOv z){
					return OpOv(a+z.a,b+z.b);	
				}

				void display(){
					std::cout << a << " " << b << "\n";
				}	
		};
		OpOv a(12,34.23);
		OpOv b(34,100.67);
		a.display();
		b.display();
		OpOv c = a+b;
		c.display();
}
