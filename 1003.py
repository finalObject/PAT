#!/usr/local/bin/python3
tmpList = str.split(input())
print(tmpList)
tmp = list(map(int,tmpList))
numOfCity = tmp[0]
numOfRoad = tmp[1]
start = tmp[2]
target = tmp[3]

teams = list(map(int,str.split(input())))

roads = [list(map(int,str.split(input()))) for _ in range(numOfRoad)]


