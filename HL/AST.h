/*
*       抽象语法树（AST）要用到的声明
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

extern void yyerror(char *s, ...); /*  defined below; called for each parse error */

/* 结点结构体定义 */
typedef struct ASTnode
{
	char nodetype; ///'N'表示非终结符中间结点,'D'表示ID,'C'表示CHAR,'I'表示INT,'F'表示FLOAT,'S'表示STRING
	union {
		char type_id[33];	  //由标识符生成的exp叶子结点
		char type_char;		   //由CHAR_CONST生成的exp叶子结点
		int type_bool;		   //由BOOL生成的exp叶子结点
		int type_int;		   //由INT_CONST生成的exp叶子结点
		float type_float;	  //由FLOAT_CONST生成的exp叶子结点
		char type_string[100]; //由STRING_CONST生成的exp叶子结点
		struct
		{
			char summary[80]; ///简要说明是哪种非终结符
			struct ASTnode *node1;
			struct ASTnode *node2;
			struct ASTnode *node3;
		} nodes; //中间结点
	};
} ASTnode;

/* 构建AST的函数 */
ASTnode *newAST(int nodetype, void *nodeval, ASTnode *node1, ASTnode *node2, ASTnode *node3)
{
	ASTnode *ast = (ASTnode *)malloc(sizeof(ASTnode));
	if (!ast)
	{
		yyerror("out of space");
		exit(0);
	}
	ast->nodetype = nodetype;
	switch (ast->nodetype)
	{
	case 'D':
		strcpy(ast->type_id, (char *)nodeval);
		break;
	case 'C':
		ast->type_char = *((char *)nodeval);
		break;
	case 'I':
		ast->type_int = *((int *)nodeval);
		break;
	case 'F':
		ast->type_float = *((float *)nodeval);
		break;
	case 'S':
		strcpy(ast->type_string, (char *)nodeval);
		break;
	case 'N':
		strcpy(ast->nodes.summary, (char *)nodeval);
		ast->nodes.node1 = node1;
		ast->nodes.node2 = node2;
		ast->nodes.node3 = node3;
		break;
	default:
		printf("wrong nodetype！\n");
		break;
	}
	return (ASTnode *)ast;
}

/* display an AST */
void displayAST(ASTnode *ast, int level)
{

	switch (ast->nodetype)
	{
	case 'D':
		printf("%*cID: \"%s\"\n", level, ' ', ast->type_id);
		break;
	case 'C':
		printf("%*cCHAR: \'%c\'\n", level, ' ', ast->type_char);
		break;
	case 'I':
		printf("%*cINT: %d\n", level, ' ', ast->type_int);
		break;
	case 'F':
		printf("%*cFLOAT: %f\n", level, ' ', ast->type_float);
		break;
	case 'S':
		printf("%*cSTRING: \"%s\"\n", level, ' ', ast->type_string);
		break;
	case 'N':
		printf("%*cSUMMARY: \"%s\"\n", level, ' ', ast->nodes.summary);
		if (ast->nodes.node1)
			displayAST(ast->nodes.node1, level + 5);
		if (ast->nodes.node2)
			displayAST(ast->nodes.node2, level + 5);
		if (ast->nodes.node3)
			displayAST(ast->nodes.node3, level + 5);
		break;
	default:
		printf("wrong nodetpye!\n");
		break;
	}
}

/* delete and free an AST */
void treefree(ASTnode *a)
{
	if (a->nodetype == 'N')
	{
		if (a->nodes.node1)
			treefree(a->nodes.node1);
		if (a->nodes.node2)
			treefree(a->nodes.node2);
		if (a->nodes.node3)
			treefree(a->nodes.node3);
	}
	else if (a->nodetype == 'T')
		free(a);
	else
		printf("error node!\n");
}