div = []

n = int(input())

for i in range(1,n+1):
    if n % i == 0:
        div.append(i)

for i in range(len(div)):
    print(div[i])