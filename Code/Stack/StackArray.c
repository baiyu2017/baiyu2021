#include "StackArray.h"
Stack CreateStack()
{
    Stack temp = (Stack)malloc(sizeof(struct SNode));
    temp->Top = -1;
    return temp;
}
bool IsFull(Stack S)
{
    if (S->Top == MAXSIZE - 1){
        return true;
    }
    return false;
}
bool IsEmpty(Stack S)
{
    if (S->Top == -1){
        return true;
    }
    return false;
}
void Push(Stack S, ElementType item)
{
    if (IsFull(S,100)){
        printf("stack is full.\n");
        return;
    }
    S->Data[++(S->Top)] = item;
}

ElementType Pop(Stack S)
{
    if (IsEmpty(S)) {
        printf("stack is empty.\n");
        return 0;
    }
    return S->Data[(S->Top)--];
}
void Display(Stack S)
{
    while (!IsEmpty(S))
    {
        printf("%d ", Pop(S));
    }
    printf("\n");
}
int main(int argc, char**argv)
{
    Stack myStack = CreateStack(100);
    for (int i = 0; i < 10; i++){
        Push(myStack, i);
    }
    Display(myStack);
    return 0;
}