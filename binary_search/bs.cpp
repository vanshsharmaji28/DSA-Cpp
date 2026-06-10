#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
         if(key<arr[mid]){

            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int even[8]={2,3,4,5,6,7,9,19};
    int odd[7]={2,3,4,5,6,7,9};

    printarr(even,8);
    printarr(odd,7);
     
    int index= binarysearch(even,8,9);
    int index1= binarysearch(odd,7,7);

     cout<<"element found in even array at index===> "<<index<<endl;
     cout<<"element found in odd array at index===> "<<index1<<endl;


   

    printarr(even,8);
    printarr(odd,7);
    

    return 0;
}