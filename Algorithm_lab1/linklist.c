//
// Created by vins on 2020/11/18.
//


#include "linklist.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//初始化
pLinkList InitLinkList() {
    pLinkList head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("分配空间失败");
        return NULL;
    }
    memset(head->data.id, 0, CHARSIZE);
    memset(head->data.name, 0, CHARSIZE);
    head->data.age = 0;
    head->next = NULL;
    return head;
}

//尾插法添加结点
int AddLinkList(pLinkList head, DataNode mdata) {
    pLinkList p = head;
    pLinkList s = (struct Node*)malloc(sizeof(struct Node));
    if (s == NULL) {
        printf("分配空间失败");
        return ERROR;
    }
    //数据赋值
    strcpy(s->data.id, mdata.id);
    strcpy(s->data.name, mdata.name);
    s->data.age = mdata.age;

    while (p->next!=NULL)
    {
        p = p->next;
    }
    s->next = p->next;
    p->next = s;
    return OK;
}

//指定位置查找
int FindLinkList(pLinkList head, int index, DataNode* mdata) {
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            strcpy(mdata->id, p->data.id);
            strcpy(mdata->name, p->data.name);
            mdata->age = p->data.age;
            return OK;
        }
        index--;
    }
    return ERROR;
}

//指定位置删除
int DeleteLinkList(pLinkList head, int index) {
    pLinkList s = (struct Node*)malloc(sizeof(struct Node));
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
    pLinkList s = (struct Node*)malloc(sizeof(struct Node));
    s = head;
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        if (index == 0) {
            pLinkList m = (struct Node*)malloc(sizeof(struct Node));
            if (m == NULL) {
                printf("分配空间失败");
                return ERROR;
            }
            strcpy(m->data.id, mdata.id);
            strcpy(m->data.name, mdata.name);
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

void ShowAllLinkList(pLinkList head)
{
    for (pLinkList p = head->next; p != NULL; p = p->next) {
        printf("学号：%s\t姓名：%s\t年龄：%d\n", p->data.id, p->data.name, p->data.age);
    }
}