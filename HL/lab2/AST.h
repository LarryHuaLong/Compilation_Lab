
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

/*called for each parse error */
extern void yyerror(char *s, ...);

/* 结点结构体定义 */
typedef struct ASTnode
{
    char nodetype; //'E'--表达式,'N'--非终结符中间结点,'D'--ID,'C'--CHAR,'I'--INT,'F'--FLOAT,'S'--STRING
    union {
        char type_id[33];      //由标识符生成的exp叶子结点
        char type_char;        //由CHAR_CONST生成的exp叶子结点
        int type_bool;         //由BOOL生成的exp叶子结点
        int type_int;          //由INT_CONST生成的exp叶子结点
        float type_float;      //由FLOAT_CONST生成的exp叶子结点
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
    case 'E':
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
int displayAST(ASTnode *ast, int level)
{
    int count1 = 0, count2 = 0, count3 = 0;
    switch (ast->nodetype)
    {
    case 'D':
        printf("\033[32mID\033[0m: \"%s\"\n", ast->type_id);
        break;
    case 'C':
        printf("\033[32mCHAR\033[0m: \'%c\'\n", ast->type_char);
        break;
    case 'I':
        printf("\033[32mINT\033[0m: %d\n", ast->type_int);
        break;
    case 'F':
        printf("\033[32mFLOAT\033[0m: %f\n", ast->type_float);
        break;
    case 'S':
        printf("\033[32mSTRING\033[0m: \"%s\"\n", ast->type_string);
        break;
    case 'E':
    case 'N':
        if (ast->nodetype == 'E')
            printf("\033[32mEXP\033[0m: \"%s\"\n", ast->nodes.summary);
        else
            printf("\033[32mSTMTS\033[0m: \"%s\"\n", ast->nodes.summary);
        if (ast->nodes.node1)
        {
            for (int i = 0; i < level; i++)
                printf("|    ");
            printf("`----");
            count1 += displayAST(ast->nodes.node1, level + 1);
        }
        if (ast->nodes.node2)
        {
            for (int i = 0; i < level; i++)
                printf("|    ");
            printf("`----");
            count2 += displayAST(ast->nodes.node2, level + 1);
        }
        if (ast->nodes.node3)
        {
            for (int i = 0; i < level; i++)
                printf("|    ");
            printf("`----");
            count3 += displayAST(ast->nodes.node3, level + 1);
        }
        break;
    default:
        printf("wrong nodetpye!\n");
        break;
    }
    return count1 + count2 + count3 + 1;
}

/* delete and free an AST */
void treefree(ASTnode *a)
{
    if (!a)
        return;
    if (a->nodetype == 'N')
    {
        if (a->nodes.node1)
            treefree(a->nodes.node1);
        if (a->nodes.node2)
            treefree(a->nodes.node2);
        if (a->nodes.node3)
            treefree(a->nodes.node3);
    }
    else
        free(a);
}
