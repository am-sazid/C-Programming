# # method 1
# a = 10
# b = 20
# tmp = a

# a = b
# b = tmp

# print(f" A = {a}\n B = {b}")

# # method 2

# c = 10
# d = 20

# c,d = d,c

# print(f" C = {c}\n D = {d}")


# n = int(input())
# a = {}
# for i in n:
#     a += int(input())

# print(a)



n = int(input("Enter number of elements: "))
a = []   # list initialization

for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    a.append(val)

print("Array:", a)

# Python equivalent of your C code with dynamic size array

n = int(input())       # input for array size
a = [0] * n            # create a list of size n

# Input elements
for i in range(n):
    a[i] = int(input())

# Output elements
for i in range(n):
    print(a[i], end=" ")
