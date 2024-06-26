class Solution {
    public int countPrefixSuffixPairs(String[] words) {
        int c=0;
        for(int i=0;i<words.length-1;i++)
        {
            String a=words[i];
            int size=a.length();
            for(int k=i+1;k<words.length;k++)
            {
            String b=words[k];
            int cc=b.length()-size;
            if(cc<0) continue;
            int d=0;
            for(int j=0;j<size;j++)
            {
                if(a.charAt(j)==b.charAt(j) && a.charAt(j)==b.charAt(cc+j))
                d++;
            }
            if(d==size)
            c++;
            }
        }
        return c;
    }
}