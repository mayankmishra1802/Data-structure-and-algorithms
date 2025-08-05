#include<iostream>
using namespace std;
void print_array(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    print_array(n,arr);
}