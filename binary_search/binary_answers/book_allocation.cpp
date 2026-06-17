#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

bool ispossible(vector<int>arr,int m , int n , int mid){
    int student_count=1;
    int page_sum=0;

    for(int i=0;i<n;i++){
        if(page_sum+arr[i]<=mid){
            page_sum+=arr[i];
        }
        else{
            student_count++;
            if(student_count>m||arr[i]>mid){
                return false;
            }
            page_sum=arr[i];
        }
    }return true;
}

int allocate(vector<int>arr,int m , int n )
{
    if(m > n) return -1;
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){

        sum+=arr[i];
        
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(ispossible(arr,m,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}