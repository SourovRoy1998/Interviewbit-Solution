//https://www.interviewbit.com/problems/min-xor-value/

int Solution::findMinXor(vector<int> &A) {
    int ans = INT_MAX;
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i++)
        ans=min(ans,A[i-1]^A[i]);
    return ans;
}
