class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        //heapify - O(n)
        priority_queue<int>pq(begin(gifts) , end(gifts)) ; //max_heap

        long long sum = 0 ;
        for(int &gift : gifts)
        {
          sum += gift ; 
        }
       
       long long Mysum = 0 ;
       while(k--)
       {
        int maxEl = pq.top() ;
        pq.pop() ;

        int remaining = sqrt(maxEl) ;
        Mysum += maxEl - remaining ;

        pq.push(remaining);
         
       }
       return sum -Mysum ;
    }
};