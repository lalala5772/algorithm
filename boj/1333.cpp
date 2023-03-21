n,l,d=input().split()
n=int(n); l=int(l); d=int(d)

ls=[]
for i in range((l+5)*n):
    ls.append(0)
    
for i in range(n):
    t=(l+5)*i
    for j in range(t, t+l):
        ls[j]=1


result=0
while result<len(ls):
    if ls[result]!=1:
        break
    result+=d

print(result)
