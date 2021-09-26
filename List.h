//
// Created by 没名字 on 2021/9/26.
//

#ifndef LINKLIST_LIST_H
#define LINKLIST_LIST_H
typedef struct ListNode{
    int element;
    struct ListNode *next;
}Node, *PNode;
#endif //LINKLIST_LIST_H

// 初始化单链表
void init(PNode *list);

// 根据位序查找元素，位序从1开始
PNode find(PNode list, int loc);

// 根据位序插入元素
int insert(PNode list, int loc, int element);

// 根据位序删除元素
int delete(PNode list, int loc);

// 根据元素内容查找元素
PNode findByElement(PNode list, int element);

// 求表长
int len(PNode list);

// 打印列表
// 格式为     位序: 元素值
void printList(PNode list);
