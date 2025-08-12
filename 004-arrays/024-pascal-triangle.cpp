#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows){
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++){
        if (i == 0){
            ans.push_back({1});
        }
        else if (i == 1){
            ans.push_back({1, 1});
        }
        else{
            vector<int> x(i + 1, 0);
            x[0] = 1;
            x[i] = 1;
            for (int j = 1; j < x.size() - 1; j++)
            {
                x[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
            ans.push_back(x);
        }
    }
    return ans;
}
int main()
{
    int numRows=5;
    vector<vector<int>>v=generate(numRows);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}