//
// Created by vins on 2020/11/18.
//

#include "seqlist.h"
#include "linklist.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp = fopen("../Lab1test.DAT", "r");
    DataNode data;
    pLinkList head = NULL;
    SeqList sl;
    InitSeqList(&sl);
    head = InitLinkList();
    while (fscanf(fp, "%[^,],%[^,],%d\n", data.id, data.name, &data.age) != EOF) {
        AddSeqList(&sl, data);
        AddLinkList(head, data);
    }
    fclose(fp);
    printf("SeqList:\n");
    ShowAllSeqList(&sl);
    printf("LinkList:\n");
    ShowAllLinkList(head);
    printf("输入L操作单链表，输入S操作顺序表，EOF退出：\n");
    char choose;
    while (scanf("%c", &choose) != EOF) {
        getchar();
        if (choose == 'L' || choose == 'l') {
            char select;
            printf("*********单链表操作*********\n");
            printf("A添加节点，I插入节点，D删除节点，P查看节点，S查看所有节点，Q退出：\n");
            while (scanf("%c", &select) != EOF) {
                getchar();
                if (select == 'Q')
                    break;
                DataNode m_data;
                int index;
                switch (select) {
                    case 'A':
                        printf("[添加节点]输入ID，name，age以逗号分隔:\n");
                        scanf("%20[^,],%20[^,],%d", m_data.id, m_data.name, &m_data.age);
                        getchar();
                        if (AddLinkList(head, m_data)) {
                            printf("[添加成功！]\n");
                            ShowAllLinkList(head);
                        } else {
                            printf("[添加失败！]\n");
                        }
                        break;
                    case 'I':
                        printf("[插入节点]输入ID，name，age，index以逗号分隔:\n");
                        scanf("%[^,],%[^,],%d,%d", m_data.id, m_data.name, &m_data.age, &index);
                        getchar();
                        if (InsertLinkList(head, index, m_data)) {
                            printf("[插入成功！]\n");
                            ShowAllLinkList(head);
                        } else {
                            printf("[插入失败！]\n");
                        }
                        break;
                    case 'D':
                        printf("[删除节点]输入删除index:\n");
                        scanf("%d", &index);
                        getchar();
                        if (DeleteLinkList(head, index)) {
                            printf("[删除成功！]\n");
                            ShowAllLinkList(head);
                        } else {
                            printf("[删除失败！]\n");
                        }
                        break;
                    case 'P':
                        printf("[查看节点]输入查看index:\n");
                        scanf("%d", &index);
                        getchar();
                        DisplayLinkList(head, index);
                        break;
                    case 'S':
                        printf("[遍历节点]\n");
                        ShowAllLinkList(head);
                        break;
                    default:
                        printf("[输入错误!]\n");
                }
                printf("A添加节点，I插入节点，D删除节点，P查看节点，S查看所有节点，Q退出：\n");
            }
        } else if (choose == 'S' || choose == 's') {
            char select;
            printf("*********顺序表操作*********\n");
            printf("A添加节点，I插入节点，D删除节点，P查看节点，S查看所有节点，Q退出：\n");
            while (scanf("%c", &select) != EOF) {
                getchar();
                if (select == 'Q')
                    break;
                DataNode m_data;
                int index;
                switch (select) {
                    case 'A':
                        printf("[添加节点]输入ID，name，age以逗号分隔:\n");
                        scanf("%20[^,],%20[^,],%d", m_data.id, m_data.name, &m_data.age);
                        getchar();
                        if (AddSeqList(&sl, m_data)) {
                            printf("[添加成功！]\n");
                            ShowAllSeqList(&sl);
                        } else {
                            printf("[添加失败！]\n");
                        }
                        break;
                    case 'I':
                        printf("[插入节点]输入ID，name，age，index以逗号分隔:\n");
                        scanf("%[^,],%[^,],%d,%d", m_data.id, m_data.name, &m_data.age, &index);
                        getchar();
                        if (InsertSeqList(&sl, index, m_data)) {
                            printf("[插入成功！]\n");
                            ShowAllSeqList(&sl);
                        } else {
                            printf("[插入失败！]\n");
                        }
                        break;
                    case 'D':
                        printf("[删除节点]输入删除index:\n");
                        scanf("%d", &index);
                        getchar();
                        if (DeleteSeqList(&sl, index)) {
                            printf("[删除成功！]\n");
                            ShowAllSeqList(&sl);
                        } else {
                            printf("[删除失败！]\n");
                        }
                        break;
                    case 'P':
                        printf("[查看节点]输入查看index:\n");
                        scanf("%d", &index);
                        getchar();
                        DisplaySeqList(&sl, index);
                        break;
                    case 'S':
                        printf("[遍历节点]\n");
                        ShowAllSeqList(&sl);
                        break;
                    default:
                        printf("[输入错误!]\n");
                }
                printf("A添加节点，I插入节点，D删除节点，P查看节点，S查看所有节点，Q退出：\n");
            }
        }else {
            printf("[输入错误!]输入L操作单链表，输入S操作顺序表，EOF退出\n");
        }
        printf("输入L操作单链表，输入S操作顺序表，EOF退出：\n");
    }
    return 0;
}