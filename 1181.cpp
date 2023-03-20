#include <bits/stdc++.h>

using namespace std;
string a[20001];
bool cmp(const string &a, const string &b)
{
    if(a.length()!=b.length())
        return a.length()<b.length();
    return a<b;
}
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, cmp);

    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]) continue;
        cout << a[i] << endl;
    }
    
    return 0;
}
