import math

side1 = 10.0
side2 = 10.0
side3 = 10.0

s = (side1 + side2 + side3) / 2.0

area = math.sqrt(s * (s - side1) * (s - side2) * (s - side3))

print("Area is:", area)



