#include <stdio.h>
// ��Ʒ������Ϣ
typedef struct {
    char id[20];          // ��Ʒ���
    char name[50];        // ��Ʒ����
    char category[30];    // ��Ʒ���
    char manufacturer[50];// ��������
    char description[100];// ����
    float price;          // ���ۼ۸�
    int stock;            // �������
    int is_promotion;     // �Ƿ������0/1��
} Goods;

// �˿���Ϣ
typedef struct { 
    char id[20];          // �˿ͱ��
    char name[50];        // ����
    int level;            // �˿͵ȼ���1-3�ǣ�
    char phone[20];       // ��ϵ��ʽ
} Customer;

// ��Ʒ������¼
typedef struct {
    char goods_id[20];    // ��Ʒ���
    char date[20];        // ��������
    float cost_price;     // �����۸�
    int quantity;         // ��������
    char supplier[50];    // ��������
} Purchase;

// ��Ʒ���ۼ�¼
typedef struct {
    char goods_id[20];    // ��Ʒ���
    char customer_id[20]; // �˿ͱ��
    char sale_time[20];   // ����ʱ��
    float sale_price;     // ���ۼ۸�
    int quantity;         // ��������
} Sale;

// ��̬����ڵ�
typedef struct Node {
    Goods data;
    struct Node* next;
} Node;

// ȫ�ֱ�������
extern Node* goods_head;       // ��Ʒ����ͷָ��
extern Customer* customers;    // �˿����飨��̬���䣩
extern int customer_count;     // �˿�����
extern char current_user[20];  // ��ǰ��¼�û���
int main() {
    printf("Hello, World!\n");
    // ��������
    return 0;
}