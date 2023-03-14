#include <bits/stdc++.h>

using namespace std;
int a[51], b[51];
int main()
{
    int n, sum=0;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);
    reverse(b, b+n);
    for(int i=0;i<n;i++) sum += a[i]*b[i];
    cout << sum << endl;
    return 0;
}
