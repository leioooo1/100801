#pragma once
#include "task.h"
#include <iostream>
using namespace std;
class downloadFile :
	public task {
public:
	downloadFile();
	~downloadFile();
	virtual void input();
	virtual void display()const;
private:
	char path[100];
	int downloadCount;
};