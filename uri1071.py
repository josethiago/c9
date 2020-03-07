x = int(input())
y = int(input())

somador = 0

if x == y:
    print(0)
elif x < y:
    while x < y:
        x+=1
        #print('$ ', somador, ' $ ', x)
        if x % 2 != 0 and x < y:
            somador += x
            #print('if')

else:
    while x > y:
        y += 1
        #print('* ', somador, ' * ', y)
        if y % 2 != 0 and x > y:
            somador += y
            #print('of')

print (somador)
