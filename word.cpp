#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

using namespace std;
int main(){
    string word;
    cin >> word ;
    transform(word.begin(), word.end(), word.begin(),::tolower) ;
    cout << word << endl;

}
