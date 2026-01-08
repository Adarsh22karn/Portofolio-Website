//#include <iostream>
//using namespace std;
//
//
////static Data Members
//class Student
//{
//public:
//    static int count;   // static data member
//
//    void display()
//    {
//        cout<<count<<endl ;       // har object par increment
//    }
//};
//
//// memory allocation
//int Student::count =4 ;
//
//int main()
//{
//    Student s1;
//    s1.display();
//    Student s2;
//    s2.display();
//    Student s3;
//    s3.display();
//
//    return 0;
//}









//Static Member Function 
#include <iostream>
using namespace std;

class Student
{
public:
    static int count;   // static data member

    Student()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

// memory allocation
int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    // calling static member function using class name
    Student::showCount();

    return 0;
}

