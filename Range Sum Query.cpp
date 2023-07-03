#include <iostream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q;
    cin >> N>>Q;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    int pairs[Q][2];
    for(int i=0; i<Q; i++)
    {
        cin >> pairs[i][0]>>pairs[i][1];
    }

    long long sums[N];
    sums[0]=A[0];
    for(int i=1; i<N; i++)
    {
        sums[i]=sums[i-1]+A[i];
    }

    for(int i=0; i<Q; i++)
    {
        if(pairs[i][0]-2 < 0)
        {
            cout << sums[pairs[i][1]-1]<<endl;
        }
        else
            cout << sums[pairs[i][1]-1] - sums[pairs[i][0]-2]<<endl;
    }

    return 0;
}

