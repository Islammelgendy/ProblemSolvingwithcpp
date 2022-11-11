#include <iostream>

using namespace std; 

int main(){

    int limak, bob, counter{0}; 
    
    cin >> limak >> bob;

    while (bob >= limak)
    {
        limak*=3;
        bob*=2;
        counter++;   
    }
    
    cout << counter;

    return 0; 
}