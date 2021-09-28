#include<iostream>
#include<sstream>
using namespace std;


int main()
{
    string S, T;
 
    getline(cin, S);
 
    stringstream X(S);
 
    while (getline(X, T, ',')) {
        cout << T << endl;
    }
 
    return 0;
}