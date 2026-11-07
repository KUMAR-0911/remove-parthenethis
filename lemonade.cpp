class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0;
        int twenty=0;
        int tens=0;
         int n=bills.size();
         int i=0;
         while(i<n)
         {   if(bills[i]==5)
            {
                fives++;
            }
         else if(bills[i]==10)
            {  if(fives>0)
               {
                tens++;
                fives--;
               }
               else
               {
                return false;
               }
             
            }
            else
            {   if(tens>0&&fives>0)
                  {
                    twenty++;
                    tens--;
                    fives--;
                  }
                  else if(fives>2)
                  {
                    fives-=3;
                    twenty++;
                    
                  }
                  else
                  {
                    return false;
                  }

            }


i++;
         }
         return true;
        
    }
};