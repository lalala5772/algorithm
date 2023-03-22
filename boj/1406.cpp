#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    int n;
    cin>>s>>n;
    
    list<char> l(s.begin(), s.end());
    auto cursor=l.end();
    char order;
    for(int i=0;i<n;i++){
        cin>>order;
        if(order=='L') {
            if(cursor!=l.begin()) cursor--;
        }
        else if(order=='D') {
            if(cursor!=l.end())   cursor++;
        }
        else if(order=='B'){
            if(cursor!=l.begin()){
                cursor--;
                cursor=l.erase(cursor);
            }
        }
        else if(order=='P') {
            char word;
            cin>>word;
            l.insert(cursor, word);
        }
    }
    for (auto it = l.begin(); it != l.end(); it++) cout << *it;

    return 0;
}

