#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int getpivot(vector<int>& nums,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(nums[mid]>=nums[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
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
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int pivot=getpivot(nums,nums.size());

        


       
            if(target >= nums[pivot] && target <= nums[e]){
                return binarysearch(nums,pivot,e,target);
             
            }
            else{
                return binarysearch(nums,s, pivot-1,target);
            }


        }
    }
;