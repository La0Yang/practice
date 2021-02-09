#define _CRT_SECURE_NO_WARNINGS 1

//#define MAX 1000
#define DEFAULT_SIZE 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 30
#define MAX_TELE 12

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;

//通讯录类型
typedef struct Contact
{
	int capacity;//当前通讯录的最大容量
	int size;//记录当前已有的元素个数
	struct PeoInfo *data;//存放一个信息
}Contact;

//声明函数并初始化
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定人的信息
void SearchContact(const struct Contact *ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//
void DestroyContact(Contact* ps);