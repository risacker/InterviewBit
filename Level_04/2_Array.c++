#include<iostream>
using namespace std;

void reverseArray(int arr[], int N){
    // Your code goes here
    int start = 0;
    int end = N-1;
    while(start < end){
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}

int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
