int size(ListNode *list) {
    ListNode *ptr = list;
    int size = 0;
    while (ptr != NULL) {
        size++;
        ptr = ptr-> next;
    }
    return size;
}
