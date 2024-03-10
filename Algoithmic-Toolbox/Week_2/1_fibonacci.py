def fib(n: int) -> int:
    lst = [0,1]
    if n <= 1:
        return 1
    for i in range(2, n+1):
        lst.append(lst[i-1] + lst[i-2])
    return lst[-1]

print(f'Fib(1): {fib(1)}')
print(f'Fib(5): {fib(5)}')
print(f'Fib(20): {fib(20)}')
print(f'Fib(100): {fib(100)}')