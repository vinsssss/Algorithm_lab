#include <stdio.h>
#include "BITMAP.h"

int main() {
    FILE *fp = fopen("../lab_2_1.txt", "r");
    int num;
    while (fscanf(fp, "%d\n", &num) != EOF) {
        set(num);
    }
    int t_num;
    printf("%d\n",test(12345));
    // scanf("%d", &t_num);
    while(scanf("%d", &t_num)!=EOF) {
        getchar();
        if(test(t_num)!=0) {
            printf("数字:%d标志位于位图bit_map[%d]中的第%d位\n", t_num, t_num>>SHIFT, (t_num & MASK));
        }
        else {
            printf("数字%d标志不在位图中\n",t_num);
        }
    }
    return 0;
}
