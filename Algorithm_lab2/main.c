#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LLGEN.h"
#include "LLAPP.h"

#define MAX_SIZE 2000

int main() {
    struct List *L;
    Link head, tail;
    L = CreateLList(CreateData,
                    DeleteData,
                    DuplicatedNode,
                    NodeDataCmp);
    char wd[2];
    char str[MAX_SIZE];
    while (scanf("%s", str) != EOF) {
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
                printf("Warning! Error while adding node to L.\n");
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
                printf("0\n");
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("1\n");
    }
    return 0;
}
