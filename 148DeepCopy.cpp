#include <iostream>
using namespace std;


//Deep Copy: You create new memory and copy the actual value. 
//The objects are totally independent.


class DeepStudent 
{
    public:
        int* marks;

        // Constructor
        DeepStudent(int m) {
            marks = new int(m);
        }

        // DEEP COPY CONSTRUCTOR
        DeepStudent(const DeepStudent &s) {
            // 1. Allocate NEW memory
            marks = new int; 
            
            // 2. Copy the VALUE from the source, not the address
            *marks = *s.marks; 
        }

        void display() {
            cout << "Marks: " << *marks << endl;
        }
};

int main() {
    cout << "--- DEEP COPY DEMO ---" << endl;
    DeepStudent s1(90);
    DeepStudent s2 = s1; // s2 copies s1 (Deep)

    // We change s1
    *s1.marks = 50; 

    // RESULT: s2 remains safe and unchanged
    cout << "s1 (Original): "; s1.display(); 
    cout << "s2 (Copy):     "; s2.display(); 

    return 0;
}
