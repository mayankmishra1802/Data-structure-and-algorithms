#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;  //Max heap //gives priority to maximum value
    pq.push(2); //push the element into the queue
    pq.push(5);
    pq.emplace(3); //push the element into the queue
    pq.emplace(1);
    cout<<pq.top()<<endl; //refer to the top element(Max element)
    pq.pop(); //pop outs the element at the Max value of the queue
    cout<<pq.top()<<endl;

    //Minimum heap //gives priority ot minimum value
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(5);
    p.push(1);
    p.emplace(3);
    cout<<p.top();//refer to the minmimum value 
    p.pop();
    return 0;
}