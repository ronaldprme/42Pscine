CO = ./c07
EX0 = ./ex00/
EX1 = ./ex01/
EX2 = ./ex02/
EX3 = ./ex03/
OUT = a.out

all:
	echo "compilando todos os programas!"
run:
	cc -Wall -Wextra -Werror $(EX0)*.c -o $(EX0)$(OUT)
	cc -Wall -Wextra -Werror $(EX1)*.c -o $(EX1)$(OUT)
	cc -Wall -Wextra -Werror $(EX2)*.c -o $(EX2)$(OUT)
	cc -Wall -Wextra -Werror $(EX3)*.c -o $(EX3)$(OUT)

clean:
	rm $(EX0)$(OUT)
	rm $(EX1)$(OUT)
	rm $(EX2)$(OUT)
	rm $(EX3)$(OUT)