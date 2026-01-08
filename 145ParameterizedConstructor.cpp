#include <iostream>
#include <string>
using namespace std;

class Student 
{   
    private:
        // Member variables
        int age;
        string name;

    public:
        // Parameterized Constructor
        // Parameters have the SAME names as member variables
        Student(string name, int age) 
        {
            // 'this->name' refers to the object's member variable
            // 'name' (on the right) refers to the parameter passed in
            this->name = name; 
            this->age = age;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    // Creating object
    Student s("Adarsh", 21);
    
    // Verifying values
    s.display();
}
