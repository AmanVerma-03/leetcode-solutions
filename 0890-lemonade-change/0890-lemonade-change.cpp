class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five  = 0 ;
        int ten = 0 ;
        int n = bills.size() ;
        for(int  i = 0 ; i < n ; i++)
        {
            if(bills[i]==5)
            five++ ;
            else if (bills[i] == 10)
            {
               ten++ ;
               if (five > 0)
               {
                 five-- ;
                 continue ;
               }
               return false ;

            }
            else
            {
                if(five > 0 && ten > 0)
                {
                    five-- ;
                    ten-- ;
                    continue ;
                }
                else if (five >=3 )
                {
                    five-=3 ;
                    continue ;
                }
                return false ;
            }
        }
        return true ;
    }
};