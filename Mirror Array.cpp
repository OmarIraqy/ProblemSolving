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
    int arr[n][m];
    string lines[n];
    for(int i=0; i<n; i++)
    {
        std::getline(std::cin, lines[i]);
    }

    for(int i=0; i<n; i++)
    {
        std::istringstream iss(lines[i]);

        int num;
        int j=0;
        while (iss >> num)
        {
            arr[i][j]=num;
            j++;
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0,k=m-1;j<k;j++,k--){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}

