int solve2(int A){
    int temp;
    if(A==1) return 0;
    if(A<1) return -1;
    int ans=INT_MAX;
    if(A%2==0){
        temp=solve2(A/2);
        if(temp!=INT_MAX) ans=min(ans,1+temp);
    }
    if(A%3==0){
        temp=solve2(A/3);
        if(temp!=INT_MAX) ans=min(ans,1+temp);
    }
    if(A%4==0){
        temp=solve2(A/4);
        if(temp!=INT_MAX) ans=min(ans,1+temp);
    }
    if(A%5==0){
        temp=solve2(A/5);
        if(temp!=INT_MAX) ans=min(ans,1+temp);
    }
    return ans;
}
