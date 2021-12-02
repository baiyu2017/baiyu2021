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
typedef LNode* List;/* ����LinkList */

int Length(List L);//���Ա�ĳ���
List FindKth(int K, List PtrL);//�ҵ�K��Ľڵ�
List Find(ElementType X, List PtrL);
List Insert(ElementType X, int i, List PtrL);//���Ա����һ��Ԫ��
List Delete(int i, List PtrL);//ɾ���ڵ�i
void Display(List PtrL);
#endif