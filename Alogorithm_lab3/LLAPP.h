#ifndef ALGORITHM_LAB2_LLAPP_H
#define ALGORITHM_LAB2_LLAPP_H
//数据结点2结构
struct NodeData {
    char *phoneNumber;
    char *userName;
    int age;
};
//数据结点2结构指针
typedef struct NodeData *pND;

typedef struct NodeData ND;

//创建数据结点1并对数据进行初始化
extern void *CreateData(void *);

//释放数据结点2中的单词数据内存空间
extern int DeleteData(void *);

//返回插入重复结点指令
extern int DuplicatedNode(Link, Link);

//数据结点2比较
extern int NodeDataCmp(void *, void *);

#endif //ALGORITHM_LAB2_LLAPP_H
