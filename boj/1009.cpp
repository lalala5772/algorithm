#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int sp=1, a, b;
        scanf(" %d %d", &a, &b);
        for(int j=0;j<b;j++){
            sp *= a;
            sp = sp%10;
        }
        if(sp==0)
            printf("10\n");
        else
            printf("%d\n", sp);
    }
    
    return 0;
}
