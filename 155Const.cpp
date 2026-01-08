#include <iostream>
using namespace std;

class abc
{
private:
    int x;      // normal integer variable
    int *y;     // pointer variable (dynamic memory)
    int z;      // normal integer

public:
    // Constructor
//    abc(int _x, int _y, int _z=0)
//    {
//        x = _x;          // x ko value assign ki
//        y = new int(_y); // heap memory me int allocate ki
//        z = _z;          // z ko value assign ki
//    }
    
    
    // ? Constructor using INITIALIZATION LIST
    abc(int _x, int _y, int _z=0)
        : x(_x),          // x ko directly initialize kiya
          y(new int(_y)), // heap memory directly allocate + initialize
          z(_z)           // z ko initialize kiya
    {
        // Constructor body empty bhi ho sakta hai
        // Initialization list preferred hoti hai
    }
    
    
    

    // Getter for x (const function)
    int getX() const
    {
        return x;   // sirf value return karega, modify nahi
    }

    // Setter for x
    void setX(int _val)
    {
        x = _val;
    }

    // Getter for y (const function)
    int getY() const
    {
        return *y;   // pointer ke andar ki value return
    }

    // Setter for y
    void setY(int _val)
    {
        *y = _val;
    }

    // Getter for z (const function)
    int getZ() const
    {
        return z;
    }

    // Destructor (memory free karne ke liye)
    ~abc()
    {
        delete y;   // heap memory free
    }
};

// Friend-like normal function (read-only access)
void printABC(const abc &a)
{
    // const reference ? object modify nahi hoga
    cout << "X = " << a.getX() << endl;
    cout << "Y = " << a.getY() << endl;
    cout << "Z = " << a.getZ() << endl;
}

int main()
{
    abc a(1, 2);   // object create kiya
    abc b(1, 2,3);
    printABC(a);     // function call
    printABC(b);

    return 0;
}

