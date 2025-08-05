#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1); //push element at the end
    q.push(2); 
    q.emplace(5); //push element at the ends
    cout<<q.back()<<endl; //refer to the last element
    cout<<q.front()<<endl; //refer to the first element
    q.pop(); //pop the first element
    return 0;
}