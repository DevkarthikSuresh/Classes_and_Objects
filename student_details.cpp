//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Classes and Objects to print the student details

#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
   
};

int main(){
    Student s1;
    s1.name="Siddhnat";
    s1.branch="E&TC";
    s1.year="Second";
    s1.result=8.00;
    
    Student s2;
    s2.name="Devkarthik";
    s2.branch="E&TC";
    s2.year="Second";
    s2.result=9.00;
    
    Student s3;
    s3.name="Om";
    s3.branch="E&TC";
    s3.year="Second";
    s3.result=8.00;
    
    cout<<"Student 1 details: "<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Year: "<<s1.year<<endl;
    cout<<"Result: "<<s1.result<<endl<<endl;
    
    cout<<"Student 2 details: "<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    cout<<"Year: "<<s2.year<<endl;
    cout<<"Result: "<<s2.result<<endl<<endl;
    
    cout<<"Student 3 details: "<<endl;
    cout<<"Name: "<<s3.name<<endl;
    cout<<"Branch: "<<s3.branch<<endl;
    cout<<"Year: "<<s3.year<<endl;
    cout<<"Result: "<<s3.result<<endl<<endl;
    
    return 0;
}


/*Output:
Student 1 details: 
Name: Siddhnat
Branch: E&TC
Year: Second
Result: 8

Student 2 details: 
Name: Devkarthik
Branch: E&TC
Year: Second
Result: 9

Student 3 details: 
Name: Om
Branch: E&TC
Year: Second
Result: 8*/
