#include<iostream>
using namespace std;
int main(){
    char ch;
    int l=0,u=0,w=0,d=0,s=0; //lowercase,uppeercase,whitespaces,digits,special symbols
    cout<<"enter the characters:"<<endl;
    while(true){
        ch=cin.get();
        if(ch=='$'){
            break;
        }
        else if(ch>=65 && ch<=90){
            u++;
        }
        else if(ch>=97 &&ch<=122){
            l++;
        }
        else if(ch>=48 && ch<=57){
            d++;
        }
        else if(ch==' '||ch=='\n'||ch=='\t'){
            w++;
        }
        else{
            s++;
        }

    }
    cout<<"lowercase:"<<l<<endl;
    cout<<"uppercase:"<<u<<endl;
    cout<<"whitespaces:"<<w<<endl;
    cout<<"digits:"<<d<<endl;
    cout<<"special symbols:"<<s<<endl;

    return 0;
}