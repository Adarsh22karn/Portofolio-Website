#include <iostream>
using namespace std;


//Compile Time Polymorphism 
//Operator Overloding


class B {
public:
    int a;
    int b;
    
    // Function to add a and b
    int add() {
        return a + b;
    }
    
    // Overloaded + operator
    void operator+(B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << (value2 - value1) << endl;
    }
    
    // Overloaded () operator (functor)
    void operator()() {
        cout << "() operator called! Bracket operator executed." << endl;
    }
};

int main() {
    B obj1, obj2;
    
    // Setting values
    obj1.a = 4;
    obj1.b = 10;
    obj2.a = 7;
    obj2.b = 15;
    
    cout << "--- Testing add() function ---" << endl;
    cout << "obj1.a + obj1.b = " << obj1.add() << endl;
    cout << "obj2.a + obj2.b = " << obj2.add() << endl;
    
    cout << "\n--- Testing overloaded + operator ---" << endl;
    obj1 + obj2;  // Calls operator+
    
    cout << "\n--- Testing overloaded () operator ---" << endl;
    obj1();  // Calls operator()
    obj2();
    
}


























//class Complex {
//private:
//    int real, imag;
//public:
//    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
//
//    // Overloading the '+' operator
//    Complex operator + (Complex const &obj) {
//        Complex res;
//        res.real = real + obj.real;
//        res.imag = imag + obj.imag;
//        return res;
//    }
//
//    void print() { cout << real << " + i" << imag << endl; }
//};
//
//int main() {
//    Complex c1(10, 5), c2(2, 4);
//    
//    // This calls the overloaded '+' function
//    Complex c3 = c1 + c2; 
//    
//    c3.print(); // Output: 12 + i9
//    return 0;
//} 
