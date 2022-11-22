#include <iostream>

using namespace std;
int main(){
    int stonesCount, minmumNumber{0}; 
    string stonesOrder; 
    cin >> stonesCount >> stonesOrder;
    for(size_t i=1 ; i<stonesCount; i++){
        if(stonesOrder[i]==stonesOrder[i-1]) minmumNumber++;
    }
    cout << minmumNumber ;
    return 0; 
}