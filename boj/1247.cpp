import sys
input=sys.stdin.readline

for i in range(3):
    sum=0
    n=int(input())
    for i in range(n):
        sum+=int(input())

    if sum>0: print('+')
    elif sum==0: print(0)
    else: print('-')
