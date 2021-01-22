#ifndef DTNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��̬����ṹ�嶨��
typedef struct DYNAMICARRAY
{
	int* pAddr;//������ݵĵ�ַ
	int size;//��ǰ�ж���Ԫ��
	int capacity;//��������ǰ���������Ԫ������
}Dynamic_Array;

//��ʼ��
Dynamic_Array* Init_Array();

//����
void PushBack_Array(Dynamic_Array* arr, int value);

//λ��ɾ��
void RemoveByPos_Array(Dynamic_Array* arr, int pos);

//ֵɾ��
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//����
int Find_Array(Dynamic_Array* arr, int value);

//��ӡ
void Print_Array(Dynamic_Array* arr);

//�ͷŶ�̬�����ڴ�
void FreeSpace_Array(Dynamic_Array* arr);

//�������
void Clear_Array(Dynamic_Array* arr);

//��ö�̬��������
int Capacity_Array(Dynamic_Array* arr);

//��ö�̬���ݵ�ǰԪ�ظ���
int Size_Array(Dynamic_Array* arr);

//����λ�û��ĳ��Ԫ��
int At_Array(Dynamic_Array* arr, int pos);

#endif