class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> list[int]:
        arr=[] 
        for num in range(left ,right+1):
            temp=num
            valid=True
            while temp>0:
                digit=temp%10
                if digit ==0 or num%digit!=0:
                    valid=False
                    break
                temp=temp//10
            if(valid):
                arr.append(num)
        return arr
        