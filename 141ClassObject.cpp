#include <bits/stdc++.h>
using namespace std;


//Creating class
class Student
{
	public:
	int id;
	int age;
	string name;
	int roll;
	
	void display()
	{
		cout<<"The Name is: "<<name<<" age is: "<<age<<" Roll no is: "<<roll<<endl;
	}
};

int main()
{
	Student s1;				//Creating Object
	
	s1.id=101;
	s1.age=22;
	s1.name="Adarsh";
	s1.roll=44;
	
	s1.display();
	
	
	cout<<"Size of: "<<sizeof(s1);
	//empty Class
	//if Student Class will be enpty then also size will be 1;
	
}
