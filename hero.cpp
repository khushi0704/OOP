#include <iostream>
using namespace std;
class Hero{
    // properties
    public:
    int health;
    char level; 
    // constructor 
    Hero(){
        cout<<"constructor called"<<endl;
    }
    Hero(int health){
        this->health=health;
        this->level='\0'; // null character 
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    // getter and setters
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setheath(int h,char pwd){
        // protected 
        if(pwd =='K'){
            health=h;
        }
        
    }
    void setlevel(char ch){
        level=ch;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};
int main(){
    // constructor 
    // default constructor
    Hero h;
    Hero h2(100);
    Hero h3(200,'K');
    h.print();
    h2.print();
    h3.print();
    return 0;
}