t = int(input())

for i in range(t):
    s = input() 
    ans = 1
    flag = False  
    for j in range(len(s)-1):
        ans += (s[j] != s[j+1])
        flag |= (s[j] == '0' and s[j+1] == '1')
    
    print(ans-flag)
         

