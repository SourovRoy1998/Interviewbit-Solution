//https://www.interviewbit.com/problems/reverse-bits/

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int ans=0;
    int i=0;
    while(A){
        ans+=((A%2)<<(31-i++));
        A=A>>1;
    }
    return ans;
}