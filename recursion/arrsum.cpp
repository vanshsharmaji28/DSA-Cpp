#include <iostream>
using namespace std;

int arraysum(int arr[],int size){

    
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int sum = arraysum(arr+1 , size-1) +  arr[0];
    return sum;

}

int main() {

    return 0;
}