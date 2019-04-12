//https://www.interviewbit.com/problems/binary-representation/

string Solution::findDigitsInBinary(int A) {
    if(A==0)
        return "0";
    string s="";
    while(A){
        s = s+to_string(A%2);
        A=A/2;
    }
    reverse(s.begin(),s.end());
    return s;
    
}
