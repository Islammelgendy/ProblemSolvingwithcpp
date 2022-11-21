#include <iostream>
#include <string>

using namespace std;

int main(){

    string string1, string2; 
    cin >> string1 >> string2;

    int length = string1.size();

    for(size_t i=0; i < length; i++ ){
        if (tolower(string1[i]) > tolower(string2[i])){
            cout << "1\n";
            return 0;
        }else if ((tolower(string1[i]) < tolower(string2[i])))  {
            cout << "-1\n";
            return 0;
        }
    }
    cout << "0\n" ;
    return 0; 
}