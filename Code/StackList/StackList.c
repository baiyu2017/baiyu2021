#include "StackList.h"
Stack CreateStack()
{
    Stack temp = (Stack)malloc(sizeof(struct SNode));
    temp->Next = NULL;
    return temp;
}
bool IsEmpty(Stack S)
{
    return (S->Next == NULL);
}
void Push(Stack S, ElementType item)
{
    Stack temp = (Stack)malloc(sizeof(struct SNode));
    temp->Data = item;
    temp->Next = S->Next;
    S->Next = temp;
}
ElementType Pop(Stack S)
{
    Stack firstCell;
    ElementType topItem;
    if (IsEmpty(S)) {
        return 0;
    }
    firstCell = S->Next;
    S->Next = firstCell->Next;
    topItem = firstCell->Data;
    free(firstCell);
    return topItem;
}
void Display(Stack S)
{
    while (!IsEmpty(S)) {
        printf("%d ", Pop(S));
    }
    printf("\n");
}
int main(int argc, char**argv)
{
    Stack myStack = CreateStack();
    for (int i = 0; i < 10; i++) {
        Push(myStack, i);
    }
    Display(myStack);
    return 0;
}