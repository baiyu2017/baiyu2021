#ifndef __STACK_LIST_H__
#define __STACK_LIST_H__
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef int ElementType;
typedef struct SNode
{
    ElementType Data;
    struct SNode*Next;
}SNode;
typedef SNode* Stack;

Stack CreateStack();//生成空堆栈，其最大长度为Maxsize
bool IsEmpty(Stack S);//判断堆栈S是否为空
void Push(Stack S, ElementType item);//将元素item压入堆栈
ElementType Pop(Stack S);//删除并返回栈顶元素
void Display(Stack S);
#endif