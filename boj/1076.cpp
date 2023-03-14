#include <bits/stdc++.h>

using namespace std;
string s[5];
string arr;
int main()
{
   for(int i=0;i<2;i++) {
      cin >> s[i];
      if(s[i]=="black") arr+='0';
      else if(s[i]=="brown") arr+='1';
      else if(s[i]=="red") arr+='2';
      else if(s[i]=="orange") arr+='3';
      else if(s[i]=="yellow") arr+='4';
      else if(s[i]=="green") arr+='5';
      else if(s[i]=="blue") arr+='6';
      else if(s[i]=="violet") arr+='7';
      else if(s[i]=="grey") arr+='8';
      else arr+='9';
   }
   cin >> s[2];
   if(s[2]=="brown") arr+="0";
   else if(s[2]=="red") arr+="00";
   else if(s[2]=="orange") arr+="000";
   else if(s[2]=="yellow") arr+="0000";
   else if(s[2]=="green") arr+="00000";
   else if(s[2]=="blue") arr+="000000";
   else if(s[2]=="violet") arr+="0000000";
   else if(s[2]=="grey") arr+="00000000";
   else if(s[2]=="white") arr+="000000000";
   if(arr[0]=='0'&&arr[1]=='0')
    cout << 0;
   else if(arr[0]=='0')
       for(int i=1;i<arr.size();i++) cout << arr[i];
   else
    for(int i=0;i<arr.size();i++) cout << arr[i];
   return 0;
}
