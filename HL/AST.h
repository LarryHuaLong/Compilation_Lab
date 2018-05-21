/*
*       抽象语法树（AST）要用到的声明
*/

typedef enum node_type
{
	PROGRAM = 258,
	CHAR,
	INT,
	FLOAT,
	BOOLTRUE,
	BOOLFALSE,
	IF,
	THEN,
	ELSE,
	WHILE,
	CONTINUE,
	BREAK,
	RETURN,
	SELFADD,
	SELFSUB,
	GE,
	LE,
	EQUAL,
	NOTEQUAL,
	ADDASSIGN,
	SUBASSIGN,
	MULASSIGN,
	DIVSASSIGN,
	SYMBOL,
	CHAR_CONST,
	INT_CONST,
	FLOAT_CONST,
	ID,
	INVAILDID,
	ERROR,
	ENDOFFILE
} node_type;

typedef struct Exp
{
	node_type kind;
	union {
		char type_id[33]; //由标识符生成的exp结点
		int type_int;	 //由常数生成的exp结点
		struct
		{
			struct Exp *pExp1;
			struct Exp *pExp2;
		} ptr; //有运算生成的exp结点
	};
} * PEXP;
