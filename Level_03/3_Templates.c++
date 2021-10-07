PROBLEM LINK: https://www.interviewbit.com/problems/templates-1/

#include <iostream>
using namespace std;

// Your code goes here
template <class T>
T index_of_largest(T arr[], int n){
    int index = -1;
    T max = arr[0];
    
    for(int i=0; i<n ; i++){
        if(arr[i]>= max) {
            max = arr[i];
            index = i;
        }
    }
    return index;
}
