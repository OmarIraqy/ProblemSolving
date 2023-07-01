#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int nums[T];
    for(int i=0;i<T;i++)
    {
        cin>> nums[i];
    }
    for(int i=0;i<T;i++){
        int ones=0;
        while(nums[i]!=0){
            if(nums[i]%2!=0){
                ones++;
            }
            nums[i]=nums[i]/2;
        }
        nums[i]=ones;
    }
    for(int i=0;i<T;i++){
        int decimal=0;
        int multy=1;
        for(int j=0;j<nums[i];j++){
            decimal=decimal+multy;
            multy=multy*2;
        }
        nums[i]=decimal;
    }
    for(int i=0;i<T;i++){
        cout << nums[i] << endl;
    }
    return 0;
}
