//
// Created by ilong on 2020/4/9.
//

#include "List.h"
#include <iostream>

ListNode::ListNode(int value):
next{nullptr},
value{value}{

}

ListNode::~ListNode() {

}

List::List(){

}

List::~List() {

}

void List::test() {
    int array[8] = {13,67,77,88,990,23,445,667};
    ListNode *list = createList(array, 8);
    printList(list);
    ListNode * node = middleNode(list);
    std::cout << "middleNode value: " << node->value << std::endl;
    list = reverseList(list);
    std::cout << "reverseList : ";
    printList(list);
    std::cout << (hasLoop(list)?"has loop":"has not loop") << std::endl;
    list = removeNthFromEnd(list, 3);
    printList(list);
    freeList(list);
    list = nullptr;
    printList(list);
}

ListNode* List::createList(const int array[], const int num) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = 0; i < num; ++i) {
        ListNode * node = new (std::nothrow)ListNode(array[i]);
        if(head == nullptr && i == 0){
            head = node;
        }
        if(tail){
            tail->next = node;
            tail = node;
        } else{
            tail = node;
        }
    }
    return head;
}

void List::printList(const ListNode *head) {
    ListNode *ptr = (ListNode*)head;

    while(ptr != nullptr){
        std::cout << ptr->value << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

void List::freeList(ListNode *head) {
    ListNode *ptr = const_cast<ListNode*>(head);

    while (ptr != nullptr){
        ListNode *item = ptr;
        ptr = ptr->next;
        if(item){
            item->next = nullptr;
            delete item;
        }
    }
}

ListNode* List::middleNode(const ListNode *head) {
    if(head == nullptr || head->next == nullptr){
        return const_cast<ListNode*>(head);
    }
    ListNode *slow = const_cast<ListNode*>(head);
    ListNode *fast = const_cast<ListNode*>(head);
    while (fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

ListNode* List::reverseList(ListNode *head) {
    if(head == nullptr || head->next == nullptr){
        return const_cast<ListNode*>(head);
    }
    ListNode * node = const_cast<ListNode*>(head);
    ListNode * newHead = nullptr;
    while (node != nullptr){
        ListNode * tmp = node->next;
        node->next = newHead;
        newHead = node;
        node = tmp;
    }
    return newHead;
}

bool List::hasLoop(const ListNode *head) {
    if(head == nullptr || head->next == nullptr){
        return false;
    }
    ListNode *slow = const_cast<ListNode*>(head);
    ListNode *fast = const_cast<ListNode*>(head);
    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

ListNode* List::removeNthFromEnd(const ListNode *head, int n) {
    if(head == NULL){
        return const_cast<ListNode*>(head);
    }
    ListNode * dummy = new ListNode(0);
    dummy->next = const_cast<ListNode*>(head);;
    ListNode *pre = dummy;
    ListNode *tmp = dummy;
    for(int i = 0; i < n; ++i){
        if(tmp->next){
            tmp = tmp->next;
        }else{
            return dummy->next;
        }
    }
    while(tmp->next != NULL){
        pre = pre->next;
        tmp = tmp->next;
    }
    tmp = pre->next->next;
    delete pre->next;
    pre->next = tmp;
    ListNode * rHead = dummy->next;
    delete dummy;
    return rHead;
}