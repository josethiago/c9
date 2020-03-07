entrada = input().split()

A, B, C = sorted(list(map(float, entrada)), reverse=True)

if A>= (B+C):
    print('NAO FORMA TRIANGULO')
elif A**2 == (B**2 + C**2):
    print('TRIANGULO RETANGULO')
elif A**2 > (B**2 + C**2):
    print('TRIANGULO OBTUSANGULO')
elif A**2 < (B**2 + C**2):
    print('TRIANGULO ACUTANGULO')

if A == B == C:
    print('TRIANGULO EQUILATERO')
elif A == B or B == C or A == C:
    print('TRIANGULO ISOSCELES')

