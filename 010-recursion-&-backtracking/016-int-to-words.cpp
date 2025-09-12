#include<bits/stdc++.h>
using namespace std;
vector<string>words={"zero","one","two","three","four","five","six","seven","eight","nine"};
void int_to_words(int x){
    if(x==0){
        return;
    }
    int t=x%10;
    int_to_words(x/10);
    cout<<words[t]<<" ";
}
int main()
{
    int_to_words(2048);
    return 0;
}