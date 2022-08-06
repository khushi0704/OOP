#include <iostream>
#include "explicit_declaration.cpp"
using namespace std;
/*It is a user-defined data type,
 which holds its own data members and member functions, 
 which can be accessed and used by creating an instance of that class
.A C++ class is like a blueprint for an object.
*/
//there are two ways of accessing a class  :
// 1) header 2) explicitely
class Banking{
    // empty class
    // size : 1 byte
};
class Employee{
    // size of object : sum of all the data members
};
int main(){
    Banking b1;
    Employee e1;
    Person p1;
    //we can access data members & functions of a class 
    // using the dot operator
    p1.print();
    // instance of a class 
    // a class is allocated memory only at object creation
    // an object is an entitiy used to represent a real object 
    // example person , place , 
    return 0;
}