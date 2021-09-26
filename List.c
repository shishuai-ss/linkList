//
// Created by 没名字 on 2021/9/26.
//

#include "List.h"
#include <stdio.h>
#include <stdlib.h>

void init(PNode *list) {
    PNode p = (PNode) malloc(sizeof(Node));
    *list = p;
    p->element = 0;
    p->next = NULL;
}

PNode find(PNode list, int loc) {
    if (loc < 0) {
        return NULL;
    }
    PNode temp = list;
    int now = 0;
    while (temp != NULL && now < loc) {
        temp = temp->next;
        now ++;
    }
    return temp;
}

int insertAfter(PNode pre, int element) {
    if (pre == NULL) {
        return 0;
    }
    PNode newNode = (PNode) malloc(sizeof(Node));
    newNode->element = element;
    newNode->next = pre->next;
    pre->next = newNode;
    return 1;
}

int insert(PNode list, int loc, int element) {
    if (loc < 1) {
        return 0;
    }
    PNode pre = find(list, loc - 1);
    return insertAfter(pre, element);
}

int delete(PNode list, int loc) {
    if (loc < 1) {
        return 0;
    }
    PNode pre = find(list, loc - 1);
    if (pre == NULL || pre->next == NULL) {
        return 0;
    }
    PNode temp = pre->next;
    pre->next = temp->next;
    free(temp);
    return 1;
}

PNode findByElement(PNode list, int element) {
    PNode temp = list->next;
    while (temp != NULL) {
        if (temp->element == element) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int len(PNode list) {
    PNode temp = list;
    int len = 0;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void printList(PNode list) {
    PNode temp = list->next;
    int loc = 1;
    printf("--------------\n");
    while (temp != NULL) {
        printf("%d: %d\n", loc++, temp->element);
        temp = temp->next;
    }
    printf("--------------\n");
}
