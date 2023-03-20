#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool flag;

string f(char c){
    string answer="";
    int n=c-'0';
    while(n>0){
        answer= to_string(n%2)+answer;
        n/=2;
    }
    if(c=='0') answer="0";
    if(flag){
        if(answer.length()==1) answer="00"+answer;
        else if(answer.length()==2) answer="0"+answer;
    }
    return answer;
}


int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    
    string n, result="";
    cin>>n;
    for(int i=0;i<n.length();i++){
        if(i==1) flag=true;
        result+=f(n[i]);
    }
    cout<<result;
    return 0;
}
