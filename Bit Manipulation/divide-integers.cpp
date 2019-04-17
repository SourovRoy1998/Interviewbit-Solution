//https://www.interviewbit.com/problems/divide-integers/


//Bit Manipulation
int Solution::divide(int A, int B) {
    long long dividend=A,divisor=B,quotient=0,temp=0;
    bool sign=true;
    if(dividend<0 ^ divisor<0)
        sign=false;
    
    dividend=abs(dividend);
    divisor=abs(divisor);
    
    for(int i=31;i>=0;i--){
        if((temp+(divisor<<i))<=dividend){
            temp+=(divisor<<i);
            quotient|=(1LL<<i);
        }
    }
    
    if(!sign)
        quotient=~quotient+1;
    
    if(quotient>=INT_MAX)
        return INT_MAX;
    return quotient;
}


//Mathematics
//https://www.geeksforgeeks.org/divide-two-integers-without-using-multiplication-division-and-mod-operator-set2/
int Solution::divide(int A, int B) {
    long long dividend=A,divisor=B,quotient=0,temp=0;
    bool sign=true;
    if(dividend<0 ^ divisor<0)
        sign=false;
    
    dividend=abs(dividend);
    divisor=abs(divisor);
    
    quotient = exp(log(dividend)-log(divisor));
    
    if(!sign)
        quotient=~quotient+1;
    
    if(quotient>=INT_MAX)
        return INT_MAX;
    return quotient;
}
