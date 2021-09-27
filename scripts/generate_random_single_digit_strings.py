import sys
import random
import string

assert len(sys.argv) == 2, "Usages: ./generate_random_single_digit_strings.py N"

N = int(sys.argv[1])

for _ in range(N):
    print(random.choice(string.ascii_letters))
