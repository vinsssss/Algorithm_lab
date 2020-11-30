#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LLGEN.h"
#include "LLAPP.h"

int main() {
    struct List *L;
    L = CreateLList(CreateData,
                    DeleteData,
                    DuplicatedNode,
                    NodeDataCmp);

    // printf("Hello, World!\n");
    return 0;
}
