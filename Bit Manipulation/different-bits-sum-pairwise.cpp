//https://www.interviewbit.com/problems/different-bits-sum-pairwise/


int Solution::cntBits(vector<int> &A) {
    int n=A.size();
    long long int diff=0;
    for(int i=0;i<32;i++){
        long long int r=0;
        for(int j=0;j<n;j++){
            if((A[j]>>i)&1)
                r++;
        }
        diff+=(2*r*(n-r))%1000000007;
    }
    return diff%1000000007;
}
