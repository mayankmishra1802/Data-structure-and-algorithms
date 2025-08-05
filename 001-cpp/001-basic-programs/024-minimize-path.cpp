#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the path:"<<endl;
    int x=0,y=0;
    while(ch!='\n'){
        ch=cin.get();
        if(ch=='n'){
            y++;
        }
        else if(ch=='s'){
            y--;
        }
        else if(ch=='e'){
            x++;
        }
        else if(ch=='w'){
            x--;
        }
    }
    if(x>0 && y>0){
        for(int i=1;i<=x;i++){
            cout<<"e";
        }
        for(int i=1;i<=y;i++){
            cout<<"n";
        }
    }
    if(x>0 && y<0){
         for(int i=1;i<=x;i++){
            cout<<"e";
        }
        for(int i=1;i<=abs(y);i++){
            cout<<"s";
        }
    }
    if(x<0 && y>0){
        for(int i=1;i<=y;i++){
            cout<<"n";
        }
        for(int i=1;i<=abs(x);i++){
            cout<<"w";
        }
    }
    if(x<0 && y<0){
        for(int i=1;i<=abs(y);i++){
            cout<<"s";
        }
        for(int i=1;i<=abs(x);i++){
            cout<<"w";
        }
    }
    return 0;
}