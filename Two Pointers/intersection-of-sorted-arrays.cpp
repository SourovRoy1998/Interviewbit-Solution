//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int m=A.size(),n=B.size(),i=0,j=0;
    
    vector<int>result;
    while(i<m && j<n){
        if(A[i]<B[j])
            i++;
        if(A[i]>B[j])
            j++;
        if(A[i]==B[j]){
            result.push_back(A[i]);
            i++;j++;
        }
    }
    return result;
}
