#define mxn 100005
#define ll long long 
int a[21][100005];
int temp[mxn];





string Solution::solve(string A, string B, int C) {
    long long p10=1;
    reverse(B.begin(),B.end());
    long long D=0;
    for(int i=0;i<B.length();i++){
        D+=(ll)((B[i]-'0')*p10);
        p10*=10;
    }
    
    int n=A.length(),total=n;
    string ans=A;
    for(int i=0;i<n;i++) temp[i]=i;
    
    for(int i=0;i<n;i++) swap(temp[i%n],temp[(i+C)%n]);
    
    for(int i=0;i<n;i++) a[0][i]=temp[i];
    
    for(int i=1;i<=20;i++)
        for(int j=0;j<n;j++)
            a[i][j]=a[i-1][a[i-1][j]];
    
    ll bbb=(D+1)/n;
    ll ccc=(D+1)%n;
    int j=0;
    while(bbb){
        if(bbb%2){
            string temp1=ans;
            for(int i=0;i<n;i++)    temp1[i]=ans[a[j][i]];
            ans=temp1;
        }
        bbb/=2;
        j++;
    }
    
    for(int i=0;i<ccc;i++)
        swap(ans[i],ans[(i+C)%n]);
    return ans;
    
}
