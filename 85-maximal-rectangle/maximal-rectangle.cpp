class Solution {
private :
    vector<int> nextsmallerelement(vector<int> arr,int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
            while(s.top()!=-1 && arr[i]<=arr[s.top()])
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    //for finding prev smaller element
    vector<int> prevsmallerelement(vector<int>arr,int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            int curr=arr[i];
            while(s.top()!=-1 && curr<=arr[s.top()])
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

    //for finding area of that particular row
    int largestRectangleArea(vector<int>& heights)
    {
        int n=heights.size();
        vector<int> next(n);
        next=nextsmallerelement(heights,n);

        vector<int> prev(n);
        prev= prevsmallerelement(heights,n);

        int area=INT_MIN;
        for(int i=0;i<n;i++)
        {
            
            int length=heights[i];
            if(next[i]==-1)
            {
                next[i]=n;
            }
            int breadth=next[i]-prev[i]-1;
            int newarea=length*breadth;
            area=max(area,newarea);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>heights(m,0);
        int area=INT_MIN;
        //int area=largestRectangleArea(matrix[0]);
        for(int i=0;i<n;i++)    //for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0')
                {
                    heights[j]=0;
                    // matrix[i][j]=0
                }
                else
                {
                    heights[j]=heights[j] + 1;
                    //matrix[i][j]=matrix[i][j] + matrix[i-1][j];
                }
            }
            int newArea=largestRectangleArea(heights);
            area=max(newArea,area);
        }
        return area;
        
    }
};