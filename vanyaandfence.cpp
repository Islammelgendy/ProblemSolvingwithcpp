#include <iostream>

using namespace std;

int main(){
    
    int number, height, friendHeight, width{0};
    
    cin >> number >> height ;
    for (int i =0 ; i<number; i++){
        cin >> friendHeight ;
        if (friendHeight <= height) width++;
        else width+=2 ;
    }
    cout<<width;

    return 0;
}