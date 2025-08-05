#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1); //push element at the end 
    dq.emplace_back(2); //push elemnt at the end
    dq.push_front(3);  //push element at the front
    dq.emplace_front(4); //push element at the front
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_back(); //pop from the end
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_front(); //pop from the front
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.back();//refer to last lement 
    dq.front(); //refer to first element
    return 0;
}