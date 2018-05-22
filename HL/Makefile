.PHONY: obj
obj: parser

lexer: HL.l AST.h HL.tab.h
	bison -d -v HL.y
	flex -f HL.l
	gcc -o lexer lex.yy.c

parser: HL.l HL.y AST.h
	flex HL.l
	bison -d -v HL.y
	gcc -g HL.tab.c -ly -o parser

.PHONY: clean
clean:
	-rm lex.yy.c lexer HL.output HL.tab.h HL.tab.c parser