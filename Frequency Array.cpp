#include <iostream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;
    getchar();

    string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    int arr[n];

    int num;
    int i=0;
    while (iss >> num)
    {
        arr[i]=num;
        i++;
    }


    int ans[m+1]= {0};

    int length = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + length);

    int j=1;
    for(i=0; i<n; i++)
    {
        while(j<arr[i])
        {
            j++;
        }
        if(j==arr[i])
        {
            ans[j]++;
        }
    }

    for(int j=1; j<=m; j++)
    {
        cout << ans[j] << endl;
    }
    return 0;
}

