#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]; //declaration
    int brr[2][2]={{1,2},{3,4}}; //initialisation
    int crr[][2]={{1,2},{3,4}}; //initialisation 
    
    //input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}