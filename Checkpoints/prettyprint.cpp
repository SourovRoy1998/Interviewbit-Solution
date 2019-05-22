//https://www.interviewbit.com/problems/prettyprint/

vector<vector<int> > Solution::prettyPrint(int A) {
    if(A==1)
        return {{1}};
    vector<vector<int>> prev=prettyPrint(A-1);
    vector<vector<int>> result(2*A-1);
    
    for(int j=0;j<2*A-1;j++)
        result[0].push_back(A);
    for(int i=0;i<prev.size();i++){
        result[i+1].push_back(A);
        for(int j=0;j<prev.size();j++)
            result[i+1].push_back(prev[i][j]);
        result[i+1].push_back(A);
    }
    
    for(int j=0;j<2*A-1;j++)
        result[2*A-2].push_back(A);
    return result;
}
