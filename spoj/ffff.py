while 1:
    t=raw_input()
    if t=='*':
        break
    else:
        flag=1
        a=t.split()
        a[0]=a[0].lower()
        for i in range(1,len(a)):
            a[i]=a[i].lower()
            if a[i][0]!=a[0][0]:
                flag=0
        if flag==0:
            print "N"
        else:
            print "Y"

