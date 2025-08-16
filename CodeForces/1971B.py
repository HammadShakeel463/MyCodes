def ans(s):
    for i in range(len(s) -1 ):
        if s[i] != s[i+1]:
            temp = s[i]
            s[i] = s[i+1]
            s[i+1] = temp 
            print("YES") 
            print("".join(s))
            return  
    print("NO") 
    return 

t = int(input())

for i in range(t):
    s = input()
    ans(list(s)) 
    
            
