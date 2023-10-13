class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0;
        int v1=version1.length();
        int v2 = version2.length();
        int n1=0,n2=0;
        while(i<v1 || j<v2)
        {
        while(i<v1 && version1[i] != '.')
        {
            //string to int 
        n1 = n1*10 + (version1[i]-'0'); //'4'-0 = 4
            i++;
        }
    while(j<v2 && version2[j] != '.')
    {
        n2 = n2*10 + (version2[j] - '0');
        
            j++;
    }
    if(n1>n2)
            {
                return 1;
            }
          else if(n1 < n2) 
            {
                return -1;
            }
    i++;
    j++;
        n1=0;
            n2=0;
        } 
            return 0;
    }
};