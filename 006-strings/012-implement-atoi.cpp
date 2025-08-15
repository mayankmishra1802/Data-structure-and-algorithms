#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
    int i = 0, n = s.size();
    while (i < n && s[i] == ' '){
        i++;
    }
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        i++;
    }
    long num = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        num = num * 10 + digit;
        i++;
    }
    num *= sign;
    if (num > INT_MAX) return INT_MAX;
    if (num < INT_MIN) return INT_MIN;

    return (int)num;
}
int main()
{
    string s=" -042";
    cout<<myAtoi(s);
    return 0;
}