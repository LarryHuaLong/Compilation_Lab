test: parser
	./parser test.hl
	
parser: HL.l HL.y AST.h
	flex -f HL.l
	bison -d -v HL.y
	gcc -g HL.tab.c -ly -o parser

.PHONY: clean
clean:
	-rm lex.yy.c HL.output HL.tab.h HL.tab.c parser