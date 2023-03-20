#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n, score, p;
    cin>>n>>score>>p;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int rk=1;
    if(n==p&&arr[n-1]>=score){
        cout<<-1;
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]>score) rk++;
        }
        cout<<rk;
    }
  
    return 0;
}

