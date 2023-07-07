point = 0

for i in range(10):
    num = int(input())
    if num == 1:
        point += 90
    if num == 2:
        point += 180
    if num == 3:
        point -= 90

result = point % 360

if result == 0:
    print("N")
if result == 90:
    print("E")
if result == 180:
    print("S")
if result == 270:
    print("W")