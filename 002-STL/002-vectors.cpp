#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v; //empty vector
    v.push_back(1); 
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    vector<pair<int,int>> vec; //vector of pair
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>v1(5,100); //{100,100,100,100,100} //vector of size 5 with each value as 100
    vector<int>v2(5); //{garbage value,gv,gv,gv,gv} //vector of size 5 with random garbage value
    vector<int>v3(v1); //copy of vector v1

    cout<<v[0]<<endl; 
    cout<<v.back()<<endl; //prints the last element of the vector

    //using iterators
    vector<int>::iterator it=v.begin();//will point to the address of the first element
    cout<<*(it)<<endl;//will print the first value
    it++;
    cout<<*(it)<<endl; //will print the second value

    vector<int>::iterator it1=v.end();//will point to the address right after the last element
    it1--; //will point to the address of the last element
    cout<<*(it1)<<endl; //will print the last value

    //printing the vector using iterator
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    //using auto keyword
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    //using for each loop
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    // deletion of element
    v.erase(v.begin()+1); //will delete the value at the 1st index
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+4); //will delete the value at 2nd index till 4th index(not 4th index)
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //insertion of values
    //v={1,3,6};
    v.insert(v.begin(),300); //will insert 300 at the begining of the vector
    v.insert(v.begin()+1,2,100);//will insert two 100 from 1st index
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //copy of a vector
    vector<int>c(2,50);//{50,50}
    v.insert(v.begin(),c.begin(),c.end());//will copy the 'c' vector to the 'v' vector at the starting
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl; //returns the length of the vector

    v.pop_back();//pop out the last element of the vector
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //swapping of vectors
    vector<int>v4(2,80);
    v.swap(v4);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear(); //erases all the element
    cout<<v.empty();//check whether the vector is empty or not
    return 0;
}