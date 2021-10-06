PROBLEM LINK: https://www.interviewbit.com/problems/loops/

#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    int i=0;
    while (i < N)
    {
        if (i%2 != 0)
            cout << i << endl;
        i++;
    }
    return 0;
}
