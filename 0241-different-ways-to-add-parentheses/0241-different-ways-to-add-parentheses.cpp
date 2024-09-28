class Solution {

public: vector<int>solve(string exp)
{
    vector<int>result; 
       
       
        for(int i = 0 ; i < exp.size() ; i++)
        {
            if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*')
            {
               vector<int>left  = solve(exp.substr(0,i));
           vector<int>right  = solve(exp.substr(i+1));

          for(int &x : left)
          {
            for(int &y : right)
            {
                if(exp[i]== '+')
                result.push_back(x+y);
                else if(exp[i]== '-')
                result.push_back(x-y);
                 else
                result.push_back(x*y);
            }
          }
            }
        }
        if (result.empty())
        {
            result.push_back(stoi(exp));
        }
        return result ;
}

public:
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};