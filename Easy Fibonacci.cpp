#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N==0)
        return 0;
    if(N==1){
        cout<< "0 "<<endl;
        return 0;
        }
    int a=1;
    int b=0;
    string ans="";
    ans.append("0");
    ans.append(" ");
    ans.append("1");
    ans.append(" ");
    for(int i=0;i<N-2;i++){
        ans.append(std::to_string(a+b));
        ans.append(" ");
        int temp=b;
        b=a;
        a=temp+b;
    }
    cout<< ans << endl;
    return 0;
}
