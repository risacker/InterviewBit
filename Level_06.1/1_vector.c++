#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x);
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}