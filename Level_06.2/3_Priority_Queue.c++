PROBLEM LINK: https://www.interviewbit.com/problems/priority_queue/

int solve(vector<int> &A){
    priority_queue<int, vector<int>, greater<int>> pq; 
    int cost = 0;
    for(int x:A){
        pq.push(x);
    }
    while(pq.size() != 1){
        int l1 = pq.top();
        pq.pop();
        int l2 = pq.top();
        pq.pop();
        cost += l1 + l2;
        pq.push(l1 + l2);
    }
    return cost;    
}
