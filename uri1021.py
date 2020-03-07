entrada = float(input())
nem = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01]
troco = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
x = 0
while x <=11 :
    if entrada < 0.01:
        entrada = entrada
    if entrada % nem[x] == 0:
        troco[x] = int(entrada//nem[x])
        entrada -= nem[x] * troco[x]
        entrada = round(entrada, 2)
    elif (entrada > nem[x] and entrada % nem[x] != 0):
        troco[x] = int(entrada//nem[x])
        entrada -= nem[x] * troco[x]
        entrada = round(entrada, 2)
    x+=1
if(entrada != 0):
    troco[11] += 1
print('NOTAS:')
for x in range(0,6):
    print ("{} nota(s) de R$ {:.2f}".format(troco[x], nem[x]))
print('MOEDAS:')
for x in range(6,12):
    print ("{} moeda(s) de R$ {:.2f}".format(troco[x], nem[x]))
