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
    //删除倒数第n个元素，返回链表头指针，技巧使用假指针;
    ListNode* removeNthFromEnd(const ListNode* head, int n);
    //给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。
    ListNode* rotateRight(const ListNode* head, int k);

};

#endif //ALGORITHM_LIST_H
