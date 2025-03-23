#ifndef __GOODS_H__
#define __GOODS_H__

typedef struct Goods
{
    char id[20];           // 商品编号（唯一标识）
    char name[50];         // 商品名称
    char category[30];     // 商品类别（如"饮料"、"调料"）
    char manufacturer[50]; // 生产厂家
    char description[100]; // 商品描述（可选）
    float price;           // 当前销售价格
    int stock;             // 库存数量
    int is_promotion;      // 是否促销（0=否，1=是）
    float promotion_price; // 促销价格（促销时使用）
} Goods;

typedef struct Purchase
{
    char goods_name[50]; // 商品名称（冗余存储，方便直接查询）
    char date[20];       // 进货日期（格式：YYYY-MM-DD）
    float cost_price;    // 进货单价
    int quantity;        // 进货数量
    char supplier[50];   // 供应商名称
} Purchase;

typedef struct Sale
{
    char goods_id[20];    // 商品编号（关联商品）
    char customer_id[20]; // 顾客编号（关联顾客，可选）
    char sale_time[20];   // 销售时间（格式：YYYY-MM-DD HH:MM:SS）
    float sale_price;     // 实际销售单价（考虑折扣或促销）
    int quantity;         // 销售数量
} Sale;

typedef struct Node
{
    Goods good;        // 商品信息
    struct Node *next; // 指向下一个节点的指针
} *GoodsList, Node;    // GoodsList为商品链表的头指针，Node为链表节点

#endif