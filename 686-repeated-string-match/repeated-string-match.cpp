class Solution {
    public:
  int Rabin_Karp(string s1, string s2)
  {
    long long m = s1.size();
    long long n = s2.size();

    long long p = 31;
    long long pow = 1;
    long long mod = 1e9+7;
    long long targetHashVal = 0;
    // targetHashVal - calculate hash value of pattern
    for(long long i=0;i<n;i++)
    {
targetHashVal = (targetHashVal + (s2[i]-'a'+1)*pow)%mod;
pow = (pow * p) % mod;
    }
    // Rabin-Karp algo
    // prefix hash array
    vector<long long> pha(m);
    vector<long long> pa(m);

    pha[0] = s1[0]-'a'+1;
    pa[0] = 1;
    pow = p;
    for(long long i=1;i<m;i++)
    {
        pha[i] = (pha[i-1] + (s1[i]-'a'+1)*pow)%mod;
        pa[i] = pow;
        pow = (pow*p)%mod;
    }
    long long sp=0, ep=n-1;
    while(ep < m)
    {
        long long win = pha[ep];
    if(sp > 0)
    win = (win-pha[sp-1] + mod)%mod;

    if(win == (targetHashVal * pa[sp])%mod)
    {
        return 1;
    }
    sp++;
    ep++;
    }
    return 0;
  }
public:
    int repeatedStringMatch(string a, string b) {
        if(a == b) return 1;
        int count=1;
        string source=a;
        while(source.size() < b.size()){
            source += a;
            count++;
        }
        // edge cases
        if(source == b){
            return count;
        }
        if(Rabin_Karp(source, b) == 1)
        return count;

        if(Rabin_Karp(source+a, b) == 1)
        return count+1;

        return -1;
    }
};