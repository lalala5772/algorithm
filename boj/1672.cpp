#include <bits/stdc++.h>

using namespace std;
char str[1000001];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %c", &str[i]);
    for(int i=n-1;i>0;i--)
    {
        if(str[i]=='A'&&str[i-1]=='A')
        {
            str[i]=0;
            str[i-1]='A';
        }
        else if(str[i]=='G'&&str[i-1]=='A')
        {
            str[i]=0;
            str[i-1]='C';
        }
        else if(str[i]=='A'&&str[i-1]=='G')
        {
            str[i]=0;
            str[i-1]='C';
        }
        else if(str[i]=='A'&&str[i-1]=='C')
        {
            str[i]=0;
            str[i-1]='A';
        }
        else if(str[i]=='C'&&str[i-1]=='A')
        {
            str[i]=0;
            str[i-1]='A';
        }
        else if(str[i]=='A'&&str[i-1]=='T')
        {
            str[i]=0;
            str[i-1]='G';
        }
        else if(str[i]=='T'&&str[i-1]=='A')
        {
            str[i]=0;
            str[i-1]='G';
        }
        else if(str[i]=='G'&&str[i-1]=='G')
        {
            str[i]=0;
            str[i-1]='G';
        }
        else if(str[i]=='G'&&str[i-1]=='C')
        {
            str[i]=0;
            str[i-1]='T';
        }
        else if(str[i]=='C'&&str[i-1]=='G')
        {
            str[i]=0;
            str[i-1]='T';
        }
        else if(str[i]=='T'&&str[i-1]=='G')
        {
            str[i]=0;
            str[i-1]='A';
        }
        else if(str[i]=='G'&&str[i-1]=='T')
        {
            str[i]=0;
            str[i-1]='A';
        }
        else if(str[i]=='C'&&str[i-1]=='C')
        {
            str[i]=0;
            str[i-1]='C';
        }
        else if(str[i]=='C'&&str[i-1]=='T')
        {
            str[i]=0;
            str[i-1]='G';
        }
        else if(str[i]=='T'&&str[i-1]=='C')
        {
            str[i]=0;
            str[i-1]='G';
        }
        else if(str[i]=='T'&&str[i-1]=='T')
        {
            str[i]=0;
            str[i-1]='T';
        }

    }
    printf("%c\n", str[0]);
    return 0;
}
