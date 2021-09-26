#include<iostream>

using namespace std;

int main()  {
    int num;
    cin>>num;
    // Your code goes here
    if(num >= 90)
      cout<<"A";
    else if(num >= 80)
      cout<<"B";
    else if(num >= 70)
      cout<<"C";
    else if(num >= 60)
      cout<<"D";
    else if(num >= 50)
      cout<<"E";
    else
      cout<<"F";
    return 0;
}