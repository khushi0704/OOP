#include <iostream>
using namespace std;
// constrcutor - destructor
class Car{
    // properties
 
    int speed;
    // constructor 
    public:
    Car(){
        // same as default constructor
        // We use constructors to initialize the object with the default or initial state. 
        cout<<"constructor called"<<endl;
    }
    Car(int speed){
        this->speed=speed;
    }
    void print(){
        cout<<speed;
    }
};
int main(){
    // parameterised constrcutor
    Car c1(100); // normal constructor called here
    c1.print();
    // copy constructor
    /*
    A copy constructor is a member function that 
    initializes an object using another object of the same class.
    */
   Car c2=c1; // copy constructor called here or obj2(obj1)
   c2.print();

   // resource https://www.geeksforgeeks.org/copy-constructor-in-cpp/
    return 0;
}