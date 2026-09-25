#include <iostream>

int main(){
    //will be using setter and getter instead of constructor

    class Student{
        private:
            std::string firstName;
            std::string lastName;
            int id;
        public:
            void setFirstName(std::string firstName){
                this->firstName=firstName;
            }
            void setLastName(std::string lastName){
                this->lastName=lastName;
            }
            void setId(int id){
                this->id=id;
            }
            std::string getName(){
                return firstName + " " + lastName + "\n";
            }
            int getId(){
                return id;
            }
            void display(){
                std::cout << firstName << " " << lastName << "\n" << id << "\n";
            }
    };   
    Student aa;
    aa.setFirstName("Rig");
    aa.setLastName("even");
    aa.setId(11967);
    std::string a = aa.getName();
    std::cout << a;
    std::cout << aa.getId();
    std::cout << "\n";
    aa.display();
}