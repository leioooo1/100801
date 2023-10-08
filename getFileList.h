#pragma once
#include "task.h"
#include <iostream>
using namespace std;
class getFileList :
	public task {
public:
	getFileList();
	~getFileList();
	virtual void input();
	virtual void display()const;
private:
	char dir[100];
};
