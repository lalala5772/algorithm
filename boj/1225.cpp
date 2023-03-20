#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string a,b;
    long long sum1=0, sum2=0;
    cin>>a>>b;
    for(int i=0;i<a.length();i++) sum1+=a[i]-'0';
    for(int i=0;i<b.length();i++) sum2+=b[i]-'0';
    cout<<sum1*sum2;
    return 0;
}
