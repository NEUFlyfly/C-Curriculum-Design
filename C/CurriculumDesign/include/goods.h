#ifndef __GOODS_H__
#define __GOODS_H__

typedef struct Goods
{
    char id[20];           // ��Ʒ��ţ�Ψһ��ʶ��
    char name[50];         // ��Ʒ����
    char category[30];     // ��Ʒ�����"����"��"����"��
    char manufacturer[50]; // ��������
    char description[100]; // ��Ʒ��������ѡ��
    float price;           // ��ǰ���ۼ۸�
    int stock;             // �������
    int is_promotion;      // �Ƿ������0=��1=�ǣ�
    float promotion_price; // �����۸񣨴���ʱʹ�ã�
} Goods;

typedef struct Purchase
{
    char goods_name[50]; // ��Ʒ���ƣ�����洢������ֱ�Ӳ�ѯ��
    char date[20];       // �������ڣ���ʽ��YYYY-MM-DD��
    float cost_price;    // ��������
    int quantity;        // ��������
    char supplier[50];   // ��Ӧ������
} Purchase;

typedef struct Sale
{
    char goods_id[20];    // ��Ʒ��ţ�������Ʒ��
    char customer_id[20]; // �˿ͱ�ţ������˿ͣ���ѡ��
    char sale_time[20];   // ����ʱ�䣨��ʽ��YYYY-MM-DD HH:MM:SS��
    float sale_price;     // ʵ�����۵��ۣ������ۿۻ������
    int quantity;         // ��������
} Sale;

typedef struct Node
{
    Goods good;        // ��Ʒ��Ϣ
    struct Node *next; // ָ����һ���ڵ��ָ��
} *GoodsList, Node;    // GoodsListΪ��Ʒ�����ͷָ�룬NodeΪ����ڵ�

#endif