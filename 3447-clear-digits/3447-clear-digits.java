class Solution {
    public String clearDigits(String s) {
        StringBuilder sb = new StringBuilder() ;
        for(char a : s.toCharArray())
        {
            if(Character.isDigit(a))
            {
                if(sb.length() > 0)
                sb.deleteCharAt(sb.length()-1);
            }
            else
            sb.append(a) ;
        }
        return sb.toString();
    }
}