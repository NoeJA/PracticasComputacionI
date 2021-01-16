#Método Gauss Jordan
def crearMa(Ec,l):
    for i in range(0,Ec):
        l.append([])
    for k in range(0,Ec):
        for m in range(0,Ec+1):
            l[k].append(0)
    return l

def crears(Ec,l):
    for i in range(0,Ec):
        l.append([])
    for k in range(0,Ec):
        for m in range(0,Ec+1):
            l[k].append(0)
    return l
    
def llenar(Ec,l):      
    for i in range(0, Ec):
        for j in range(0, Ec+1):
            l[i][j]=float(input("Introduce el elemento: "+ str(i)+","+str(j)))

    return l

def intercambio(f1,f2,n,l):
    for i in range(0,n+1):
        temp=l[f1][i]
        l[f1][i] = l[f2][i]
        l[f2][i] = temp
    return l

n=int(input("Introduce el número de ecuaciones"))

s=[]
M=[]
crearMa(n,M)
crears(n,s)
llenar(n, M)



for i in range(n):
    if M[i][i] == 0:
            intercambio(i,i+1,n,M)
    for j in range(n):
        if i != j:
            if M[i][i]==0:
                intercambio(i,i+1,n,M)
            aux = M[j][i]/M[i][i]

            for k in range(n+1):
                M[j][k] = M[j][k] - aux * M[i][k]


for i in range(n):
    s[i] = M[i][n]/M[i][i]
    
print("Solución")
for l in range(n):
    print("x"+str(l)+" =",s[l])
