Build:code test
code:codeb
test:testb
codeb:
	gcc code.c inc/func.h inc/header.h -Iinc

testb:
	gcc test/test.c  inc/header.h unity/unity.c -Iinc -Iunity -o test.out

    
run: run-code run-test
run-code:
	./a.out
run-test:
	./test.out       

