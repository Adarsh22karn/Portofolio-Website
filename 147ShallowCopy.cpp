#include <iostream>
using namespace std;


//Shallow Copy (The Default): You copy the address of the pointer. 
//Both objects point to the same memory location. If one changes the data, the other is affected.



class ShallowStudent 
{
    public:
        int* marks; // A pointer variable

        // Constructor
        ShallowStudent(int m) {
            marks = new int(m); // Allocating memory dynamically
        }

        // SHALLOW COPY CONSTRUCTOR
        // Copies only the pointer address, not the actual memory
        ShallowStudent(const ShallowStudent &s) {
            this->marks = s.marks; 
        }

        void display() {
            cout << "Marks: " << *marks << endl;
        }
};

int main() {
    cout << "--- SHALLOW COPY DEMO ---" << endl;
    ShallowStudent s1(90);
    ShallowStudent s2 = s1; // s2 copies s1 (Shallow)

    // We only change s1
    *s1.marks = 50; 

    // RESULT: s2 is also changed!
    cout << "s1 (Original): "; s1.display(); 
    cout << "s2 (Copy):     "; s2.display(); 
    
    return 0;
}
