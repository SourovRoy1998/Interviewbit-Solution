vector<int> Solution::solve(string A, vector<vector<int> > &B) {
    int n=A.length();
    vector<vector<int>>memoize(n+1,vector<int>(26,0));
    vector<int> result;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++) memoize[i+1][j]=memoize[i][j];
        char c=A[i];
        memoize[i+1][(int)(c)-97]+=1;
    }
    
    for(int i=0;i<B.size();i++){
        int l=B[i][0]-1;
        int r=B[i][1];
        int array[26];
        for(int j=0;j<26;j++){
            array[j]=0;
            array[j]=memoize[r][j]-memoize[l][j];
        }
        int m=-1;
        for(int j=0;j<26;j++) m=max(m,array[j]);
        
        int c=0;
        for(int j=0;j<26;j++) if(m==array[j]) c++;
        result.push_back(c);
    }
    
    return result;
    
}
