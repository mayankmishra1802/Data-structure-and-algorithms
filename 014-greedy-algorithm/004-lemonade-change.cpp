#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>bills={5,5,10,10,20};
    int n=bills.size();
    bool flag=true;
    int five=0,ten=0;
    int i=0;
    while(i<n){
        if(bills[i]==5){
            five++;
        }
        else if(bills[i]==10 && five>0){
            ten++;
            five--;
        }
        else if(bills[i]==20 && five!=0 ){
            if(five>0 && ten>0){
                ten--;
                five--;
            }
            else if(five>2){
                five=five-3;
            }
            else{
                flag=false;
                break;
            }
        }
        else{
            flag=false;
            break;
        }
        i++;
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false"; 
    }
    return 0;
}