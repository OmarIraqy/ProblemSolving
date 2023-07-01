#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string stones;
    string instructions;
    getline(cin,stones);
    getline(cin,instructions);

    int steps=0;

    for(int i=0;i<instructions.size();i++){
        if(instructions[i]==stones[steps])
        {
            steps++;
        }
    }
    cout << steps+1 <<endl;
    return 0;
}
