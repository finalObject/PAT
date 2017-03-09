#!/usr/local/bin/python3
tmpList = str.split(input())

tmp = list(map(int,tmpList))
numOfCity = tmp[0]
numOfRoad = tmp[1]
start = tmp[2]
target = tmp[3]

teams = list(map(int,str.split(input())))

roads = [list(map(int,str.split(input()))) for _ in range(numOfRoad)]

class City:
    def __init__(self,id,teams):
        self.id = id
        self.teams = teams
        self.con = []
    def addCon(self,newCity,len):
        self.con.append((newCity,len))
    def display(self):
        print('this is No.%d City,%d Cons,%d teams' %(self.id,len(self.con),self.teams))
        for city,dis in self.con:
            print('  No.%d,dis=%d' %(city.id,dis))
# init cities
cities = []
for n in range(numOfCity):
    cities.append(City(n,teams[n]))


#add roads
for n in range(numOfRoad):
    city1 = roads[n][0]
    city2 = roads[n][1]
    dis = roads[n][2]
    cities[city1].addCon(cities[city2],dis)
    cities[city2].addCon(cities[city1],dis)

print('size is %d' %len(cities))
for n in cities:
    n.display()


    # 初始化路径list，最小距离路径的数量以及最大救援队的数量
    # 从起点路径开始走，遍历Con，走下去，
    # 特别判断，已经走过的路就不走了
    # 一条路走完返回是否抵达终点，抵达的话返回距离和救援队数量
    
