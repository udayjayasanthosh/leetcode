class Solution {
    public int countSeniors(String[] details) {
        int count=0;
        for(int i=0;i<details.length;i++)
        {
            
            int b=details[i].charAt(11)-'0';
            b=(b*10)+(details[i].charAt(12)-'0');
            if(b>60)
            count+=1;
        }
        return count;
    }
}