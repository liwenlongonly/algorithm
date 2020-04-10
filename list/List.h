//
// Created by ilong on 2020/4/9.
//

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

class ListNode{
public:
    ListNode(int value);
    virtual ~ListNode();
    ListNode *next;
    int value;
};

class List{
public:
    List();
    virtual ~List();
    void test();
private:
    ListNode* createList(const int array[], const int num);
    void printList(const ListNode* head);
    void freeList(ListNode* head);
    //获取链表中间元素
    ListNode* middleNode(const ListNode *head);
    //反转链表
    ListNode* reverseList(ListNode *head);
    //判断是否有环
    bool hasLoop(const ListNode *head);
    //删除倒数第n个元素,返回链表头指针,技巧使用假指针;
    ListNode* removeNthFromEnd(const ListNode* head, int n);

};

#endif //ALGORITHM_LIST_H
