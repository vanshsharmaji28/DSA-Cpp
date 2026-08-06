//leetcode 26.



#include <iostream>
using namespace std;


//approach 1 brute force
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> arr;

        for(int i=0;i<nums.size();i++){
            bool duplicate =false;
            for(int j=i+1 ;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    duplicate =true;
                    break;
                }
                
            }
            if(!duplicate){
                    arr.push_back(nums[i]);
                }
            
        }
        for (int i = 0; i < arr.size(); i++) {
                nums[i] = arr[i];

        }
        return arr .size();
    }
};


//optimal solution

class Solution {
public:
    int removeDuplicate(vector<int>& nums) {
        vector<int> arr;
        if(nums.empty()){
            return 0;
        }
        arr.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
            }
        }

        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
        return arr.size();
    }
};

int main() {
     
    return 0;
}