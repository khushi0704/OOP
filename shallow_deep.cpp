#include <iostream>
#include <cstring>
using namespace std;
// constrcutor - destructor
class Car{
    // properties
    // constructor 
    
    public:
    int speed;
    char level;
    char *name;
     Car(){
        name = new char[100];
     }
    // parameterised
    Car(int speed){
        this->speed=speed;
    }
    void set(int speed,char level){
        this->speed=speed;
        this->level=level;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->speed<<endl;
        cout<<this->level<<endl;
    }
};
int main(){
    Car c1;
    c1.set(1000,'K');
    char name[8]="Maruti";
    c1.setName(name);
    Car c2(c1);
    c1.speed=2000;
   //  c1.name[0]='K'; shallow copy
    c1.print(); 
    c2.print();
 return 0;
}