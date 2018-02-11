#include <iostream>

using namespace std;

struct NodeList{
    int m_nData;
    NodeList *m_pNext;
};

NodeList* reverseNodeList(NodeList* pHead) {
    NodeList *pReverseHead = NULL;
    NodeList *pNode = pHead;
    NodeList *pPre = NULL;
    while (pNode != NULL) {
        NodeList* pNext = pNode->m_pNext;

        if (pNext == NULL) {
            pReverseHead = pNode;
        }

        pNode->m_pNext = pPre;
        pPre = pNode;
        pNode = pNext;

    }
    return pReverseHead;
}
