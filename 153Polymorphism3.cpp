#include <iostream>
using namespace std;


//Virtual Function
//	virtual void speak();
//	Ensures the child class version is called at runtime.
//Base Class Pointer
//	Human* h;
//	Points to different child objects dynamically.

class Human
{
public:
    virtual void speak()   // virtual function
    {
        cout << "Human speaking" << endl;
    }
};

class Male : public Human
{
public:
    void speak()   // overridden function
    {
        cout << "Male speaking" << endl;
    }
};

class Female : public Human
{
public:
    void speak()
    {
        cout << "Female speaking" << endl;
    }
};

int main()
{
    Human* h;

    Male m;
    Female f;

    h = &m;
    h->speak();   // Male speaking

    h = &f;
    h->speak();   // Female speaking

}

