arr = input().split()

a, b, c, d = list(map(int,arr))

horas = min = 0

if a == c:
    if b == d:
        horas = 24
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
    elif d > b:
        min = d-b
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
    else:
        horas = 23
        min = 60 - (b - d)
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
elif c > a:
    horas = (c - a)
    if d > b:
        min = (d - b)
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
    elif d < b:
        min = 60 - (b - d)
        horas -= 1
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
    else:
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
else:
    horas = 24 - (a - c)
    if d > b:
        min = (d - b)
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
    elif d < b:
        min = 60 - (b - d)
        horas -= 1
        print ('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(horas, min))
