//https://www.interviewbit.com/problems/3-sum/


int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int closest_sum=1000000000;
    for(int i=0;i<A.size()-2;i++){
        int ptr1=i+1;
        int ptr2=A.size()-1;
        while(ptr1<ptr2){
            int temp_sum=A[i]+A[ptr1]+A[ptr2];
            if(abs(temp_sum-B)<abs(closest_sum-B))
                closest_sum=temp_sum;
            if(temp_sum>B)
                ptr2--;
            else
                ptr1++;
        }
    }
    return closest_sum; 
    
}
