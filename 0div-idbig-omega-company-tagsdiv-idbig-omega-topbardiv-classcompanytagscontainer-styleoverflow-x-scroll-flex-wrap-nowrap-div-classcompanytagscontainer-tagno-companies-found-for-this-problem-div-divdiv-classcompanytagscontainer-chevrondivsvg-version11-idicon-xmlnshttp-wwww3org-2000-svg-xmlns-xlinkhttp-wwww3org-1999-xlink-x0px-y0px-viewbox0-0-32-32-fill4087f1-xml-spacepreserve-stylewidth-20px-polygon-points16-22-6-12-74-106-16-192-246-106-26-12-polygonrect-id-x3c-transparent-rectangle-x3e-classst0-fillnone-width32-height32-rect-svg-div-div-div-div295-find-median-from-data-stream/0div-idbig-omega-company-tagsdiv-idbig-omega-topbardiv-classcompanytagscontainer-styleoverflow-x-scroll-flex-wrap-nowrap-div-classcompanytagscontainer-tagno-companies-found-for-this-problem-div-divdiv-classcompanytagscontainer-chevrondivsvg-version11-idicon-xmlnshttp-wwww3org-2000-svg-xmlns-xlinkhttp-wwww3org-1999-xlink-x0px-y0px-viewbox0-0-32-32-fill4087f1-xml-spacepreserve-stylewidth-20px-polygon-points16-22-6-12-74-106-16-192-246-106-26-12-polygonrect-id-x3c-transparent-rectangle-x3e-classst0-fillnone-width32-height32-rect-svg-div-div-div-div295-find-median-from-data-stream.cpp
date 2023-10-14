class MedianFinder {
public:
    priority_queue<int> left_max_heap; // max heap 
  priority_queue<int,vector<int>,greater<int>> right_min_heap; // min heap
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left_max_heap.empty() || num < left_max_heap.top())
        {
            left_max_heap.push(num);
        }
    else{
        right_min_heap.push(num);
    }
        
//always maintain left_max_heap size is one greater than right_min_heap
// or both heap size should be equal 
    
if(abs((int)left_max_heap.size() - (int)right_min_heap.size()) > 1)
{
    right_min_heap.push(left_max_heap.top());
    left_max_heap.pop();
}
else if(left_max_heap.size() < right_min_heap.size())
{
    left_max_heap.push(right_min_heap.top());
    right_min_heap.pop();
}
        
    }
    
    double findMedian() {
       if(left_max_heap.size() == right_min_heap.size())
       {
           //if n = even 
   double mean = ((double)left_max_heap.top() + (double)right_min_heap.top())/2;
           return mean;
 }
        else{
            // n = odd 
    return left_max_heap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */