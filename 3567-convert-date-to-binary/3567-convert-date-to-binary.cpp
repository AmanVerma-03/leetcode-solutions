class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4)) ;
        int month = stoi (date.substr(5,2)) ;
        int day = stoi(date.substr(8,2)) ;

        string yb = tob(year);
        string mb = tob(month);
        string db = tob(day) ;

        return yb + "-" + mb + "-" + db ;
    }
    private: 
    string tob(int num)
    {
        string binary = bitset<32>(num).to_string();

   
    size_t pos = binary.find('1');
    if (pos != string::npos) {
        return binary.substr(pos);
    }
    return "0";
    }
};