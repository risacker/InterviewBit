PROBLEM LINK: https://www.interviewbit.com/problems/upper-lower-bound/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    for(int i = 0; i < q; i++){
        int x;
        cin>>x;
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        cout<<idx<<endl;
    }
}
