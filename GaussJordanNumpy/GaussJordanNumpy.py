#Noé Jaimes Avila
#En este caso utilicé el llenado elemento por elemento, con números enteros, de todas maneras
#este paso no se tomó en cuenta en la toma del tiempo, esta solo fue en el algoritmo de Gauss

import numpy as np
def intercambio(f1,f2,n,l):
    for i in range(0,n+1):
        temp=l[f1][i]
        l[f1][i] = l[f2][i]
        l[f2][i] = temp
    return l    
    
def llenar(Ec,l):      
    for i in range(0, Ec):
        for j in range(0, Ec+1):
            l[i][j]=float(np.random.randint(0,50))

    return l

n=int(input("Ecuaciones: "))
      
m = np.zeros((n,n+1),dtype="float")
#M=np.matrix(np.random.randint(1,50,(n,n+1)))
s = np.zeros(n,dtype="float")
M=np.zeros((n,n+1), dtype="float")
llenar(n,M)
print(M)
type(M)
import time
instanteInicial = time.time()

for i in range(n):
    if M[i][i] == 0:
        if i+1==n:
            intercambio(i,i-1,n,M)
        else:
            intercambio(i,i+1,n,M)
    for j in range(n):
        if i != j:
            if M[i][i]==0:
                sys.exit("El sistema no tiene solucion")
            else:
                aux = M[j][i]/M[i][i]

            for k in range(n+1):
                M[j][k] = M[j][k] - aux * M[i][k]


for i in range(n):
    if M[i][i]==0:
        sys.exit("El sistema no tiene solucion")
    else:
        s[i] = M[i][n]/M[i][i]

    
instanteFinal = time.time()
tiempo = (instanteFinal - instanteInicial)*1000
print("Tiempo: ",tiempo, "ms")
print("Solución")
for l in range(n):
    print("x"+str(l)+" =",s[l])
    
