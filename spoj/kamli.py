t=10 
while t>0:
    t-=1
    s=raw_input()
    ctr=0
    for i in range(len(s)):
        if s[i]=='T' or s[i]=='D' or s[i]=='L' or s[i]=='F':
            ctr+=1
    print pow(2,ctr)
