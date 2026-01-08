#include <iostream>
#include <string>
using namespace std;

class Student 
{
    private:
        string name;
        int age;
        int height; 

    public:
        // --- SETTERS (Using 'this') ---
        // 'this->name' refers to the class variable
        // 'name' refers to the function parameter
        
        void setName(string name) {
            this->name = name; 
        }

        void setAge(int age) {
            this->age = age;
        }

        void setHeight(int height) {
            this->height = height;
        }

        // --- GETTERS ---
        // (Using 'this' here is optional but good for consistency)
        string getName() {
            return this->name;
        }

        int getAge() {
            return this->age;
        }

        int getHeight() {
            return this->height;
        }
};

int main() 
{
    Student s;

    // Using setters to assign values
    s.setName("Adarsh");
    s.setAge(21);
    s.setHeight(175);

    // Using getters to read values
    cout << "--- Student Details ---" << endl;
    cout << "Name:   " << s.getName() << endl;
    cout << "Age:    " << s.getAge() << endl;
    cout << "Height: " << s.getHeight() << " cm" << endl;

    return 0;
}
