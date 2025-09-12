#include <bits/stdc++.h>
using namespace std;
vector<string> res;
void com(string &num, int target, string s, long sum, long prev, int i) {
    if (i >= num.size()) {
        if (target == sum) {
            res.push_back(s);
        }
        return;
    }
    for (int j = i; j < num.size(); j++) {
        if (j > i && num[i] == '0') break; 
        string part = num.substr(i, j - i + 1);
        long number = stol(part);
        if (i == 0) {
            com(num,target,part,number,number,j + 1);
        } else {
            com(num, target, s + "+" + part, sum + number, number, j + 1);
            com(num, target, s + "-" + part, sum - number, -number, j + 1);
            com(num, target, s + "*" + part, sum - prev + (prev * number), prev * number, j + 1);
        }
    }
}
int main() {
    string num = "123";
    int target = 6;
    com(num, target,"", 0, 0, 0);
    for (int i=0;i<res.size();i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}
