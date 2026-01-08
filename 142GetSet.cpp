#include <bits/stdc++.h>
using namespace std;


//if in your class any data member is private and you want to access that data member 
//in main you can use Getter and setter

//Getter is for Fetch data or Reading Data
//Setter is for adding some condition 

class Hero {
    
    //properties
    private:
    int health;

    public:
    char level;
    
    
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    
};



int main() 
{
	Hero ramesh;				//creation of Object

	ramesh.setHealth(80);		//use Setter
	
//	ramesh. health = 70;
	ramesh. level = 'A';

	cout<<"health is: "<<ramesh.getHealth()<<endl;
	cout<<"Level is: "<<ramesh.level<<endl;

}
