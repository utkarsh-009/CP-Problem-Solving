for _ in range(int(input())):
    n = int(input())
    i=2
    a=1
    b = n-1
    while i**2 <=n:
        if n%i==0:
            a = n//i
            b = n-a
            break
        i+=1
    print(a, b)