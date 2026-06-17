#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

bool ispossible(vector<int>arr,int m , int n , int mid){
    int cows=1;
    int lastposi=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-lastposi>=mid){
            cows++;
            if(cows==m){
                return true;
            }
            lastposi=arr[i];
        }
        
    }return false;
}

int aggressive_cows(vector<int>arr,int m , int n )
{
    sort(arr.begin(),arr.end());
    if(m > n) return -1;
    int s=0;
    int maxi=*max_element(arr.begin(),arr.end());
    int mini=*min_element(arr.begin(),arr.end());
    int e=maxi-mini;

    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(ispossible(arr,m,n,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}