//leetcode 153

#include <iostream>
using namespace std;


class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        
        
        while(s<e){
            if(nums[s]<nums[e]){
                return nums[s];
            }
            int mid= s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else
                e=mid;
        }

        return nums[s];

    }
};

int main() {
     
    return 0;
}