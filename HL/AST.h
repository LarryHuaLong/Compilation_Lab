/*
*       抽象语法树（AST）要用到的声明
*/

typedef enum node_t
{
    ID_NODE,
    INT_NODE,
    LPRP_NODE,
    PLUS_NODE,
    MINUS_NODE,
    STAR_NODE,
    DIV_NODE,
    UMINUS_NODE
}node_t;

typedef struct Exp
{
	node_t kind;
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

