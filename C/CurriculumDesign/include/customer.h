#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

typedef struct {
    char id[20];          // �˿ͱ�ţ�Ψһ��ʶ��
    char name[50];        // �˿�����
    int level;            // ��Ա�ȼ���1-3�ǣ���Ӧ�ۿ��ʣ�
    char phone[20];       // ��ϵ��ʽ
} Customer;

#endif