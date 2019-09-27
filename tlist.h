#pragma once
/************************************************************************************************************************
Name: Daniel Caballero   Z#:23439643
Course: COP3530
Professor: Dr. Lofton Bullard
Due Date: 05/25/2018    Due Time: 11:59pm
Total Points: 25
Assignment 1: dynamic_array_driver.cpp

Description:
**************************************************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#ifndef TLIST_H
#define TLIST_H

using namespace std;

class tlist
{
public:

	tlist();
	~tlist();
	void Insert(string &);
	void Insert_inorder(string );
	bool Is_Full() { return count == capacity; };
	bool Is_Empty() { return count == 0; };
	void Print();
	int Search(const string &);
	void Remove(const string &);
private:
	int count;
	int capacity;
	string *DB;
};

#endif