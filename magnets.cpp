#include <iostream>

using namespace std;
int main(){

    int sum{1}, numberOfMagnets;
    string holder, magnet;

    cin >> numberOfMagnets;
    cin >> holder;

    for(int i=1; i<numberOfMagnets; i++){
        cin >> magnet;
        if(magnet!=holder) {
            sum++;
            holder=magnet;
        }
    }
    cout << sum <<endl;

    return 0;
}