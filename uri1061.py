entrada = input().split()
wi = int(entrada[1])

entrada = input().split()
xi = int(entrada[0])
yi = int(entrada[2])
zi = int(entrada[4])

entrada = input().split()
wf = int(entrada[1])

entrada = input().split()
xf = int(entrada[0])
yf = int(entrada[2])
zf = int(entrada[4])

#print(wi, xi, yi, zi)
#print(wf, xf, yf, zf)

dt = wf - wi
ht = mt = st = 0

if xf == xi:
    if yf > yi:
        mt = yf - yi
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    elif yf < yi:
        mt = 60 - (yi - yf)
        if ht == 0:
            dt -= 1
        else:
            ht -= 1
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    else:
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt = 59
            ht -= 1

elif xf > xi:
    ht = xf - xi
    if yf > yi:
        mt = yf - yi
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    elif yf < yi:
        mt = 60 - (yi - yf)
        ht -= 1
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    else:
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt = 59
            ht -= 1
else:
    ht = 24 - (xi - xf)
    dt -= 1
    if yf > yi:
        mt = yf - yi
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    elif yf < yi:
        mt = 60 - (yi - yf)
        ht -= 1
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt -= 1
    else:
        if zf > zi:
            st = zf - zi
        elif zf < zi:
            st = 60 - (zi - zf)
            mt = 59
            ht -= 1

print(dt, 'dia(s)')
print(ht, 'hora(s)')
print(mt, 'minuto(s)')
print(st, 'segundo(s)')