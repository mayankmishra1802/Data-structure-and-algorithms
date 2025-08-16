#include<iostream>
using namespace std;
void read(int**ptr,int m,int n){
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>ptr[i][j];
		}
	}
}
void print(int**ptr,int m,int n){
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		    cout<<ptr[i][j]<<" "; 
		}
		cout<<endl;
	}
}
int main(){
    int m=3,n=4;
    int**ptr=new int*[m];
    for(int i=0;i<m;i++){
        ptr[i]=new int[n];
    }

    cout<<"enter the array:"<<endl;
    read(ptr,m,n);
    print(ptr,m,n);

    for(int i=0;i<m;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
    return 0;
}