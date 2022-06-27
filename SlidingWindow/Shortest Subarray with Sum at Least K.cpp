// Normal method works good for Monotonically increasing values

// We Will use DeQueue for
// 1. Monotonic Stack can maintain monotonically Asc values
// 2. Compression of Window from left involves Pop from beginning
// Stack has only Top and No Bottom so Stack will not work here
// Insetion and Deletion will be done from one end only
// Soln: Dequeue can do Both
// 1. Insertion of new sum value at the end in Monotonically Asc Order
// 2. Compression of Sum value form beginning to minimize the window size with sum>=target
//-ve element
//T(n) = O(n) Space = O(n)

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        deque<pair<long long,long long>> dq;//index,sum
        long long sum = 0;
        long long shortest = INT_MAX;
        
        for(long long i=0;i<n;++i){
            sum += nums[i];
            if(sum>=k)  shortest = min(shortest,i+1);//Sum from start to i-th index
            
            //Reduce window size to find minimum window with sum>=k
            pair<long long,long long> curr = {INT_MIN,INT_MIN};
            while(!dq.empty() and (sum-dq.front().second >= k)){
                curr = dq.front();
                dq.pop_front();
            }
            //Calculate new shortest (if possible)
            if(curr.second!=INT_MIN)
                shortest = min(shortest,(i-curr.first));
            
            //Maintain monotonically non-decreasing order of deque
            while(!dq.empty() and sum<=dq.back().second)
                dq.pop_back();
            dq.push_back({i,sum});//Push i-th sum
        }
        return shortest==INT_MAX?-1:shortest;
    }
};