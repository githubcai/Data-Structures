#include "stackli.h"
#include <stdio.h>

int main(){
    int temp;
    Stack stack;
    stack = CreateStack();
    for(temp=0;temp<100;temp++){
        Push(temp, stack);
    }
    while(!IsEmpty(stack)){
        printf("%d\n", Top(stack));
        Pop(stack);
    }

    return 0;
}
