#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool lk[1001][1001], check[1001];
void dfs(int n, int v)
{
    check[v] = true;
    cout << v << ' ';
    for(int i=1;i<=n;i++)
        if(!check[i]&&lk[v][i]) dfs(n, i);
}

void bfs(int n, int v)
{
    queue<int> q;
    check[v] = true;
    q.push(v);
    while(!q.empty())
    {
        v = q.front();
        for(int i=1;i<=n;i++)
            if(!check[i]&&lk[v][i]){
                q.push(i);
                check[i] = true;
        }
        cout << q.front() << ' ';
        q.pop();
    }
}

int main()
{
    int n, m, v;
    cin >> n >> m >> v;
    int x, y;
    for(int i=0;i<m;i++)
    {
        cin >> y >> x;
        lk[y][x] = true;
        lk[x][y] = true;
    }
    dfs(n, v);
    cout << endl;
    for(int i=0;i<1001;i++) check[i] = false;
    bfs(n, v);

    return 0;
}
