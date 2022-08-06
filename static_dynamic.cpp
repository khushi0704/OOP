#include <iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"worked"<<endl;
    }
};
int main(){
    // static object
    A a;
    // dynamic allocation of object
    A *b = new A;
    a.print();
    (*b).print();
    b->print();
    return 0;
}