//69. Sqrt(x)
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int binarysearch(vector<int>& arr,int s,int e,int key){
    int start=s;
    int end=e;
    

    int mid = start + (end - start) / 2;
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
        mid = start + (end - start) / 2;
    }
    return -1;
}

class Solution {
public:
    int mySqrt(int x) {
    long long start=0;
    long long end=x;
    
    long long mid = start + (end - start) / 2;
    long long ans=-1;
    
    
    while(start<=end){
        int square=mid*mid;
        
        
        if(square==x){
            return mid;
        }
         if(x<square){

            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
    }
};