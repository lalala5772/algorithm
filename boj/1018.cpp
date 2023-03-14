#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string A="WBWBWBWB", B="BWBWBWBW" , s[51];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, cnt1=0, cnt2=0, x, y, tmp, mn=32;
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> s[i];

    for(int i=0;i<n-7;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            for(int b=0;b<8;b++)
            {
                for(int a=0;a<8;a++)
                {
                    y = i+b;
                    x = j+a;
                    if(y%2)
                    {
                        if(s[y][x]!=A[a]) cnt1++;
                        else if(s[y][x]!=B[a]) cnt2++;
                    }
                    else {
                        if(s[y][x]!=A[a]) cnt2++;
                        else if(s[y][x]!=B[a]) cnt1++;
                    }

                }
            }
            tmp = min(cnt1, cnt2);
            if(tmp<mn) mn = tmp;
            cnt1 = 0;
            cnt2 = 0;
        }
    }
    cout << mn << endl;
    return 0;
}
