#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int arr[41];

void f(int n){
    if(n==0) cout<<"1 0"<<endl;
    else if(n==1) cout<<"0 1"<<endl;
    else cout<<arr[n-1]<<" "<<arr[n]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    int t, n;
    arr[0]=0; arr[1]=1; arr[2]=1;
    
    for(int i=3;i<41;i++) arr[i]=(arr[i-1]+arr[i-2]);
  
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        f(n);
    }
    return 0;
}
