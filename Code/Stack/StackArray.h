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

Stack CreateStack();//���ɿն�ջ������󳤶�ΪMaxsize
bool IsFull(Stack S);//�ж���ջS�Ƿ�����
bool IsEmpty(Stack S);//�ж϶�ջS�Ƿ�Ϊ��
void Push(Stack S, ElementType item);//��Ԫ��itemѹ���ջ
ElementType Pop(Stack S);//ɾ��������ջ��Ԫ��
void Display(Stack S);

#endif 
