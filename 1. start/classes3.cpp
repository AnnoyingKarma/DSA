#include <iostream>

//Inheritance

int main(){
    class Person{
        // using protected so its child class can access the data directly
        protected:
        std::string name;
        int age;

        public:
        Person(std::string name,int age) : name(name),age(age) {}
        void display(){
            std::cout << name << "\n" << age << "\n";
        }

    }; 

    class Employee : public Person{
        private:
        std::string department;
        public:
        Employee(std::string name, int age, std::string department) : Person(name , age) ,department(department){}
        std::string getDepartment(){
            return department;
        }
    };

    Person aa("Eik",23);
    Employee ab("Syl",32,"Rinz");
    ab.display();
    std::cout << ab.getDepartment() << "\n";
    
}