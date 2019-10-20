L,R=map(int,input().split())
A=list(map(int,input().split()))
S=list(map(int,input().split()))

S.sort()

n=0
m=0
T=[]
while(n<L or m<R):
    if(n<L and m<R):
        if(A[n]<S[m]):
            T+=[A[n]]
            n+=1
        else:
            T+=[S[m]]
            m+=1
    elif(n<L and m==R):
        T+=[A[n]]
        n+=1
    else:
        T+=[S[m]]
        m+=1
for i in T:
    print(i,end=' ')
