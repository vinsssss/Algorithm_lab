//
// Created by vins on 2020/11/30.
//
#ifndef ALGORITHM_LAB2_1_BITMAP_H
#define ALGORITHM_LAB2_1_BITMAP_H
#define WORD 32
#define SHIFT 5 ////移动5个位,左移则相当于乘以32,右移相当于除以32取整
#define MASK 0x1F //16进制下的31
#define N 1000000
int bitmap[1 + N / WORD];
/*
 * 置位函数——用"|"操作符,i&MASK相当于mod操作
 * m mod n 运算，当n = 2的X次幂的时候,m mod n = m&(n-1)
 */
void set(int i) {
    // m mod n = m&(n-1)
    // 1 << (i & MASK) = 2^i
    bitmap[i >> SHIFT] |= (1 << (i & MASK));
}
/* 清除位操作，用&~操作符 */
void clear(int i) {
    bitmap[i >> SHIFT] &= ~(1 << (i & MASK));
}
/* 测试位操作用&操作符 */
int test(int i) {
    return bitmap[i >> SHIFT] & (1 << (i & MASK));
}
#endif //ALGORITHM_LAB2_1_BITMAP_H
