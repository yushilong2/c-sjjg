#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include<stdio.h>

#define SEQLIST_INIT_SIZE 8
typedef int ElemType;

typedef struct SeqList
{
	ElemType *base;
	int capacity;
	int size;
}SeqList;

void InitSeqlist(SeqList* list);

#endif // _SEQLIST_H_
