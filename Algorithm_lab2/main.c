#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LLGEN.h"
#include "LLAPP.h"

#define MAX_SIZE 2000

int main() {
    Link head, tail;
    char wd[2];
    char str[MAX_SIZE];
    while (scanf("%s", str) != EOF) {
        struct List *L;
        L = CreateLList(CreateData,
                        DeleteData,
                        DuplicatedNode,
                        NodeDataCmp);
        int i = 0;
        int conflag = 0;
        for (; i < MAX_SIZE; i++) {
            if (str[i] == '\0') {
                break;
            }
            wd[0] = str[i];
            wd[1] = '\0';
            // printf("data: %s\n", wd);
            if (!AddNodeAtHead(L, wd))
            {
                printf("添加节点错误！\n");
                conflag = 1;
                break;
            }
        }
        // printf("%d\n", L->LCount);
        if(conflag)
        {
            printf("-1\n");
            continue;
        }
        head = L->LHead;
        tail = L->LTail;
        int flag = 1;
        for (; head != NULL && tail != NULL; head = head->next, tail = tail->prev) {
            if (NodeDataCmp((head->pdata), (tail->pdata)) != 0) {
                // printf("%s %s",((pND)(head->pdata))->word, ((pND)(tail->pdata))->word);
                printf("0\n");
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("1\n");
        free(L);
    }
    return 0;
}
