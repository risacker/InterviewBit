PROBLEM LINK: https://www.interviewbit.com/problems/polymorphism/

#include<iostream>
using namespace std;

#include<cmath>
// YOUR CODE GOES HERE
int compute(int x, int y){
    return abs(x-y);
}
int compute(int z){
    z = pow(z,2);
    return z;
}

int main()  {
    int x,y;
    cin>>x>>y;
    cout<<compute(x,y)<<endl;
    int z;
    cin>>z;
    cout<<compute(z)<<endl;
    return 0;
}
