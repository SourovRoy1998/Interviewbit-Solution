class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        ans=0
        for x in A:
            ans+=x*x
        ans=ans*(pow(2,len(A)-1))
        return ans%1000000007
