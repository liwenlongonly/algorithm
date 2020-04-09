//
// Created by ilong on 2020/4/9.
//

#include "List.h"
#include <iostream>

ListNode::ListNode():
next{nullptr},
value{0}{

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
    freeList(list);
    list = nullptr;
    printList(list);
}

ListNode* List::createList(const int array[], const int num) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = 0; i < num; ++i) {
        ListNode * node = new (std::nothrow)ListNode();
        node->value = array[i];
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

void List::freeList(const ListNode *head) {
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

ListNode* List::reverseList(const ListNode *head) {
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
