#include "stackar.h"
#include <stdio.h>

int main(){
    Stack stack;
    stack = CreateStack(1000);
    int temp;
    for(temp=0;temp<100;temp++){
        Push(temp, stack);
    }
    while(!IsEmpty(stack)){
        printf("%d\n", TopAndPop(stack));
    }
    return 0;
}
