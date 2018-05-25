.PHONY: obj
obj: parser

lexer: HL.flex AST.h HL.tab.h
	bison -d -v HL.y
	flex  HL.flex
	gcc -o lexer lex.yy.c

parser: HL.flex HL.y AST.h
	flex -f HL.flex
	bison -d -v HL.y
	gcc -g HL.tab.c -ly -o parser

test:
	./parser test.hl
.PHONY: clean
clean:
	-rm lex.yy.c lexer HL.output HL.tab.h HL.tab.c parser