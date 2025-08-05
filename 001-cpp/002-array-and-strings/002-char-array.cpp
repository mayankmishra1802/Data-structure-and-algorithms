#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[]="hello";
    //length of char aaray
    int n=strlen(str);
    cout<<n<<endl;

    //reverse char array
    strrev(str);
    cout<<str<<endl;

    char str1[]="coding ";
    char str2[]="blocks";

    //compare char arrays
    int out=strcmp(str1,str2);
    cout<<out<<endl;

    //copying strings
    strcpy(str,str1);  //copying str1 to str
    cout<<str<<endl;

    //concatenating two strings
    strcat(str1,str2);  //str1=str1+str2
    cout<<str1<<endl;

    //tokenization of string
    char s[] = "a**bc.de$$.f.gh*$.i";
	char dlim[] = ".$*";

	char* token = (char*)strtok(s, dlim); //strtok function returns a pointer to the next token

	while(token != NULL) {
		cout << token << endl;
		token = strtok(NULL, dlim);
	}

    return 0;
}