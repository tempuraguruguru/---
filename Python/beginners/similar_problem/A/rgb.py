r, g, b = map(int, input().split())
print("YES") if (100*r + 10*g + b) % 4 == 0 else print("NO")