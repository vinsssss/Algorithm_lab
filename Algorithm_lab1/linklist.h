//
// Created by vins on 2020/11/18.
//

#ifndef ALGORITHM_LAB1_LINKLIST_H
#define ALGORITHM_LAB1_LINKLIST_H
#include "datanode.h"
typedef struct Node {
    DataNode data;
    struct Node* next;
}LinkList, * pLinkList;

//链表初始化
pLinkList InitLinkList();

//尾插法添加节点
int AddLinkList(pLinkList, DataNode);

//根据索引查找节点
int FindLinkList(pLinkList, int, DataNode*);

//根据索引删除节点
int DeleteLinkList(pLinkList, int);

//根据索引插入节点
int InsertLinkList(pLinkList, int, DataNode);

//根据索引显示节点
int DisplayLinkList(pLinkList, int);

//遍历显示所有节点
void ShowAllLinkList(pLinkList);
#endif //ALGORITHM_LAB1_LINKLIST_H
