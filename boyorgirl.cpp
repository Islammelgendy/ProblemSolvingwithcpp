#include <iostream> 
#include <set>

using namespace std ; 

int main(){

    string userName; 
    set<char> nameChars;
    cin >> userName; 
    for(int i =0; i < userName.length(); i++) nameChars.insert(userName[i]);
    
    int l = nameChars.size();
    if (l%2 == 0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!";
    return 0 ;
}