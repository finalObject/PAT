#!/usr/local/bin/python3
import math
string1 = input()
num = str.split(string1)
num1 = int(num[0])
num2 = int(num[1])
sum = num1 + num2
if sum < 0:
    print('-',end='')
sum = str(abs(num1+num2))
lenStr = len(sum)
for index in range(lenStr):
    print(sum[index],end='')
    if (lenStr-index-1)%3==0 and lenStr-index-1!=0:
        print(',',end='')
        
