#include<iostream>
using namespace std;
int main(){
    int *ptr=new int[5]; //Memory allocation and declaration of 1d array
    
    //int*ptr=new int[5]{1,2,3,4,5}; //memory allocation and initialization of 1d array

    /*Assigning values in array
    *ptr = 1;      or     ptr[0]=1;
	*(ptr+1) = 2;  or    ptr[1]=2;
	*(ptr+2) = 3;  or    ptr[2]=3;
	*(ptr+3) = 4;  or    ptr[3]=4;
	*(ptr+4) = 5;  or    ptr[4]=5;
    */

    //input in 1d array 
    for(int i=0;i<5;i++){
        cin>>ptr[i];  //*(ptr+i)
    }

    for(int i=0;i<5;i++){   //printing the array
        cout<<ptr+i<<" "<<*(ptr+i)<<endl;  //address //value
    }
    for(int i=0;i<5;i++){  //printing the element in the array
        cout<<ptr[i]<<endl;   
    }

    //deallocation of memory of 1d array
    delete[] ptr;

    return 0;
}