#include <iostream>
#include<stack>
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>m;
        vector<int>ans(nums1.size());

        for(int i=nums2.size()-1;i>=0;i--){

            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                m[nums2[i]]=-1;
            }
            else{
                m[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1[i];i++){
            ans.push_back(m[nums1[i]]);
        }

        return ans;

    }
};

// 503. Next Greater Element II
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans (n,-1);
        stack<int>st;

        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                }
                else{
                    ans[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};
