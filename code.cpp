class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int parity=0;
        int maximum=0;
        for(int i=0;i<n;i++)
        {  if(s[i]=='(')
           {   
                 
                 parity++;

           }
           else if(s[i]==')')
           {
            
             parity--;
           }
            maximum=max(maximum,parity);
        }

return maximum;
    }
};