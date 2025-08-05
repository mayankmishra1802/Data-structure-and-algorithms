#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>m;
    m.insert(1); //insert all the values in the multiset(duplicate also)
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(2);
    m.insert(2);
    m.insert(2);
    m.insert(2);

    m.erase(1); //delete all the values of 1

    int c=m.count(1); //return total occurences of 1

    m.erase(m.find(2)); //delete only single element
    return 0;
}