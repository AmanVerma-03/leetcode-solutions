class Solution {
    public int countSeniors(String[] details) {
        int count1 = 0 ;
        for(String detail:details)
        {
            String age = detail.substring(11,13);
            int age1 = Integer.parseInt(age);
            if(age1>60)
            count1++ ;
        }
        return count1 ;
    }
}