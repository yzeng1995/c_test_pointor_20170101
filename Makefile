main.out:main.o
	gcc  $^ -o $@ -lm
main.o:main.c
	gcc -c -Wall $^ -o $@

#func.o:func.h
#func.o:func.c
#	gcc -c -Wall $< -o $@
clean:
	@echo "clean all objective files"
	-rm *.o main
	@echo "clean objective finished"
diskclean:
	@echo "clean all files EXCEPT source code"
	-rm *.o main result
	@echo "clean all file finished"
gdb:
	@echo "start debug"
	@-rm result
	gcc -g main.c func.c -o result -lm
	gdb ./result
.PHONY:clean gdb diskclean
