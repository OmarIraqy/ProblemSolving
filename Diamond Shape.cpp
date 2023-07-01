#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int N;
    cin >> N ;

    for(int i=1;i<=N;i++){
        string line="";
        for(int j=N;j>i;j--){
            line.append(" ");
        }
        for(int k=1;k<2*i;k++){
            line.append("*");
        }
        cout<< line <<endl;
    }

    for(int i=N;i>=1;i--){
        string line="";
        for(int j=i;j<N;j++){
            line.append(" ");
        }
        for(int k=2*i;k>1;k--){
            line.append("*");
        }
        cout<<line<<endl;
    }
    return 0;
}
