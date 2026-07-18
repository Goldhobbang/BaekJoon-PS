import sys
input = lambda: sys.stdin.readline().rstrip("\n")

pos = []

W, H, Q = map(int, input().split())
for i in range(H):
    pos.append(list(map(int, input().split())))
    
query = []
p = 1

for i in range(Q):
    query = list(map(int, input().split()))
    sum = 0
    for j in range(query[0] - 1, query[2]):
        for k in range(query[1] - 1, query[3]):
            sum += pos[j][k]
    if sum != 10 :
        p = 0
    else :
        for j in range(query[0] - 1, query[2]):
            for k in range(query[1] - 1, query[3]):
                pos[j][k] = 0
        
if p == 1:
    print("YES")
else :
    print("NO")