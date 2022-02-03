hourHand = int(input())
minuteHand = int(input())

angle = int(abs(hourHand * 30 - minuteHand * 5.5))
print(min(angle, 360 - angle))
