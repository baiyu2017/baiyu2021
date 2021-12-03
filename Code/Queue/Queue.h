#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef int ElementType;
#define MAXSIZE 5
typedef struct QNode {
    ElementType Data[MAXSIZE];
    int rear;
    int front;
    int count;
}QNode;
typedef QNode* Queue;
Queue CreatQueue();//���ɳ���ΪMaxsize�Ŀն���
bool IsFull(Queue Q);//�ж϶���Q�Ƿ�����
bool isEmpty(Queue Q);//�ж϶���Q�Ƿ�Ϊ��
void AddQ(Queue Q, ElementType item);//������Ԫ��item���뵽����Q��
ElementType DeleteQ(Queue Q);//����ͷ����Ԫ�شӶ�����ɾ��������
void Display(Queue Q);

#endif