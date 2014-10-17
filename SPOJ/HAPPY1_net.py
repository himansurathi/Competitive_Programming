Squares = dict([(m, int(m)**2) for m in "0123456789"])
def is_happy(n):
  s = []
  count=0
  while n not in s:
      if n==1:
          return count
      s.append(n) 
      n = sum(Squares[digits] for digits in str(n))
      count +=1
  return -1
print is_happy(input())
