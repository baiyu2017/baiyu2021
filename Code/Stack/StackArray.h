#ifndef __STACK_ARRAY_H__
#define __STACK_ARRAY_H__
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef int ElementType;
#define MAXSIZE 100
struct SNode
{
    ElementType Data[MAXSIZE];
    int Top;
}; 
typedef struct SNode* Stack;

Stack CreateStack();//生成空堆栈，其最大长度为Maxsize
bool IsFull(Stack S);//判读堆栈S是否已满
bool IsEmpty(Stack S);//判断堆栈S是否为空
void Push(Stack S, ElementType item);//将元素item压入堆栈
ElementType Pop(Stack S);//删除并返回栈顶元素
void Display(Stack S);

#endif 
