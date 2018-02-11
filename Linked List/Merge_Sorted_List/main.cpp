// author: WingC
// target: merge sorted linked list
// time: 18-02-10

struct ListNode {
    int m_iValue;
    ListNode *m_pNext;
};

ListNode* mergeSortedListNode(ListNode *headOne, ListNode *headTwo) {
    if (headOne == NULL) {
        return headTwo;
    }
    if (headTwo == NULL) {
        return headOne;
    }

    ListNode *mergedHead = NULL;
    if (headOne->m_iValue < headTwo->m_iValue) {
        mergedHead = headOne;
        mergedHead->m_pNext = mergeSortedListNode(headOne->m_pNext, headTwo);
    }
    else {
        mergedHead = headTwo;
        mergedHead->m_pNext = mergeSortedListNode(headTwo->m_pNext, headOne);
    }
    return mergedHead;
}
