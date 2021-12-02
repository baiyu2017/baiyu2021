#include "LinearList.h"
int Length(List L)
{
    int length = 0;
    while (L){
        L = L->Next;
        length++;
    }
    return length;
}
List FindKth(int K, List PtrL)
{
    List p = PtrL;
    int i = 1;
    while (p != NULL && i < K) {//�˴���Ҫע��
        p = p->Next;
        i++;
    }
    if (i == K) {
        return p;
    }
    else {
        return NULL;
    }
}
List Find(ElementType X, List PtrL)
{
    List p = PtrL;
    while(p!=NULL && p->Data!=X){
        p = p->Next;
    }
    return p;
}
List Insert(ElementType X, int i, List PtrL)
{
    List p, s;
    if (i == 1) { //���뵽��һ���ڵ�ǰ
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = PtrL;
        return s;
    }
    p = FindKth(i - 1,PtrL);//�����ҵ���i-1��λ��
    if (p == NULL) {
        printf("insert position error.");
        return NULL;
    }
    else {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }   
}
List Delete(int i, List PtrL)
{
    List p, s;
    if (i == 1) {//ɾ����һ���ڵ�
        s = PtrL;
        if (PtrL != NULL) {
            PtrL = PtrL->Next;
        }
        else {
            return NULL;
        }
        free(s);
        return PtrL;
    }
    p = FindKth(i - 1, PtrL);//�����ҵ���i-1��λ��
    if (p == NULL) {
        printf("delete pre position is error.\n");
        return NULL;
    }
    else if (p->Next == NULL) {//�ж�ɾ����i�ڵ��Ƿ����
        printf("delete position is error.\n");
        return NULL;
    }
    else {//i�ڵ����
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return PtrL;
    }
}
void Display(List PtrL)
{
    List p = PtrL;
    while (p!=NULL)//���ж��ý��Ƿ�Ϊ��
    {
        printf("%d ", p->Data);
        p = p->Next;
    }
    printf("\n");
}

int main(int argc, char**argv)
{
    List MyList = NULL;
    for (int i = 0; i < 10; i++)
    {
        MyList = Insert(i, i+1, MyList);
    }
    Display(MyList);
    printf("length is %d\n", Length(MyList));
    Delete(7, MyList);
    Display(MyList);
    printf("length is %d\n", Length(MyList));
    return 0;
}