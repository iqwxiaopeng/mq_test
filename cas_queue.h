#ifndef LOCK_QUEUE_H
#define LOCK_QUEUE_H
#include <stdint.h>

struct message {
    struct message *next;
};

void qinit();
void qpush(struct message *m);
struct message* qpop();
#endif

