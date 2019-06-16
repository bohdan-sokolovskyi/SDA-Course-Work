/*
	process.h
*/

/*
	��������� ��� ��������� ������������� ���������� �� ������������� ����
*/

/* ��� ���������� ���������� ���������� �������� */
#ifndef PROCESS_H
#define PROCESS_H

/* ��������� ����� �������� */
#include "arrayIO.h"
#include "menu.h"
#include "algorithms.h"
#include "elements.h"
#include "measurement.h"

/* ������� ��� ��������� ������������� ���������� */
void demoProcess();

/* ������� ��� ��������� ������������� ���� */
void calcTimeProcess();

/* ������� ��� �������� ����� ����������� */
void printSortName(int);

/* ������� ��� ������ 䳿 �� ���� ����� ������������ ��������� 1 - ������ 2 - ����������� ������� ������� ���� */
void goDemoProc(int, int);

#endif
