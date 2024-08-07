class Solution:
    def numberToWords(self, num: int) -> str:
        ones=['Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine']
        if(num//10==0 and num<10):
            return ones[num%10]
        teens=['Ten','Eleven','Twelve','Thirteen','Fourteen','Fifteen','Sixteen','Seventeen','Eighteen','Nineteen']
        tens=['zero','Ten','Twenty','Thirty','Forty','Fifty','Sixty','Seventy','Eighty','Ninety']
        hundred='Hundred'
        more=['Thousand','Million','Billion']
        final=""
        for i in range(4):
            if(num==0):
                break
            count=0
            extra=0   
            ans=""  
            if(num//10==0 and num<10):
                ans=ones[num%10]+' '
                # print(ans)
                num=num//10
            while(count<3 and num>0):
                rem=num%10
                if(count==0 and rem!=0):
                    extra=rem
                elif(count==1 and rem==1):
                    ans=teens[extra]+' '+ans
                elif(count==1 and rem==0):
                    if(extra!=0):
                        ans=ones[extra]+' '+ans
                elif(count==1 and rem>0):
                    if(extra!=0):
                        ans=tens[rem]+' '+ones[extra]+' '+ans
                    else:
                        ans=tens[rem]+' '+ans
                elif(count==2 and rem>0):
                    ans=ones[rem]+' '+hundred+' '+ans
                count+=1
                num=num//10
            # print(ans)
            if(i>0):
                if(ans!=""):
                    final=ans+more[i-1]+' '+final
            else:
                final=ans
        # print(final)
        if(final[-1]!=' '):
            return final
        else:
            return final[0:len(final)-1]


