#include <iostream>
using namespace std;

//compile Time Polymorphism 
//Function Overloding


class Calculator {
public:
    // Function 1: Adds two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function 2: Adds two doubles (Overloaded)
    double add(double a, double b) {
        return a + b;
    }

    // Function 3: Adds three integers (Overloaded)
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    
    // The compiler knows to call Function 1
    cout << calc.add(10, 20) << endl;       
    
    // The compiler knows to call Function 2
    cout << calc.add(5.5, 2.3) << endl;     
    
    // The compiler knows to call Function 3
    cout << calc.add(1, 2, 3) << endl;      
    
}








//Function OvelLoading with different types Of Arguments
//
//void print(int i) {
//    cout << "Printing int: " << i << endl;
//}
//
//void print(double f) {
//    cout << "Printing float: " << f << endl;
//}
//
//void print(string c) {
//    cout << "Printing string: " << c << endl;
//}
//
//int main() {
//    print(10);        // Calls print(int)
//    print(3.14);      // Calls print(double)
//    print("Hello");   // Calls print(string)
//    return 0;
//}










//function overloading and default argument

// Function with multiple default arguments
//int add(int x, int y, int z = 0, int w = 0) {
//    return (x + y + z + w);
//}
//
//int main() {
//    // Call with 2 arguments (z and w use defaults: 0)
//    cout << add(10, 20) << endl;
//    
//    // Call with 3 arguments (w uses default: 0)
//    cout << add(10, 20, 30) << endl;
//    
//    // Call with 4 arguments (all explicitly provided)
//    cout << add(10, 20, 30, 40) << endl;
//    
//    return 0;
//}

