#include <iostream>
using namespace std;
// access modifiers 
class Jaypee{
    // by default everything is private & is not accessible 
    // outside the class
    int pincode;
    public :
    string city;
    void setPin(int pincode){
        this->pincode = pincode;
    }
    int getPin() const{
        return pincode;
    };
};
int main(){
    Jaypee Guna;
   // error since its a private  Guna.pincode = 473226; 
    Jaypee Noida;
    Jaypee Solan;
    Guna.setPin(473226);
    cout<<Guna.getPin();

    /* protected 
    private - members cannot be accessed (or viewed) from outside the class. 
    protected - members cannot be accessed from outside the class, 
    however, they can be accessed in inherited classes.
    */
    return 0;
}