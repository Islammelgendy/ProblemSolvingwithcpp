#include <iostream>

using namespace std; 

int main(){
    int anton{0}, danik{0}, gamesNumber;
    string score;

    cin >> gamesNumber;
    cin >> score;
    
    for (int i=0; i < gamesNumber; i++){
        if (score[i] == 'A') anton++;
        else danik++;
    }

    if (danik > anton) cout << "Danik\n";
    else if (anton > danik) cout << "Anton\n";
    else cout << "Friendship\n";

    return 0; 
}