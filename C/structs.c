#include <stdio.h>
// 商品基本信息
typedef struct {
    char id[20];          // 商品编号
    char name[50];        // 商品名称
    char category[30];    // 商品类别
    char manufacturer[50];// 生产厂家
    char description[100];// 描述
    float price;          // 销售价格
    int stock;            // 库存数量
    int is_promotion;     // 是否促销（0/1）
} Goods;

// 顾客信息
typedef struct { 
    char id[20];          // 顾客编号
    char name[50];        // 姓名
    int level;            // 顾客等级（1-3星）
    char phone[20];       // 联系方式
} Customer;

// 商品进货记录
typedef struct {
    char goods_id[20];    // 商品编号
    char date[20];        // 进货日期
    float cost_price;     // 进货价格
    int quantity;         // 进货数量
    char supplier[50];    // 进货渠道
} Purchase;

// 商品销售记录
typedef struct {
    char goods_id[20];    // 商品编号
    char customer_id[20]; // 顾客编号
    char sale_time[20];   // 销售时间
    float sale_price;     // 销售价格
    int quantity;         // 销售数量
} Sale;

// 动态链表节点
typedef struct Node {
    Goods data;
    struct Node* next;
} Node;

// 全局变量声明
extern Node* goods_head;       // 商品链表头指针
extern Customer* customers;    // 顾客数组（动态分配）
extern int customer_count;     // 顾客数量
extern char current_user[20];  // 当前登录用户名
int main() {
    printf("Hello, World!\n");
    // 程序主体
    return 0;
}