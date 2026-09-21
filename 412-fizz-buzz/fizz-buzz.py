class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        num=([0] * (n+1))
        for i in range(1,n+1):
            if i%3==0 and i%5==0:
                num[i]="FizzBuzz"
            elif i%3==0:
                num[i]="Fizz"
            elif i%5==0:
                num[i]="Buzz"
            else:
                num[i]=str(i)
        return num[1:]