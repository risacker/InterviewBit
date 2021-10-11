PROBLEM LINK: https://www.interviewbit.com/problems/stack-queue/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Complete the given function
vector<int> solve(vector<int> &A, int B){
    int n = A.size();
    assert(B <= n);
    vector<int> C;
    C.resize(n - B + 1);
    deque<int> Q;
    for (int i = 0; i < B; i++) {
        while (!Q.empty() && A[i] >= A[Q.back()])
            Q.pop_back();
        Q.push_back(i);
    }
    for (int i = B; i < n; i++) {
        C[i - B] = A[Q.front()];
        while (!Q.empty() && A[i] >= A[Q.back()])
            Q.pop_back();
        while (!Q.empty() && Q.front() <= i - B)
            Q.pop_front();
        Q.push_back(i);
    }
    C[n - B] = A[Q.front()];
    return C;
}

int main()  {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        int B;
        cin>>B;
        vector<int> ans = solve(A, B);
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
