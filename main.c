#include <stdio.h>
#include "List.h"

int main() {
    PNode list = NULL;
    init(&list);
    for (int i = 0; i < 12; ++i) {
        insert(list, i + 1, i + 10);
    }
    printList(list);
    delete(list, 5);
    printList(list);
    return 0;
}
