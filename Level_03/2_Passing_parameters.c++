#include<iostream>
#include<cmath>
using namespace std;
void compute(int& A, int& B, int& C){
      A = pow(A,3);
      B = pow(B,3);
      C = pow(C,3);
}
int main()  {
    int A, B, C;
    cin>>A>>B>>C;
    compute(A, B, C);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0;
}