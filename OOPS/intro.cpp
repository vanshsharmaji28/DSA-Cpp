#include <iostream>

using namespace std;

class hero
{
    int health;
    int level;
    char name[100];
 public:
   int getHealth(){
    return health;
   }

   void setHealth(int h){
    health=h;
   }

    
    
};


int main() {
     hero h1;
     cout<<h1.getHealth()<<endl;

     
    return 0;
}