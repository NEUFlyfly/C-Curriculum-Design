#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

typedef struct {
    char id[20];          // 顾客编号（唯一标识）
    char name[50];        // 顾客姓名
    int level;            // 会员等级（1-3星，对应折扣率）
    char phone[20];       // 联系方式
} Customer;

#endif