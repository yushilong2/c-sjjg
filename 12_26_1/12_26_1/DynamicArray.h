#ifndef DTNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//动态增长内存，策略 将存放数据的内存放到那？堆上
//动态数组 如果5个元素 申请内存 拷贝数据 释放内存
//容量capacity表示这块内存空间一共可以存放多少元素
//size概念 记录当前数组中具体的元素个数

//动态数组结构体定义
typedef struct DYNAMICARRAY
{
	int* pAddr;//存放数据的地址
	int size;//当前有多少元素
	int capacity;//容量，当前最大能容纳元素数量
}Dynamic_Array;

//初始化
Dynamic_Array* Init_Array();

//插入
void PushBack_Array(Dynamic_Array* arr, int value);

//位置删除
void RemoveByPos_Array(Dynamic_Array* arr, int pos);

//值删除
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//查找
int Find_Array(Dynamic_Array* arr, int value);

//打印
void Print_Array(Dynamic_Array* arr);

//释放动态数组内存
void FreeSpace_Array(Dynamic_Array* arr);

//清空数组
void Clear_Array(Dynamic_Array* arr);

//获得动态数组容量
int Capacity_Array(Dynamic_Array* arr);

//获得动态数据当前元素个数
int Size_Array(Dynamic_Array* arr);

//根据位置获得某个元素
int At_Array(Dynamic_Array* arr, int pos);

#endif