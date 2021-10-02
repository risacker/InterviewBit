//#include<bits/stdc++.h>
//using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
    if((a.first + a.second) < (b.first + b.second)){
        return true;
    }
    return false;
}

void sortArray(vector<pair<int, int>> &A){
    sort(A.begin(), A.end(), comp);
}
//int main(){}
