Build:code test
code:code.out
test:test.out
code.out:
	gcc code.c inc/func.h inc/header.h -Iinc

test.out:
	gcc test/test.c  inc/header.h unity/unity.c -Iinc -Iunity -o test.out

clean: clean-code clean-test
    
run: run-code run-test
run-code:
	./a.out
run-test:
	./test.out       

