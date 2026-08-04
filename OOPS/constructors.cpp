#include <iostream>
using namespace std;

class car{
    string name;
    string model;
    string color;

public:
   car(string nameVal,string modelVal,string colorVal){

     cout<<"constrctor is called and created ...."<<endl;
     name=nameVal;
     color=colorVal;
     model=modelVal;
   }

   string getName(){
    return name;
   }
};



int main() {
     car c1("alto","k10","red");
     cout<<"car name == "<<c1.getName()<<endl;
    return 0;
}