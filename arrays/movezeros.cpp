//leetcode 283

#include <iostream>
using namespace std;

//brute force

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
              
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i--;
               n--;
                

            }
        }
    }
};

//optimal solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};