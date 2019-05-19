def maxNum(l,s):
    if l == 1:
        return s
    elif s < 10:
        return s * 10**(l-1)
    else:
        return (9 * 10**(l-1)) + maxNum(l-1,s-9)

def minNum(l,s):
    if l == 1:
        return s
    if s == 1:
        return minNum(l-1,1) * 10
    if s < 10:
        return s-1 + minNum(l-1,1) * 10
    return 9 + minNum(l-1,s-9) * 10

def foo(l,s):
    if s==0 and l == 1:
        return 0,0
    if s == 0 or s > l*9:
        return -1,-1
    mx = maxNum(l,s)
    mn = minNum(l,s)
    return mn,mx


if __name__ == '__main__':
    l,s = map(int,input().strip().split())
    mn, mx = foo(l,s) 
    print(mn,mx)
