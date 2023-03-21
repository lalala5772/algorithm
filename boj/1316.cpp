#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string s;
char wd[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
bool check[26], flag;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt=0, result;
    cin >> n;
    result = n;
    for(int i=0;i<n;i++) {
        cin >> s;
        for(int j=0;j<s.size();j++)
        {
            for(int k=0;k<26;k++)
            {
                if(s[j]==wd[k])
                {
                    if(!check[k]) check[k]=true;
                    else{
                        if(j>=1&&s[j]==s[j-1]) continue;
                        else flag = true;
                    }
                }
            }
        }
        if(flag) result--;
        flag = false;
        for(int j=0;j<26;j++) check[j] = false;
    }
    cout << result << endl;
    return 0;
}
