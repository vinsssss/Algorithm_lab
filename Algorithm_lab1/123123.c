//
// Created by 89252 on 2020/11/17.
//

#include "linklist.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//初始化
int InitLinkList(pLinkList head) {
    head = (struct Node *) malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("分配空间失败");
        return ERROR;
    }
    head->next = NULL;
    return OK;
}

//头插法添加结点
int AddLinkList(pLinkList head, DataNode mdata) {
    pLinkList p = (struct Node *) malloc(sizeof(struct Node));
    if (p == NULL) {
        printf("分配空间失败");
        return ERROR;
    }
    //数据赋值
    strcpy_s(p->data.id, CHARSIZE, mdata.id);
    strcpy_s(p->data.name, CHARSIZE, mdata.name);
    p->data.age = mdata.age;
    p->next = head->next;
    head->next = p;
    return OK;
}

//指定位置查找
int FindLinkList(pLinkList head, int index, DataNode *mdata) {
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            strcpy_s(mdata->id, CHARSIZE, p->data.id);
            strcpy_s(mdata->name, CHARSIZE, p->data.name);
            mdata->age = p->data.age;
            return OK;
        }
        index--;
    }
    return ERROR;
}

//指定位置删除
int DeleteLinkList(pLinkList head, int index) {
    pLinkList s = (struct Node *) malloc(sizeof(struct Node));
    s = head;
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            s->next = p->next;
            free(p);
            return OK;
        }
        s = p;
        index--;
    }
    return ERROR;
}

//指定位置插入
int InsertLinkList(pLinkList head, int index, DataNode mdata) {
    pLinkList s = (struct Node *) malloc(sizeof(struct Node));
    s = head;
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            pLinkList m = (struct Node *) malloc(sizeof(struct Node));
            if (m == NULL) {
                printf("分配空间失败");
                return ERROR;
            }
            strcpy_s(m->data.id, CHARSIZE, mdata.id);
            strcpy_s(m->data.name, CHARSIZE, mdata.name);
            m->data.age = mdata.age;
            s->next = m;
            m->next = p;
            return OK;
        }
        s = p;
        index--;
    }
    return ERROR;
}

int DisplayLinkList(pLinkList head, int index) {
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            printf("学号：%s\t姓名：%s\t年龄：%d\n", p->data.id, p->data.name, p->data.age);
            return OK;
        }
        index--;
    }
    return ERROR;
}