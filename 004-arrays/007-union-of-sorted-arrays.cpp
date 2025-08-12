#include<bits/stdc++.h>
using namespace std;
vector<int>c;
void findUnion(vector<int> &a, vector<int> &b) {
    int n=a.size();
    int m=b.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i-1]) {
            i++;  
        } 
        else if (j > 0 && b[j] == b[j-1]) {
            j++;  
        } 
        else if (a[i] == b[j]) {
            c.push_back(a[i]);
            i++; j++;  
        } 
        else if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;  
        } 
        else {
            c.push_back(b[j]);
            j++;  
        }
    }
    while (i < n) {
        if (i == 0 || a[i] != a[i-1]) {  
            c.push_back(a[i]);
        }
        i++;
    }
    while (j < m) {
        if (j == 0 || b[j] != b[j-1]) { 
            c.push_back(b[j]);
        }
        j++;
    }
}   
int main(){
    vector<int>a={1, 2, 3, 4, 5};
    vector<int>b={1, 2, 3, 6, 7};
    findUnion(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 0;
}