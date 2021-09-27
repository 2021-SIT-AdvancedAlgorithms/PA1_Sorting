import sys
import random

assert len(sys.argv) == 2, "Usages: ./generate_random_numbers.py N"

N = int(sys.argv[1])

for _ in range(N):
    print(int(random.random() * N))
