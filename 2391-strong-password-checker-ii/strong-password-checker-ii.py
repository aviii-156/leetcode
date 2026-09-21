class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:
        if len(password)<8:
            return False
        special ="!@#$%^&*()-+"
        lower=False
        upper =False 
        digit=False
        special_char=False
        
        for i in range(len(password)):
            if i>0 and password[i]==password[i-1]:
                return False
            if password[i].islower():
                lower= True
            if password[i].isupper():
                upper = True
            if password[i].isdigit():
                digit= True
            if password[i] in special:
                special_char=True
        return lower and digit and upper and special_char 
            
