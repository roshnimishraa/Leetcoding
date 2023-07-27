class Solution
{
public:
    bool isPossible(vector<int> &piles, int speed, int h)
    {
        long long count = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            count += ceil(piles[i] / (double)speed);
        }
        return count <= h;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = INT_MIN;
        for (int i = 0; i < piles.size(); i++)
            high = max(high, piles[i]);
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isPossible(piles, mid, h))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};