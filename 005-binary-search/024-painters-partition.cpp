#include<bits/stdc++.h>
using namespace std;
const int M=10000003;
bool isPossible(int p, vector<int>&boards,int n,int mid){
    int no_of_painters=1;
    int length_board_painted=0;
    for(int i=0;i<n;i++){
        if(length_board_painted+boards[i]>mid){
            no_of_painters++;
            length_board_painted=boards[i];
        }
        else{
            length_board_painted+=boards[i];
        }
    }
    if(no_of_painters<=p){
        return true;
    }
    return false;
}
int paint(int p,vector<int>&boards,int n){
    int s=*max_element(boards.begin(),boards.end());
    int e=accumulate(boards.begin(),boards.end(),0);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(p,boards,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans%M;
}
int main()
{
    int p=2; //no of painters
    vector<int>boards={40,30,10,20};  //length of boards
    int n=boards.size();
    cout<<paint(p,boards,n);
    return 0;
}