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
Queue CreatQueue();//生成长度为Maxsize的空队列
bool IsFull(Queue Q);//判断队列Q是否已满
bool isEmpty(Queue Q);//判断队列Q是否为空
void AddQ(Queue Q, ElementType item);//将数据元素item插入到队列Q中
ElementType DeleteQ(Queue Q);//将对头数据元素从队列中删除并返回
void Display(Queue Q);

#endif