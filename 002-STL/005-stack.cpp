#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1); //push element into the stack
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();  //pop out the top element

    st.top();  //refers to the element at the top

    cout<<st.empty()<<endl; //check whether the stack is empty or not

    cout<<st.size() <<endl;//returns the length of the stack
    return 0;
}