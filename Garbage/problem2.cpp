


struct comp{
    bool operator()(vector<int> const &a, vector<int> const &b)
    {return a[0]>b[0];} 
};

int Solution::solve(int A) {
    priority_queue<vector<int>, vector<vector<int>>, comp> pq;
    int ans=INT_MAX;
    pq.push({1,0});
    
    while(!pq.empty()){
        vector<int> x=pq.top();
        if(x[0]==A) ans=min(ans,x[1]);
        pq.pop();
        for(int i=2;i<=5;i++){
            if(x[0]*i<=A) pq.push({x[0]*i,x[1]+1});
        }
    }
    if(ans==INT_MAX) return -1;
    return ans;
    
}
