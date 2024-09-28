class Solution {


    public :

        string invert(string s)
        {
            for(int i = 0 ; i<s.size() ; i++)
            {
                if(s[i]=='0')
                s[i]='1';
                else
                s[i]='0' ;
            }
            return s ;
        }
        string reverse(string s)
        {
           int i = 0 ; 
           int j = s.length()-1 ;
           while(i<=j)
           {
            swap(s[i],s[j]) ;
            i++ ;
            j-- ;
           }
           return s ;
        }
        string findvalue(int n , string s)
        {
            if(n==1)
            return s + "0";
            string temp1 = findvalue(n-1,s);
            string temp2 = invert(temp1);
            string temp3 = reverse(temp2) ;
            return temp1 + "1" + temp3 ;
        

        }
    
public:
    char findKthBit(int n, int k) {
        string s = findvalue(n,"");
        return s[k-1];
    }
};