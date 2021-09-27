import sys
import random
import math
import uuid

assert len(sys.argv) == 2, "Usages: ./generate_random_student_records.py N"

class Student:
    def __init__(self, stu_id, name):
        self.stu_id = stu_id
        self.name = name

N = int(sys.argv[1])

for _ in range(N):
    s = Student(stu_id=int(random.random() * N), name=str(uuid.uuid4()))

    print(f'%0{int(math.log(N, 10) + 0.5)}d %s' % (s.stu_id, s.name))
