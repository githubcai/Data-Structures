#ifndef _QUEUE_H
#define _QUEUE_H

struct QueueRecord;
typedef struct QueueRecord *Queue;
typedef int ElementType;
struct QueueRecord{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *
};

#endif
