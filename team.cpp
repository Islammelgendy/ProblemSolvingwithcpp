#include <iostream> 

using namespace std; 

int main(){
    int GamesNumber; 
    int friend1, friend2, friend3, sum{0};

    cin >> GamesNumber;
    for (int i=0; i<GamesNumber; i++){
        cin >> friend1 >> friend2 >> friend3;
        if ((friend1 + friend2 + friend3) > 1) sum++;
    }
    
    cout <<sum;

}