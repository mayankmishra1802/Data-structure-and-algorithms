#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1); //insert an element in sorted order and only once
    s.emplace(3); //works same as insert
    s.insert(2);
    s.emplace(5);
    s.emplace(4);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*(it)<<" ";
    }

    auto i=s.find(3); //returns an iterator which points to the value
    s.erase(4); //delete the element from the set //can be use to delete multiple values using iterator
    int c=s.count(1); //returns 1 if present 

    auto i1=s.lower_bound(2);
    /*lower_bound returns an iterator pointing to the first element in the range [first,last)
    which has a value not less than ‘val’  and if the value is not present in the vector 
    then it returns the end iterator.*/
    auto i2=s.upper_bound(4);
    /*upper_bound returns an iterator pointing to the first element in the range [first,last)
    which has a value greater than ‘val’  and if the value is not present in the vector 
    then it returns the end iterator.*/
    return 0;
}