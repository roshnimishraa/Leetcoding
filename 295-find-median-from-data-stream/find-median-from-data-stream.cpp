class MedianFinder {
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
  
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(maxHeap.empty() && minHeap.empty()) 
       {
        maxHeap.push(num);
       }
       else{
        if(maxHeap.top() < num)
        {
            minHeap.push(num);
        }
        else{
            maxHeap.push(num);
        }
       }
  int n = maxHeap.size();
 int m = minHeap.size();
      
// check heap is balanced or not (heapify)
if(n-m == 2 || n-m == -2)
{
    if(n > m)
    {
        int element = maxHeap.top();
          maxHeap.pop();
        minHeap.push(element);
      
    }
    else{
        int element = minHeap.top();
          minHeap.pop();
        maxHeap.push(element);
   }
}
    }
    
    double findMedian() {
          int n = maxHeap.size();
        int m = minHeap.size();
      
//  if n+m is even 
if( (n+m) % 2 == 0)
{
return ((double)(maxHeap.top()+(double)minHeap.top()))/2.0;
}
// if n+m is odd return heap.top() which has greater elements
if(n > m)
{
    return maxHeap.top();
}
   return minHeap.top();

 }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */