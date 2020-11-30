#include <stdio.h>
#include "BITMAP.h"

int main() {
    FILE *fp = fopen("../lab_2_1.txt", "r");
    int num;
    while (fscanf(fp, "%d\n", &num) != EOF) {
        set(num);
    }
    printf("%d\n",test(12345));
    return 0;
}
