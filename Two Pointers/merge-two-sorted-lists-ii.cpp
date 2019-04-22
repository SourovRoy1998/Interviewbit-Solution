//https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/


void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> C=A;
    A.clear();
    int m=B.size(),n=C.size();
    int i=0,j=0;
    while(i+j<m+n){
        if(i==m)
            while(j<n)
                A.push_back(C[j++]);
        else if(j==n)
            while(i<m)
                A.push_back(B[i++]);
        else if(B[i]<C[j])
            A.push_back(B[i++]);
        else
            A.push_back(C[j++]);
    }
}
