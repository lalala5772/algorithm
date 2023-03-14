#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, w, h, a, b;
    cin >> x >> y >> w >> h;
    a = min(x, w-x);
    b = min(y, h-y);
    if(a>b) cout << b;
    else cout << a;
    
    return 0;
}
