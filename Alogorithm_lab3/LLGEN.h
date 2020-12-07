//
// Created by 89252 on 2020/11/30.
//

#ifndef ALGORITHM_LAB2_LLGEN_H
#define ALGORITHM_LAB2_LLGEN_H

//链表结点
struct Node {
    struct Node *prev;  /* link to previous node */
    struct Node *next;  /* link to next node */
    //生成数据结点指针
    void *pdata; /* generic pointer to data */
};

typedef struct Node *Link;


/* a linked list data structure */
struct List {
    Link LHead;
    Link LTail;
    unsigned int LCount;

    //函数指针
    void *( *LCreateData )(void *);

    int ( *LDeleteData )(void *);

    int ( *LDuplicatedNode )(Link, Link);

    int ( *LNodeDataCmp )(void *, void *);
};

int AddNodeAscend(struct List *, void *);

//链表表头添加结点
int AddNodeAtHead(struct List *, void *);

//创建双向链表并返回指向链表的指针
struct List *CreateLList(
        void *( * )(void *),       /* create data */
        int    ( * )(void *),       /* delete data */
        int    ( * )(Link, Link),   /* duplicate   */
        int    ( * )(void *, void *)); /* compare */
//创建结点
Link CreateNode(struct List *, void *);

#endif //ALGORITHM_LAB2_LLGEN_H
