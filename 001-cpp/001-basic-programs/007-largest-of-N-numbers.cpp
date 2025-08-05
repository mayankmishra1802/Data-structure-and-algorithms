#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers of values:";
    cin>>n;
    int l=INT_MIN;
    int v;
    for(int i=1;i<=n;i++){
        cout<<"enter a value:";
        cin>>v;
        if(v>l){
            l=v;
        }
    }
    cout<<"The largest value is:"<<l;
    return 0;
}