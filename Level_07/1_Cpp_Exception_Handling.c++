#include<iostream>
using namespace std;

int division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}


int main()  {
    int a, b;
    cin>>a>>b;
    // Your code goes here
    // call function division(a, b)
    // print the result in try else exception in catch
    // Your code goes here
    try {
      int z = division(a, b);
      cout << z << endl;
    }
    catch (char const* msg) {
     cout << msg << endl;
    }
    return 0;
}