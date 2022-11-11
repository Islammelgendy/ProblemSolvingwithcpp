#include <iostream> 
#include<algorithm>

using namespace std; 

int main(){
    int boxLenght;
    cin >> boxLenght;
    int box[boxLenght];

    for(int i=0; i<boxLenght; i++) cin >> box[i];
    sort(box,box+boxLenght);
    for(int i=0; i<boxLenght; i++) cout << box[i] << " ";
    return 0; 
}