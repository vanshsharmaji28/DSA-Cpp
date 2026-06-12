//34. Find First and Last Position of Element in Sorted Array

#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>& nums,int key,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
        while(start<=end){
        if(nums[mid]==key){

            ans=mid;
            end=mid-1;
            
        }
         else if(key<nums[mid]){

            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int lastocc(vector<int>& nums,int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
        while(start<=end){
        if(nums[mid]==key){
            ans=mid;
            start=mid+1;
        }
         else if(key<nums[mid]){

            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstocc(nums,target,nums.size()),
        lastocc(nums,target,nums.size())};
    }
};
