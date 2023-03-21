#include "bits/stdc++.h"
#define endl '\n'
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int cnt=0, i=0;
    string ans="";
    while(i<s.size()){
        if(s[i]=='.'){
            if(cnt==3||cnt==1) break;
            cnt=0;
            ans+=".";
        }
        else cnt++;
        
        if(cnt==4){
            ans+="AAAA";
            cnt=0;
        }
        else if(cnt==2){
            if(s.size()!=i+1&&s[i+1]=='X') ans+="";
            else {
                ans+="BB";
                cnt=0;
            }
        }
        i++;
    }
    if(cnt==3||cnt==1) cout<<-1;
    else cout<<ans;
    return 0;
}
