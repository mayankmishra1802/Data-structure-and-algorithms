//In C++, we can think of name of an array as a pointer to the element at the 0th index. 
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" "<<(arr+i)<<endl; //pointer arithmetic 
    }
    cout<<endl;
    
    int*ptr=arr;//ptr will contain address of element at 0th index in the array
    //int*ptr=&arr[0] 
    
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" "<<ptr+i<<endl;
    }
    return 0;
}