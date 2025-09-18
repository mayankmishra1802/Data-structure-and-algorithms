#include<bits/stdc++.h>
using namespace std;
class MyStack {
    queue<int>q1;
    queue<int>q2;
    
    public:
    void push(int x) {
        if (!q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        int x;
        if(!q1.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            x = q1.front();
            q1.pop();
        } 
        else {
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            x=q2.front();
            q2.pop();
        }
        return x;
    }
    
    int top() {
        if(!q1.empty()){
            return q1.back();
        }
        else{
            return q2.back();
        }
    }
    
    bool empty() {
        if(q1.empty() && q2.empty()){
            return true;
        }
        return false;
    }
};
int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}