n=input()
d={}
for i in range(n):
    a=raw_input()
    b=raw_input()
    f=0
    if a in d.values():
        for i in d.iterkeys():
            if i==a:
                d[a]=b   #update the original key's value
    else:
        d[a]=b

print len(d)
for i in d:
    print i+' '+d[i]
