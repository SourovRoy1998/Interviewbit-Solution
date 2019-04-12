//https://www.interviewbit.com/problems/single-number-ii/


int Solution::singleNumber(const vector<int> &A) {
    int number=0;
    for(int i=0;i<32;i++){
        int c=0;
        for(int j=0;j<A.size();j++)
            c+=((A[j]>>i)&1);
        if(c%3==1)
            number|=(1<<i);
    }
    return number;
    
}
