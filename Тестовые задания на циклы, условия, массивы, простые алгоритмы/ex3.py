def toTernary(num):
  string = ''
  for i in range(5):
    g = num // 3
    t = g * 3
    f = num - t

    if num > 2:
      num = num // 3
      string = str(f) + string
    else:
      string = str(f) + string
      return string

def toDecimal(num):
  result = 0
  lenth = len(num) - 1
  for i in range(len(num)):
    result += int(num[i]) * pow(3, lenth)
    lenth -= 1
  return result

n = int(input("Введите число от 0 до 200: "))
num = toTernary(n)

plusstring = ''
for i in range(len(num)):
  plusstring += num[i]
  plusstring += num[i]

tern = toDecimal(plusstring)
print("result = ", tern)
