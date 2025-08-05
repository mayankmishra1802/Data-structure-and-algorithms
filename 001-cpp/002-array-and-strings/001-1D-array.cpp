#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];//declaration of array

    int brr[]={1,2,3,4,5};//initialisation of array

    int crr[10]={1,2,3,4,5};//rest elements will be zero by default
    
    for(int i=0;i<10;i++){ //input 
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){ //output
        cout<<arr[i];
    }

    cout<<sizeof(int)<<endl;//size of integer
    cout<<endl;

    int n=sizeof(brr)/sizeof(int); //size of array
    cout<<n<<endl;

    cout<<max(brr[0],brr[2])<<endl; //maximum value
    cout<<min(brr[0],brr[2])<<endl; //minimum value
    
    swap(brr[0],brr[3]); //swaps the elements

    return 0;
}