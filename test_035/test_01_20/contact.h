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

//ͨѶ¼����
typedef struct Contact
{
	int capacity;//��ǰͨѶ¼���������
	int size;//��¼��ǰ���е�Ԫ�ظ���
	struct PeoInfo *data;//���һ����Ϣ
}Contact;

//������������ʼ��
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ���˵���Ϣ
void SearchContact(const struct Contact *ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//
void DestroyContact(Contact* ps);