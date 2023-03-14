#include <bits/stdc++.h>

using namespace std;
bool nm[51][51];
bool check[51][51];
int a[] = {-1, 1, 0, 0};
int b[] = {0, 0, -1, 1};
int cnt, n, m;
void dfs(int y, int x);
int main()
{
    int t, k;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> m >> n >> k;
        int x, y;
        for(int j=0;j<k;j++){
            cin >> x >> y;
            nm[y][x]=true;
        }
        cnt=0;
        for(int j=0;j<n;j++){
            for(int r=0;r<m;r++)
            {
                if(!check[j][r]&&nm[j][r])
                {
                    dfs(j, r);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
        for(int j=0;j<n;j++)
            for(int r=0;r<m;r++){
             check[j][r]=false;
             nm[j][r]=false;
            }
    }
    return 0;
}
void dfs(int y, int x)
{
    check[y][x]=true;
    for(int i=0;i<4;i++)
    {
        int nx=x+a[i];
        int ny=y+b[i];
        if(nx<0||ny<0||nx>=50||ny>=50||check[ny][nx]||nm[ny][nx]==false) continue;
        dfs(ny, nx);
    }
} 
