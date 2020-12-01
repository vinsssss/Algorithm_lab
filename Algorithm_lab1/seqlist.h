//
// Created by vins on 2020/11/18.
//
#ifndef ALGORITHM_LAB1_SEQLIST_H
#define ALGORITHM_LAB1_SEQLIST_H
#include "datanode.h"
#define MAXSIZE 100
typedef struct {
    DataNode data[MAXSIZE];
    int length;
} SeqList, * pSeqList;

//初始化
int InitSeqList(pSeqList);

//表尾添加结点
int AddSeqList(pSeqList, DataNode);

//指定位置查找
int FindSeqList(pSeqList, int, DataNode*);

//指定位置删除
int DeleteSeqList(pSeqList, int);

//指定位置插入
int InsertSeqList(pSeqList, int, DataNode);

int DisplaySeqList(pSeqList, int);

void ShowAllSeqList(pSeqList);

#endif //ALGORITHM_LAB1_SEQLIST_H
