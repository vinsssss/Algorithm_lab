#include "seqlist.h"
#include <stdio.h>
#include <string.h>

int main() {
    DataNode data;
    strcpy_s(data.name, CHARSIZE, "张三");
    strcpy_s(data.id, CHARSIZE, "SA20225403");
    data.age = 20;
    printf("学号：%s\t姓名：%s\t年龄：%d\n", data.id, data.name, data.age);
    SeqList l;
    InitSeqList(&l);
    for (int i = 0; i < MAXSIZE; i++)
    {
        Add(&l, data);
        printf("%d length:%d", i, l.length);
        Display(&l, i);

    }
    printf("Hello, World!\n");
    return 0;
}
