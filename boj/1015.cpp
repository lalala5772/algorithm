#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool check[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, arr[1001], tmp[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        tmp[i] = arr[i];
    }
    sort(tmp, tmp+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==tmp[j])
            {
                if(check[j]) continue;
                cout<<j<<" ";
                check[j] = true;
                break;
            }
        }
    }
    
    return 0;
}
