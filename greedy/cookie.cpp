#include <iostream>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();

        int l=0,r=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

    while(r<m && l<n){

        if(s[r]>=g[l]){
            l=l+1;
        }
        r=r+1;
    }
    return l;
    }
};

int main() {
     
    return 0;
}