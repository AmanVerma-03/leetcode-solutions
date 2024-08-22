class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxcandies =  0 ;
        for(int c : candies)
        {
            maxcandies = Math.max(maxcandies,c);
        }
        List<Boolean>ans = new ArrayList<>();
        for(int candy : candies)
        {
            if(candy + extraCandies >= maxcandies)
            ans.add(true);
            else
            ans.add(false);
        }
        return ans ;
    }
}