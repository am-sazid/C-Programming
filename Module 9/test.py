# method 1
a = 10
b = 20
tmp = a

a = b
b = tmp

print(f" A = {a}\n B = {b}")

# method 2

c = 10
d = 20

c,d = d,c

print(f" C = {c}\n D = {d}")