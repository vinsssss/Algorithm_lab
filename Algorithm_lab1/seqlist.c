//
// Created by vins on 2020/11/18.
//


#include "seqlist.h"
#include <stdio.h>
#include <string.h>

//初始化
int InitSeqList(pSeqList pSeq) {
    if (pSeq != NULL) {
        pSeq->length = 0;
        for (int i = 0; i < MAXSIZE; i++) {
            memset(pSeq->data[i].id, 0, CHARSIZE);
            memset(pSeq->data[i].name, 0, CHARSIZE);
            pSeq->data[i].age = 0;
        }
        return OK;
    }
    return ERROR;
}

//表尾添加结点
int AddSeqList(pSeqList pSeq, DataNode mdata) {
    if (pSeq != NULL && pSeq->length <= MAXSIZE - 1) {
        int tail = pSeq->length;
        strcpy(pSeq->data[tail].id, mdata.id);
        strcpy(pSeq->data[tail].name, mdata.name);
        pSeq->data[tail].age = mdata.age;
        pSeq->length++;
        return OK;
    }
    return ERROR;

}

//指定位置查找
int FindSeqList(pSeqList pSeq, int index, DataNode *mdata) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        strcpy(mdata->id, pSeq->data[index].id);
        strcpy(mdata->name, pSeq->data[index].name);
        mdata->age = pSeq->data[index].age;
        return OK;
    }
    return ERROR;
}

//指定位置删除
int DeleteSeqList(pSeqList pSeq, int index) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        for (; index < pSeq->length - 1; index++) {
            strcpy(pSeq->data[index].id, pSeq->data[index + 1].id);
            strcpy(pSeq->data[index].name, pSeq->data[index + 1].name);
            pSeq->data[index].age = pSeq->data[index + 1].age;
        }
        memset(pSeq->data[index].id, 0, CHARSIZE);
        memset(pSeq->data[index].name, 0, CHARSIZE);
        pSeq->data[index].age = 0;
        pSeq->length--;
        return OK;
    }
    return ERROR;
}

//指定位置插入
int InsertSeqList(pSeqList pSeq, int index, DataNode mdata) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length && pSeq->length <= MAXSIZE - 1) {
        for (int i = pSeq->length; i > index; i--) {
            strcpy(pSeq->data[i].id, pSeq->data[i - 1].id);
            strcpy(pSeq->data[i].name, pSeq->data[i - 1].name);
            pSeq->data[i].age = pSeq->data[i - 1].age;
        }
        strcpy(pSeq->data[index].id, mdata.id);
        strcpy(pSeq->data[index].name, mdata.name);
        pSeq->data[index].age = mdata.age;
        pSeq->length++;
        return OK;
    }
    return ERROR;
}

int DisplaySeqList(pSeqList pSeq, int index) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        printf("学号：%s\t姓名：%s\t年龄：%d\n", pSeq->data[index].id, pSeq->data[index].name, pSeq->data[index].age);
        return OK;
    }
    return ERROR;
}

void ShowAllSeqList(pSeqList pSeq) {
    for (int i = 0; i < pSeq->length; i++) {
        printf("学号：%s\t姓名：%s\t年龄：%d\n", pSeq->data[i].id, pSeq->data[i].name, pSeq->data[i].age);
    }
}

