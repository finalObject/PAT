//
//  main.cpp
//  PATest
//
//  Created by 胡小波 on 2017/3/10.
//  Copyright © 2017年 Yullion. All rights reserved.
//
#include <iostream>
#include <fstream>

int d[500][500];
int visited[500];
int teams[500];
int n, m;
int s, e;

#define INF 0x7fffffff

int min_dist=INF;
int max_amount;
int cnt;

using namespace std;

void dfs(int start, int dist, int amount)
{
    
    //下面的continue是剪枝
    if (start == e)
    {
        if (dist < min_dist)
        {
            cnt = 1;
            min_dist = dist;
            max_amount = amount;
        }
        else if (dist == min_dist)
        {
            cnt++;
            if (amount>max_amount)
            {
                max_amount = amount;
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (d[start][i] != 0 && !visited[i])
        {
            visited[i] = 1;
            dfs(i, dist+d[start][i], amount+teams[i]);
            visited[i] = 0;
        }
    }
    
}

int main(int argc, char **argv)
{
    ifstream cin("in.txt");
    cin >> n >> m >> s >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = d[b][a] = c;
    }
    visited[s] = 1;
    dfs(s, 0, teams[s]);
    cout << cnt << ' ' << max_amount << endl;
    return 0;
}
