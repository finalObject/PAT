#!/usr/local/bin/python3
poly1 = str.split(input())
poly2 = str.split(input())

maxSize = 0
for index in range(int(poly1[0])):
    so = 2*index+1
    if maxSize<int(poly1[so]):
        maxSize = int(poly1[so])
for index in range(int(poly2[0])):
    so = 2*index+1
    if maxSize<int(poly2[so]):
        maxSize = int(poly2[so])
result = [0 for i in range(maxSize+1)]

for index in range(int(poly1[0])):
    so =int(2*index+1)
    result[int(poly1[so])]+=float(poly1[so+1])
for index in range(int(poly2[0])):
    so =int(2*index+1)
    result[int(poly2[so])]+=float(poly2[so+1])
#print(result)
for index in range(len(result)):
    if result[index]==0:
        maxSize-=1
print('%d' %(maxSize+1),end='')
for index in range(len(result)):
    loc = len(result)-index-1
    if result[loc]==0:
        continue
    print(' %d %.1f' %(loc,result[loc]),end='')
