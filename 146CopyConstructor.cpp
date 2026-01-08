#include <iostream>
#include <string>
using namespace std;

class Student 
{   
    private:
        int age;
        string name;

    public:
        // 1. Parameterized Constructor (to create the original object)
        Student(string n, int a) 
        {
            name = n;
            age = a;
        }

        // 2. Copy Constructor
        // Syntax: ClassName(const ClassName &reference_variable)
        Student(const Student &s) 
        {
            cout << "Copy Constructor called!" << endl;
            name = s.name; // Copying name from source object 's'
            age = s.age;   // Copying age from source object 's'
        }

        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main()
{
    // Create original object (uses Parameterized Constructor)
    Student s1("Adarsh", 21);
    cout << "s1 details: ";
    s1.display();

    cout << "-----------------------" << endl;

    // Create new object 's2' as a copy of 's1'
    // This triggers the Copy Constructor
    Student s2 = s1; 
    
    cout << "s2 details: ";
    s2.display();

    return 0;
}
