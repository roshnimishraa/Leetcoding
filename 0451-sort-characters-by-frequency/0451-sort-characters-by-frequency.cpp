class Solution {
public:
    string frequencySort(string s) {
        vector<vector<char>> bucket(s.size()+1); // DONT FORGET +1 to size!!
        unordered_map<char, int> m;
        string ans;
        
        // 1. map of character to its frequency        
        for (const auto& e : s)        
            m[e]++;        
           
		// 2. make the buckets
        // idx represents frequency
        // value at index represents characters with that frequency
        for (const auto& e : m)        
            bucket[e.second].push_back(e.first);
        
                
        // 3. now reconstruct the string
        for (int i = bucket.size() - 1; i > 0; i--)
        {
            // for each character in the bucket
            for (int j = 0; j < bucket[i].size(); j++)
            {
                // append it i number of times
                // i.e character 'e' at bucket 3 will be appended 3 times -> "...eee"
                for (int count = i; count > 0; count--)
                    ans += bucket[i][j];
            }
        }          
        
        return ans;
    }
};