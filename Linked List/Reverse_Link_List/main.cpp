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

int main(int argc, char *argv[])
{
    NodeList *a = new NodeList();
    a->m_nData = 1;
    NodeList *b = new NodeList();
    b->m_nData = 2;
    a->m_pNext = b;
    NodeList *c = new NodeList();
    c->m_nData = 3;
    b->m_pNext = c;
    c->m_pNext = NULL;
    NodeList* re = reverseNodeList(a);
    return 0;
}
