//
// Created by 89252 on 2020/11/17.
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
int Add(pSeqList pSeq, DataNode mdata) {
    if (pSeq != NULL && pSeq->length <= MAXSIZE - 1) {
        int tail = pSeq->length;
        strcpy_s(pSeq->data[tail].id, CHARSIZE, mdata.id);
        strcpy_s(pSeq->data[tail].name, CHARSIZE, mdata.name);
        pSeq->data[tail].age = mdata.age;
        pSeq->length++;
        return OK;
    }
    return ERROR;

}

//指定位置查找
int Find(pSeqList pSeq, int index, DataNode *mdata) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        strcpy_s(mdata->id, CHARSIZE, pSeq->data[index].id);
        strcpy_s(mdata->name, CHARSIZE, pSeq->data[index].name);
        mdata->age = pSeq->data[index].age;
        return OK;
    }
    return ERROR;
}

//指定位置删除
int Delete(pSeqList pSeq, int index) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        memset(pSeq->data[index].id, 0, CHARSIZE);
        memset(pSeq->data[index].name, 0, CHARSIZE);
        pSeq->data[index].age = 0;
        pSeq->length--;
        return OK;
    }
    return ERROR;
}

//指定位置插入
int Insert(pSeqList pSeq, int index, DataNode mdata) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length && pSeq->length <= MAXSIZE - 1) {
        for (int i = pSeq->length; i > index; i--) {
            strcpy_s(pSeq->data[i].id, CHARSIZE, pSeq->data[i - 1].id);
            strcpy_s(pSeq->data[i].name, CHARSIZE, pSeq->data[i - 1].name);
            pSeq->data[i].age = pSeq->data[i - 1].age;
        }
        strcpy_s(pSeq->data[index].id, CHARSIZE, mdata.id);
        strcpy_s(pSeq->data[index].name, CHARSIZE, mdata.name);
        pSeq->data[index].age = mdata.age;
        pSeq->length++;
        return OK;
    }
    return ERROR;
}

int Display(pSeqList pSeq, int index) {
    if (pSeq != NULL && index >= 0 && index < pSeq->length) {
        printf("学号：%s\t姓名：%s\t年龄：%d\n", pSeq->data[index].id, pSeq->data[index].name, pSeq->data[index].age);
        return OK;
    }
    return ERROR;
}
