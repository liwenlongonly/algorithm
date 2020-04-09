//
// Created by ilong on 2020/4/9.
//

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

class ListNode{
public:
    ListNode();
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
    void freeList(const ListNode* head);
    //获取链表中间元素
    ListNode* middleNode(const ListNode *head);
    //反转链表
    ListNode*  reverseList(const ListNode *head);
};

#endif //ALGORITHM_LIST_H
