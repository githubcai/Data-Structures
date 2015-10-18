#ifndef _STACKAR_H
#define _STACK_H

struct StackRecord;
typedef struct StackRecord *Stack;
typedef int ElementType;
struct StackRecord{
    int Capacity;
    int TopOfStack;
    ElementType *Array;
};

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void DisposeStack(Stack S);
void Push(ElementType X, Stack S);
void MakeEmpty(Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);

#endif
