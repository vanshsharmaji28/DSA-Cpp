#include <iostream>
using namespace std;

class car{
    string name;
    string model;
    string color;

public:
    
   car(string nameVal,string modelVal,string colorVal){

     cout<<"constrctor is called and created ...."<<endl;
     this->name=nameVal;
     this->color=colorVal;
    this-> model=modelVal;
   }

   string getName(){
    return name;
   }
};



int main() {
     car c1("alto","k10","red");

     car c2(c1);

    car *jeep =new car("bolero","mhawk","white");

     cout<<"car name == "<<c1.getName()<<endl;
    return 0;
}