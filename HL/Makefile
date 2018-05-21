.PHONY: obj
obj: parser

lexer: HL.l
	flex -f -olex.yy.c HL.l
	gcc lex.yy.c -o lexer

parser: HL.l HL.y AST.h
	flex HL.l
	bison -d -v HL.y
	gcc  HL.tab.c -lfl -ly -o parser

.PHONY: clean
clean:
	-rm lex.yy.c lexer HL.c HL.tab.h HL.tab.c parser