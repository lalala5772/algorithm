#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool flag;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, a, b;
    cin>>n>>a>>b;
    int tmpa=(a+1)/2, tmpb=(b+1)/2, cnt=1;
    while(1){
        if(n==0) break;
        if(tmpa==tmpb) {
            flag=true;
            break;
        }
        tmpa=(tmpa+1)/2;
        tmpb=(tmpb+1)/2;
        cnt++;
        n/=2;
    }
    if(flag) cout<<cnt;
    else cout<<-1;
    return 0;
}
