#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size, int key){
    if(size==0){
        return false;
    }
    if(size==1){
        return true;
    }
    else{
        bool rp=linearsearch(arr+1,size-1,key);
        return rp;
    }
}

int main() {
     
    return 0;
}