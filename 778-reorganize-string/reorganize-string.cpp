class Solution {
    // {freq,char}
    typedef pair<int,char> p;
public:
    string reorganizeString(string s) {
        int n = s.length();
        vector<int> freq(26,0);
        for(char &ch: s)
        {
            freq[ch-'a']++;

            if(freq[ch-'a'] > (n+1)/2)
            return "";
        }
// max-heap
priority_queue<p,vector<p>> pq;
for(int i=0;i<26;i++)
{
    char ch = i+'a';
if(freq[i] > 0)
{
    pq.push({freq[i],ch});
}
}

string res="";
while(pq.size() >= 2)
{
auto p1 = pq.top();
pq.pop();

auto p2 = pq.top();
pq.pop();

res.push_back(p1.second);

res.push_back(p2.second);

p1.first--;
p2.first--;

if(p1.first > 0){
    pq.push(p1);
}
if(p2.first > 0){
    pq.push(p2);
}
}
if(!pq.empty()){
    res.push_back(pq.top().second);
}
return res;
    }
};