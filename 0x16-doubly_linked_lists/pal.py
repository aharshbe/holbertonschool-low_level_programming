#!/usr/bin/python3

def pal(i):
    return int(str(i)[::-1]) == i

max = 0
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        sum = i * j
        if pal(sum) and sum > max:
            max = sum
fd = open('102-result', 'w')
fd.write(str(max))
fd.close()