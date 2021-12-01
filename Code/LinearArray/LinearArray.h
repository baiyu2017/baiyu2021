#ifndef _LINEAR_ARRAY_H_
#define _LINEAR_ARRAY_H_
#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>
#define MAXSIZE 100
typedef  int ElementType;
typedef struct LNode {
    ElementType Data[MAXSIZE];
    int Last;
}*List;
List MakeEmpty();//初始化一个空线性表L
ElementType FindKth(int K, List L);//根据位序K，返回相应元素
int Find(ElementType X, List L);//在线性表L中查找X的第一次出现位置；
void Insert(ElementType X, int i, List L);//在位序i前插入一个新元素X；
void Delete(int i, List L);//删除指定位序i的元素
int Length(List L);//返回线性表L的长度
bool isFull(List L);//线性表L是否满
bool isEmpty(List L);//线性表是为空
#endif