#pragma once

#include <iostream>
#include <string>
#define ARRAY_SIZE 5

typedef std::string type;
using namespace std;

struct List {
	type arr[ARRAY_SIZE];
	int count = 0;
};

void menu();
int failure();
bool is_Full(List& list);
bool is_Empty(List& list);
int find(List& list, type search);
void init_list(List& list);
void push(List& list);
void output_list(List list);
void remove(List& list);
