//https://www.interviewbit.com/problems/minimize-the-absolute-difference/

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int p=A.size(),q=B.size(),r=C.size();
    int i=p-1,j=q-1,k=r-1;
    
    int ans=INT_MAX;
    while(i!=-1 && j!=-1 && k!=-1){
        int x=min(A[i],min(B[j],C[k]));
        int y=max(A[i],max(B[j],C[k]));
        ans=min(ans,y-x);
        
        if(A[i]==y)
            i--;
        else if(B[j]==y)
            j--;
        else
            k--;
    }
    return ans;
}
