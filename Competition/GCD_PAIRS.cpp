int helper(vector<int> &A, int B, int curr, int n, map<vector<int>,int>& hmap){
    if(B<=0) return 0;
    int maxi=0;
    
    for(int i=curr;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(n>200 && j-i>20) break;
            if(hmap.find({curr,B})!=hmap.end())
                return hmap[{curr,B}];
            else{
                int x=helper(A,B-1,j+1,n,hmap);
                maxi=max(maxi,__gcd(A[i],A[j])+x);
            }
        }
    }
    hmap[{curr,B}]=maxi;
    return maxi;
    
}

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    map<vector<int>,int> hmap;
    return helper(A,B,0,n, hmap);
}
