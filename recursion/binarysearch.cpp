#include <iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e, int key ){
    if(s>e){
        return false;
    }
    int mid= s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarysearch(arr, mid+1,e,key);

    }
    if(arr[mid]>key){
       return  binarysearch(arr, s, mid-1, key);
    }

}

int main() {
     
    return 0;
}