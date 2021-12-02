#ifndef __LINEAR_LIST_H__
#define __LINEAR_LIST_H__
#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>
typedef int ElementType;
typedef struct LNode
{
    ElementType Data;
    struct LNode* Next;
}LNode;
typedef LNode* List;/* 定义LinkList */

int Length(List L);//线性表的长度
List FindKth(int K, List PtrL);//找到K序的节点
List Find(ElementType X, List PtrL);
List Insert(ElementType X, int i, List PtrL);//线性表插入一个元素
List Delete(int i, List PtrL);//删除节点i
void Display(List PtrL);
#endif