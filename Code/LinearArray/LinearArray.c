#include "LinearArray.h"
List MakeEmpty()
{
    List ptrl = NULL;
    ptrl = (List)malloc(sizeof(struct LNode));
    ptrl->Last = -1;
    return ptrl;
}
int Length(List L)
{
    printf("list length is %d.", L->Last + 1);
    return L->Last+1;
}
bool isEmpty(List L)
{
    return L->Last == 0 ? true : false;
}
bool isFull(List L)
{
    return L->Last == MAXSIZE - 1 ? true : false;
}
void Insert(ElementType X,int i, List L)
{
    if (isFull(L)){
        printf("list is full.\n");
        return;
    }
    if (i < 1 || i > L->Last + 2){
        printf("insert index is illegal.\n");
        return;
    }
    for (int index = L->Last; index >= i - 1; index--){
        L->Data[index+1] = L->Data[index];
    }
    L->Data[i - 1] = X;        
    L->Last ++;
    return;
}
void Delete(int i, List L)
{
    if (isEmpty(L)){
        printf("list is empty.\n");
        return;
    }
    if (i < 1 || i > L->Last+1){
        printf("delete index is not exist.\n");
        return -1;
    }
    for (int index = i - 1; index <= L->Last; index++)
    {
        L->Data[index] = L->Data[index+1];
    }
    L->Last--;
    return;
}

ElementType Find(ElementType X, List L)
{
    if (isEmpty(L))
    {
        printf("list is empty.\n");
        return -1;
    }
    for (int index = 0; index <= L->Last; index++){
        if (L->Data[index] == X){
            return index;
        }
    }
    return -1;
}
ElementType FindKth(int K, List L)
{
    if (isEmpty(L)){
        printf("list is empty.\n");
        return -1;
    }
    if ( K < 1 ||K > L->Last+1){
        printf("find index is not exist.\n");
        return -1;
    }
    return L->Data[K - 1];
}
void Display(List L)
{
    for (int index = 0; index <= L->Last; index++){
        printf("%d ", L->Data[index]);
    }
    printf("\n");
}

int main(int argc, char**argv)
{
    List myList = MakeEmpty();
    for (int i = 0; i <= 9; i++)
    {
        Insert(i, i+1, myList);
    }
    Display(myList);
    Delete(5, myList);
    Display(myList);
    Insert(27, 8, myList);
    Display(myList);
    Insert(19, 100, myList);
    Length(myList);
    return 0;
}