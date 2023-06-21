//
//  main.c
//  LeetCode-876
//
//  Created by HiLau on 2023/6/21.
//

#include <stdio.h>
#include <stdlib.h>


//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。



// 定义链表节点结构体
struct ListNode {
        int val;
        struct ListNode *next;
};

// 寻找链表中间节点
struct ListNode* middleNode(struct ListNode* head){
struct ListNode* fast = head;
struct ListNode* slow = head;
    while(fast && fast->next) //指针停止条件
    {
        slow = slow -> next ;
        fast = fast ->next ->next;

    }
    return slow;
}

int main()
{
        // 创建链表并初始化
        struct ListNode a = {5, NULL};
        struct ListNode b = {3, &a};
        struct ListNode c = {2, &b};
        struct ListNode d = {6, &c};
        struct ListNode e = {1, &d};
        struct ListNode f = {4, &e};
        struct ListNode* head = &f;

        // 调用函数寻找链表中间节点
        struct ListNode* middle = middleNode(head);

        // 输出链表中间节点的值
        printf("The middle value is %d\n", middle->val);

        return 0;
}
