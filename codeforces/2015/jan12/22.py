n=input()
d={}
for i in range(n):
    a=raw_input()
    b=raw_input()
    f=0
    for j in d:
        if a==d[j]:
            d[j]=b
            f=1
    if f==0:
        d[a]=b
print len(d)
for i in d:
    print i+' '+d[i]
