#include <iostream>
using namespace std;
int main()
{
    string instructions, sequence;

    int position{1}, instructionOrder{0};

    cin>> instructions >> sequence;
    for (int i = 0;i < sequence.size();i++) {
        if (sequence[i] == instructions[instructionOrder]){
            instructionOrder++;
            position++;
            }
    }
    cout << position <<endl ;
}
