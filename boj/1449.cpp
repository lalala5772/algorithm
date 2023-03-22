#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int arr[1001];
bool check[1001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n, l;
    cin>>n>>l;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(check[i]) continue;
        check[i]=true;
        cnt++;
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]<l) check[j]=true;
            else break;
        }
    }
    cout<<cnt;
    return 0;
}

