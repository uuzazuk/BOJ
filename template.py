import sys

T = int(sys.stdin.readline().rstrip())

i = 0
while i < T:
    i += 1
    x, y = map(int, sys.stdin.readline().rstrip().split())
    print(x + y)