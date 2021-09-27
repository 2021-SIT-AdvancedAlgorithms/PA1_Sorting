all:
	gcc -o sort ./sort.c

test:
	./sort num < ./in/num1.txt > your_num1_out.txt
	cmp your_num1_out.txt ./out/num1.txt
	./sort str < ./in/str1.txt > your_str1_out.txt
	cmp your_str1_out.txt ./out/str1.txt
	./sort student < ./in/student1.txt > your_student1_out.txt
	cmp your_student1_out.txt ./out/student1.txt
