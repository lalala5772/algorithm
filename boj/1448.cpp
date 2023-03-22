#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int arr[1000001];
bool flag;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    
    for(int i=n-1;i>=2;i--){
        if(arr[i]<arr[i-1]+arr[i-2]) {
            flag=true;
            cout<<arr[i]+arr[i-1]+arr[i-2];
            break;
        }
    }
    if(!flag) cout<<-1;
    
    return 0;
}

