#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "LLGEN.h"
#include "LLAPP.h"

#define TABLE_SIZE  10

int CreateTable(Link **t) {
    int i;
    *t = (Link *) calloc(TABLE_SIZE, sizeof(Link));
    if (*t == NULL)
        return (0);

    if (**t != NULL)      /* is the calloc'd memory == NULL? */
    {
        for (i = 0; i < TABLE_SIZE; i++, t++)
            **t = NULL;
    }
    return (1);
}

unsigned long ElfHash(const unsigned char *name) {
    unsigned long h = 0, g;
    while (*name) {
        h = (h << 4) + *name++;
        if (g = h & 0xF0000000)
            h ^= g >> 24;

        h &= ~g;
    }
    return h;
}

int main() {
    FILE *fp = fopen("../Lab3test.DAT", "r");
    ND data;
    unsigned hash_key;
    struct List *L;
    Link *Table;
    int add_status;
    struct Node n;
    if (!CreateTable(&Table)) {
        printf("ERROR!");
        exit(EXIT_FAILURE);
    }

    L = CreateLList(CreateData,
                    DeleteData,
                    DuplicatedNode,
                    NodeDataCmp);

    char phoneNumber[20];
    char userName[20];
    int age;
    while (fscanf(fp, "%[^,],%[^,],%d\n", phoneNumber, userName, &age) != EOF) {
        data.phoneNumber = phoneNumber;
        data.userName = userName;
        data.age = age;
        hash_key = (unsigned int) ElfHash(data.phoneNumber);
        hash_key %= TABLE_SIZE;
        L->LHead = Table[hash_key];

        // 查找是否存在重复电话号码
        int passFlag = 0;
        for (Link head = L->LHead; head != NULL; head = head->next) {
            if ((strcmp(((pND) head->pdata)->phoneNumber, data.phoneNumber)) == 0) {
                passFlag = 1;
                break;
            }
        }
        if (!passFlag) {
            add_status = AddNodeAscend(L, &data);
            if (add_status == 0)      /* an error occurred */
            {
                printf("Warning! Error while allocating node.\n");
            }
            Table[hash_key] = L->LHead;
        }
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        Link pcurr;     /* Node we're examining */
        pcurr = Table[i];             /* set to start of list */
        if (pcurr == NULL)          /* skip empty slots */
            continue;
        else {
            int chain_len;
            printf("slot:%3d\n", i);
            for (chain_len = 0;; pcurr = pcurr->next) {
                memcpy(&n, pcurr, sizeof(struct Node));
                printf("%s\t%s\t%3d\n",
                       ((pND) n.pdata)->phoneNumber, ((pND) n.pdata)->userName, ((pND) n.pdata)->age);
                chain_len += 1;
                if (pcurr->next == NULL)
                    break;
            }
        }
    }

    int slotNum;
    char queryPhone[20];
    printf("enter phone number:\n");
    while (scanf("%s", queryPhone) != EOF) {
        getchar();
        slotNum = (unsigned int) ElfHash(queryPhone) % TABLE_SIZE;
        Link pcurr = Table[slotNum];
        int isFound = 0;
        for (; pcurr != NULL; pcurr = pcurr->next) {
            if ((strcmp(((pND) pcurr->pdata)->phoneNumber, queryPhone)) == 0) {
                printf("%s\t%s\t%3d\n",
                       ((pND) pcurr->pdata)->phoneNumber, ((pND) pcurr->pdata)->userName,
                       ((pND) pcurr->pdata)->age);
                isFound = 1;
                break;
            }
        }
        if (!isFound)
            printf("not found\n");
        printf("enter phone number:\n");
    }
    return 0;
}
