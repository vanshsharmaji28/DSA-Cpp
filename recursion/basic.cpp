#include <iostream>
using namespace std;


void reachhome(int src, int dest){
    cout<< "src == "<<src <<" dest === "<<dest <<endl;
    //baase case 
    if(src==dest){
        cout<<"reached"<<endl;
        return;

    }

    src++;
    reachhome(src,dest);

}

int main() {

    int dest=10;
    int src=0;

    

    reachhome(src,dest);
     
    return 0;
}