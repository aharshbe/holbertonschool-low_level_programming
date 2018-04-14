def pal(i):
    return int(str(i)[::-1]) == i

max = 0
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        sum = i * j
        if pal(sum) and sum > max:
            max = sum

print(max)