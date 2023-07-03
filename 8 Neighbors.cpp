#include <iostream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
bool check_neighbors(vector<vector<char>> A, int N, int M, int X, int Y)
{
    vector<pair<int, int>> neighbors = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    vector<pair<int, int>> valid_neighbors;
    for (auto [dx, dy] : neighbors)
    {
        int row = X + dx, col = Y + dy;
        if (0 <= row && row < N && 0 <= col && col < M)
        {
            valid_neighbors.push_back({row, col});
        }
    }
    for (auto [row, col] : valid_neighbors)
    {
        if (A[row][col] != 'x')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N,M;
    cin >> N >> M;
    vector<vector<char>> A(N, vector<char>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    int row,col;
    cin>> row>>col;
    if(check_neighbors(A,N,M,row-1,col-1))
    {
        cout<< "yes" <<endl;
    }
    else
    {
        cout<< "no"<<endl;
    }
    return 0;
}

