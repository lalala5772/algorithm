#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, cp=0;
    while(~scanf("%d %d", &n, &k))
    {
        cp = n;
        while(n>=k)
        {
            cp += n/k;
            n = n/k+n%k;
        }
        printf("%d\n", cp);
        cp=0;
    }

    return 0;
}
