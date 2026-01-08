#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    int height;
    int weight;
    int age;

public:
    int getHeight() 		{ return height; }
    int getWeight() 		{ return weight; }
    int getAge()    		{ return age; }

    void setHeight(int h) 	{ height = h; }
    void setWeight(int w) 	{ weight = w; }
    void setAge(int a)    	{ age = a; }
};

class Male : public Human 
{
public:
    string color;

    void sleep()			{	cout << "Male Sleeping" << endl;	}
    void attack()			{	cout << "Male Attacking" << endl;	}
};

class Female : public Human
{
public:
    string voice;  

    void sing()				{	cout << "Female Singing" << endl;	}
};

int main()
{
    Male obj1;
    obj1.setAge(23);
    obj1.setHeight(175);
    obj1.setWeight(70);
    obj1.color = "Brown";

    cout << "Male Details:" << endl;
    cout << "Age: " << obj1.getAge() << endl;
    cout << "Height: " << obj1.getHeight() << endl;
    cout << "Weight: " << obj1.getWeight() << endl;
    cout << "Color: " << obj1.color << endl;

    obj1.sleep();
    obj1.attack();

    cout << endl;

    Female obj2;
    obj2.setAge(21);
    obj2.voice = "Soft";

    cout << "Female Age: " << obj2.getAge() << endl;
    cout << "Voice Type: " << obj2.voice << endl;
    obj2.sing();

    return 0;
}



//Inheritance Ambiguity
//Inheritance ambiguity occurs in multiple inheritance when a derived class 
//inherits from two classes that have a common base class. 
//The compiler becomes confused about which copy of the base class members to use.
//obj.B::show();
//obj.C::show();


