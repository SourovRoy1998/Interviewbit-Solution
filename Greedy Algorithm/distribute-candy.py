//https://www.interviewbit.com/problems/distribute-candy/

class Solution:
	# @param A : list of integers
	# @return an integer
    def candy(self, A):
	    n=len(A)
	    result=[1]*n
	    for i in range(1,n):
	        if(A[i]>A[i-1]):
	            result[i]=result[i-1]+1
	    for i in range(n-2,-1,-1):
	        if(A[i]>A[i+1] and result[i]<=result[i+1]):
	            result[i]=result[i+1]+1
	    return sum(result)
