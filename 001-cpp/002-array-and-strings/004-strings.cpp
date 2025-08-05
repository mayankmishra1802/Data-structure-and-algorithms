#include<bits/stdc++.h>
using namespace std;
int main() {
	//string declaration and intialisation
	string s;
	string s1="mayank";

	//string input and output
	cout<<"enter the string:";cin>>s;
	for(int i=0;i<s.length();i++){
		cout<<s[i];
	}
	cout<<endl;

	// computing the size or length of a string
    string str = "coding blocks";
    cout << str.length() << endl;
	cout << str.size() << endl;

	// appending //concatenating str2 to str1
	string str1 = "new";
	string str2 = "delhi";
	// 1. using append()
	str1.append(str2);
	cout << str1 << endl;
	// 2. using '+' operator
	str1 = str1 + str2;
	cout << str1 << endl;

	// comparing two strings
	string str3 = "az";
	string str4 = "zzz";
	// 1. using compare
	cout << str3.compare(str4) << endl;
	// 2. using relational operators
	if(str3 > str4) {
		cout << str3 << " is greater" << endl;
	} else {
		cout << str4 << " is greater" << endl;
	}

	// searching for a substring in a string using find()
	string str5 = "mississippi";
	cout << str5.find("si") << endl;
	cout << str5.rfind("si") << endl;
	cout << str5.find("hello") << endl;
	cout << string::npos << endl;
	string key = "hello";
	if(str5.find(key) != string::npos) {
		cout << key << " is present" << endl;
	} else {
		cout << key << " is not present" << endl;
	}

	// extracting a substring from a string
	string str6 = "helloworld";
	string subString = str6.substr(4);
	cout << subString << endl;
	subString = str6.substr(4, 2);
	cout << subString << endl;

	// converting a string into char array
	string str7 = "new delhi";
	char* arr = (char*)str7.c_str();
	cout << arr << endl;

	// converting a char array into a string
	char a[] = "hello world";
	string str8(a);
	cout << str8 << endl;
	string st(10, 'a');
	cout << st << endl;
	char ch = 'x';
	string str10(1, ch);
	cout << str10 << endl;
	
	// reversing a string using reverse()
	string str9 = "coding blocks";
	// .end() returns iterator/pointer to the char after the last char.
	// .begin() returns iterator/pointer to the char at the 0th index
	reverse(str9.begin(), str9.end()); // [start, end)
	cout << str9 << endl;
	return 0;
}