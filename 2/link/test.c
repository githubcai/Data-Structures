#include "list.h"
#include <stdio.h>

int main(){
    int count = 100;
    List l;
    Position p;
    l = MakeEmpty(l);
    p = l;
    while(count--){
        Insert(count, l, p);
        p = p->Next;
    }

    p = l;
    while(p=Advance(p)){
        printf("%d\n", Retrieve(p));
    }
    
    DeleteList(l);
    return 0;
}
