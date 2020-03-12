continua = True

while continua:
    controla_nota = True
    while controla_nota:
        nota1 = float(input())
        if nota1 < 0.0 or nota1 > 10.0:
            print("nota invalida")
        else:
            controla_nota = False
    controla_nota = True
    while controla_nota:
        nota2 = float(input())
        if nota2 < 0.0 or nota2 > 10.0:
            print("nota invalida")
        else:
            controla_nota = False
    print("media = {:.2f}".format((nota1+nota2)/2))
    controla_met = True
    while controla_met:
        print("novo calculo (1-sim 2-nao)")
        met = int(input())
        if met < 1 or met > 2:
            pass
        elif met == 1 :
            controla_met = False
        elif met == 2 :
            controla_met = False
            continua = False

