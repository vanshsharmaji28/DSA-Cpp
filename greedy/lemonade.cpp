#include <iostream>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int five=0,ten=0,twenty=0;

        for(int i=0; i<bills.size(); i++){
            
            if(bills[i]==5){
                five=five+1;
            }
            else if(bills[i]==10){
                if(five>=1){
                    five=five-1;
                    ten=ten+1;
                }
                else{
                    return false;
                }
            }
            else
            {
                if(five>=1 && ten>=1){
                    ten=ten-1;
                    twenty=twenty+1;
                    five=five-1;
                }
                else if(five>=3)
                    {
                        twenty =twenty +1;
                        five=five-3;
                    }
                    else{
                        return false;
                    }

                }
            


        }
        return true;
    }
};

int main() {
     
    return 0;
}