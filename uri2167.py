n = int(input())

rotacoes = list(map(int, input().split()))
aux = 0
queda = 0

for i in range(n):
    if aux > rotacoes[i]:
        queda = i+1
        #print("quebrou ", aux, rotacoes[i])
        break
    else:
        aux = rotacoes[i]

print(queda)