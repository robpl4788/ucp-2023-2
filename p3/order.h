#ifndef ORDER_H
#define ORDER_H

typedef void (*fptr)(int* a, int* b, int* c);

fptr ascOrDesc(char A_or_D);

void ascending2(int* p1, int* p2);
void ascending3(int* p1, int* p2, int*p3);

void descending2(int* pi, int* p2);
void descending3(int* pi, int* p2, int* p3);

#endif