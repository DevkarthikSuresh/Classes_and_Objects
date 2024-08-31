//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Classes and Objects to define method inside class

#include<iostream>
using namespace std;

class Student               
{
    public:
    void myMethod()
    {
        cout<<"I am studying in 2nd year";
    }
};

int main()
{
    Student s1;
    s1.myMethod();
}


/*Output:
I am studying in 2nd year*/
