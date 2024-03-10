'''Use Euclid's algorithm to find the greatest common divisor'''
def gcd(a: int, b: int) -> int:
    while b != 0:
        temp = b
        b = a % b
        a = temp
    return a

print(f'gcd(4, 10): {gcd(4, 10)}')
print(f'gcd(250, 100): {gcd(250, 100)}')
print(f'gcd(357, 234): {gcd(357, 234)}')
print(f'gcd(3918848, 1653264): {gcd(3918848, 1653264)}')