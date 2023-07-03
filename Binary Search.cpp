#include <iostream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
string binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return "found";

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return "not found";
}
int main()
{
    int N,Q;
    cin >> N >> Q;

    int A[N];
    int keys[Q];


    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }

    for(int i=0; i<Q; i++)
    {
        cin >> keys[i];
    }

    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);

    for(int i =0 ; i<Q; i++)
    {
        cout<< binarySearch(A,0,n-1,keys[i])<<endl;
    }

    return 0;
}



