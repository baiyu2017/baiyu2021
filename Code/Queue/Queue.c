#include "Queue.h"
Queue CreatQueue()
{
    Queue temp = (Queue)malloc(sizeof(QNode));
    temp->front = 0;
    temp->rear = 0;
    temp->count = 0;
    return temp;
}
bool IsFull(Queue Q)
{
    return (Q->count == MAXSIZE);
}
bool IsEmpty(Queue Q)
{
    return (Q->count == 0);
}
void AddQ(Queue Q, ElementType item)
{
    if(IsFull(Q)){
        printf("queue is full.\n");
        return;
    }
    Q->Data[Q->rear] = item;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    Q->count++;
}
ElementType DeleteQ(Queue Q)
{
    if (IsEmpty(Q)) {
        printf("queue is empty.\n");
        return 0;
    }
    ElementType firstData = Q->Data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    Q->count--;
    return firstData;
}
void Display(Queue Q)
{
    while (!IsEmpty(Q))
    {
        printf("%d ", DeleteQ(Q));
    }
    printf("\n");
}
int main(int argc, char**argv) 
{
    Queue myQueue = CreatQueue();
    for (int i = 0; i < 10; i++) {
        AddQ(myQueue, i);
    }
    Display(myQueue);
    for (int i = 100; i < 105; i++) {
        AddQ(myQueue, i);
    }
    Display(myQueue);
    return 0;
}
