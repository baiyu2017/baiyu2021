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

Stack CreateStack();//���ɿն�ջ������󳤶�ΪMaxsize
bool IsEmpty(Stack S);//�ж϶�ջS�Ƿ�Ϊ��
void Push(Stack S, ElementType item);//��Ԫ��itemѹ���ջ
ElementType Pop(Stack S);//ɾ��������ջ��Ԫ��
void Display(Stack S);
#endif