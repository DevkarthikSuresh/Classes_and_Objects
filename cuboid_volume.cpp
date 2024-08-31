//Name:Devkarthik Suresh
//PRN:23070123045
//Aim:Implemention of Classes and Objects to find the volume of given cuboid

#include<iostream>
using namespace std;

class Cubiod{
    public:
    int length , breadth , height , volume;
    void input()
    {
        cout << "Enter the length : ";
        cin >> length;
        cout << "Enter the breadth : ";
        cin >> breadth;
        cout << "Enter the height : ";
        cin >> height;
    } 
    void Volume()
    {
        volume = length * breadth * height ;
    }
      void Output()
    {
        cout << "The volume of the given Cubiod is : " << volume << endl;
    }
    };

       int main(){
        Cubiod v1;
        v1.input();
        v1.Volume();
        v1.Output();

    return 0;
}


/*Output:
Enter the length : 22
Enter the breadth : 22
Enter the height : 22
The volume of the given Cubiod is : 10648*/
