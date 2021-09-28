#include<iostream>
#include<string>
using namespace std;


int main()  {
    string A, B;
    cin>>A>>B;
    // YOUR CODE GOES HERE
    int len=A.size();
    int lenb=B.size();
    cout<<len<<" "<<lenb<<endl;
    string c = A+B;
    cout<<c<<endl;
    char a=A[0];
    char b=B[0];
    A[0]=b;
    B[0]=a;
    cout<<A<<" "<<B<<endl;
    return 0;
}