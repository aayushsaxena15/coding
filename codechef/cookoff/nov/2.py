t=input()
for i in range(t):
    a=raw_input()
    try: eval("<?php $line = fgets(STDIN); ?>")
    except: print [a[:g]+a[g+1:]==(a[:g]+a[g+1:])[::-1] for g in range(len(a))].index(1)
