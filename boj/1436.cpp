#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt=1, num=0, tmp, result;
    cin >> n;
    result = 666;
    while(1)
    {
        if(n==cnt) break;
        result++;
        tmp = result;
        while(1)
        {
            if(tmp==0) break;
            if(tmp%10!=6 && num>=3) break;
            if(tmp%10==6) num++;
            else num=0;
            tmp /= 10;
        }
        if(num>=3) cnt++;
        num=0;
    }
    cout << result << endl;
    return 0;
}
