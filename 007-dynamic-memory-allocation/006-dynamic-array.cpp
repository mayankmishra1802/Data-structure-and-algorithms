#include<iostream>
using namespace std;
int*resize(int c,int*arr ){  //function to increase the capcity of the array
    int*brr=new int[2*c];  //memory allocation of 1d array of size '2*c '

    for(int i=0;i<c;i++){  //copying elements of arr into brr 
        brr[i]=arr[i];
    }

    delete[] arr;  //memory deallocation of arr
    return brr;    //returning  brr 
}
int main(){
    int*arr=new int[1];  //memory allocation of 1d array of size '1' on heap
    int c=1;  //maximum capacity of the array
    int i=0;  //to store the size of the array
    int x; //to store value in 1d array

    while(true){
        cout<<"enter the value:";
        cin>>x;
        if(x<0){  //to stop while loop
            break;
        }
        if(i==c){  //maximum capcity is occupied
            arr=resize(c,arr); //array of double capacity
            c=2*c;
        }
        arr[i]=x;
        i++;
    }
    //printing the dynamic array 
    for(int j=0;j<i;j++){ 
        cout<<arr[j]<<" ";
    }
    return 0;
}