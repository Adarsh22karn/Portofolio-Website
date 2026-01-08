#include <iostream>
using namespace std;

class Hero {
    public:
        // Constructor (Born)
        Hero() {
            cout << "Constructor: Hero is born!" << endl;
        }

        // DESTRUCTOR (Dies)
        // The tilde (~) sign means "Not" or "Opposite" of constructor
        ~Hero() {
            cout << "Destructor bhai called (Hero died)" << endl;
        }
};

int main() {
    
    // 1. STATIC ALLOCATION
    // Automatically created, Automatically destroyed
    cout << "--- Creating Static Hero a ---" << endl;
    Hero a; 

    // 2. DYNAMIC ALLOCATION
    // Manually created using 'new'
    cout << "\n--- Creating Dynamic Hero b ---" << endl;
    Hero *b = new Hero();

    // 3. MANUAL DELETION
    // We must manually kill 'b' because we used 'new'
    cout << "\n--- Manually deleting b ---" << endl;
    delete b; // This calls Destructor for b immediately

    
    return 0;
}
