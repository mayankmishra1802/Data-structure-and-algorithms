#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no of rows:";
    cin>>m;
    cout<<"enter the no of columns:";
    cin>>n;
    //creating a 2d array
    int **arr=new int*[m]; //*arr pointing to array of 'm' pointers
    for(int i=0;i<m;i++){
        arr[i]=new int[n]; //arr[0] to arr[i] are pointers pointing to 'm' arrays of size'n'
    }

    //reading input in 2d array
    cout<<"enter the array:"<<endl;
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	// printing the 2D array
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		    cout<<arr[i][j]<<" "; //*(*(arr+i)+j)
		}
		cout<<endl;
	}
    //deallocation of memory of 'm' arrays of size 'n'
    for(int i=0;i<m;i++){
        delete[] arr[i];
    }
    delete[] arr; //deallocation of memory of array of 'm' pointers
    return 0;
}