//
// Created by 89252 on 2020/11/17.
//
#ifndef ALGORITHM_LAB1_SEQLIST_H
#define ALGORITHM_LAB1_SEQLIST_H
#define MAXSIZE 100
#define CHARSIZE 20
#define OK 1
#define ERROR -1
typedef struct {
    char id[CHARSIZE];
    char name[CHARSIZE];
    int age;
} DataNode;

typedef struct {
    DataNode data[MAXSIZE];
    int length;
} SeqList, *pSeqList;

//初始化
int InitSeqList(pSeqList);

//表尾添加结点
int AddSeqList(pSeqList, DataNode);

//指定位置查找
int FindSeqList(pSeqList, int, DataNode *);

//指定位置删除
int DeleteSeqList(pSeqList, int);

//指定位置插入
int InsertSeqList(pSeqList, int, DataNode);

int DisplaySeqList(pSeqList, int);

#endif //ALGORITHM_LAB1_SEQLIST_H