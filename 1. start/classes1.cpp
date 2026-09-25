#include <iostream>
using namespace std;

int main(){
   class Student{
        private:
            string name;
            int id;
            float avg;
        public:
        //1st constructor
            Student(string name,int id,float avg): 
            name (name), id (id), avg (avg)
            {}

        //2nd constructor
            Student(string name, int id, float avg){
            this->name=name;
            this->id=id;
            this->avg=avg;
            }
            
        // By using this you don't have to provide paramenters and just initialize without any parameters
            Student()=default;

            void display(){
                cout << name << "\n" << id << "\n" << avg << "\n"; 
            }
            

   };
    Student aa("Resk",001,2.34f);
    aa.display();
    Student ab;
    ab.display();
}