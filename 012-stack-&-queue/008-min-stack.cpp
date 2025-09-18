#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<int>s;
    stack<int>ms;
    public:
    void push(int val) {
        s.push(val);
        if(ms.empty()){
            ms.push(val);
        }
        else if(val<=ms.top()){
            ms.push(val);
        }
    }
    void pop(){
        if(ms.top()==s.top()){
            s.pop();
            ms.pop();
        }
        else{
            s.pop();
        }
    }
    int top(){
        return s.top();
    } 
    int getMin() {
        return ms.top();
    }
};
int main()
{
    MinStack obj;
    obj.push(10);
    obj.push(-5);
    obj.push(15);
    obj.push(-10);
    cout<<obj.getMin()<<endl;;
    obj.pop();
    cout<<obj.top()<<endl;
    cout<<obj.getMin()<<endl;
    return 0;
}