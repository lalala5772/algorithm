#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool flag;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string f;
    vector<int> v;
    cin>>f;
    
    string value="";
    int num;
    for(int i=0;i<f.size();i++){
        
        if(i==f.size()-1){
            value+=f[i];
            if(flag) {
                num=-stoi(value);
                v.push_back(num);
            }
            else {
                num=stoi(value);
                v.push_back(num);
            }
            break;
        }
        
        
        if(f[i]=='-'&&flag){
            num=-stoi(value);
            v.push_back(num);
            value="";
            continue;
        }
        else if(f[i]=='-'){
            flag=true;
            num=stoi(value);
            v.push_back(num);
            value="";
            continue;
        }
            
        if(f[i]=='+'&&!flag){
            num=stoi(value);
            v.push_back(num);
            value="";
            continue;
        }
        if(f[i]=='+'&&flag){
            num=-stoi(value);
            v.push_back(num);
            value="";
            continue;
        }
        
 
        if(f[i]!='-'&&f[i]!='+') {
            value+=f[i];
            continue;
        }
        
    }
    
    int sum=0;
    for(int i=0;i<v.size();i++) sum+=v.at(i);

    cout<<sum;


    return 0;
}

