#include <iostream>
#include <vector>
#include<tuple>
using namespace std;

pair<int, int> findMaxMin(vector<int> &A){
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    pair<int, int> ans(0, INT_MAX);
    for(int i = 0; i < A.size(); i++){
        if(ans.first < A[i]){
            ans.first = A[i];
        }
        if(ans.second > A[i]){
            ans.second = A[i];
        }
    }
    return ans;    
}

tuple<int, int, int> compute(vector<int> &A){
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A 
    // Third value of tuple will be sum of odd values in array A
    tuple<int, int, int> ans(0, 0, 0);
    for(int i = 0; i < A.size(); i++){
        get<0>(ans) += A[i];
        if(A[i] % 2 == 0){
            get<1>(ans) += A[i];
        }
        else{
            get<2>(ans) += A[i];
        }
    }
    return ans;    
}


int main()  {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    
    pair<int, int> max_min = findMaxMin(A);
    cout<<max_min.first<<" "<<max_min.second<<endl;
    
    tuple<int, int, int> tuple_values = compute(A);
    cout<< get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << endl;
    
    return 0;
}

