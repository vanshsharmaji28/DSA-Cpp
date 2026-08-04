#include <iostream>
#include<string>
using namespace std;

class student
{
private:
    string name;
    int age;
public:
    float cgpa;
    int bodycount;
     
    void getpercentage(){
        cout<< (cgpa*10)<<"%"<<endl;
    }
 
 
    //setter
 void setName(string nameVal){
    name=nameVal;
 }   
 void setAge(int ageVal){
    age=ageVal;
 }

 //getter


 string getName( ){
    return name;
 }   
 
 
 int  getAge(){
    return age;
 }
};



int main() {
     student s1;
     s1.cgpa=6.29;
     s1.setAge(23);
     s1.setName("pintu");
     s1.getpercentage();
     cout<<"age == "<<s1.getAge()<<endl<<" name == "<<s1.getName()<<endl;
     cout<<"cgpa dekh bhai ki "<<s1.cgpa<<endl;
    return 0;
}