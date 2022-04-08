/*
This problem was found in the USACO Guide in the Getting Started tab.
Here is the problem link: https://open.kattis.com/problems/basketballoneonone
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int Apoints = 0, Bpoints = 0;
    string gameRecord;

    cin >> gameRecord;

    for (int i = 0; i < (gameRecord.length()/2); i++){
        if (gameRecord.at(2*i) == 'A'){
            Apoints += (int) (gameRecord.at(2*i+1));
        } else {
            Bpoints += (int) (gameRecord.at(2*i));
        }
    }
    if (Apoints > Bpoints){
        cout << "A";
    } else {
        cout << "B";
    }
    return 0;
}