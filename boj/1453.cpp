#include <bits/stdc++.h>

using namespace std;
int sit[101];
bool check[101];
int main()
{
    int n, cnt=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> sit[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!check[sit[i]]) check[sit[i]]=true;
        else cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}
