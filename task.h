#pragma once
#include <string.h>
class task {
public:
	task();
	task(const char * type);
	~task();
	virtual void input();
	virtual void display()const;
protected:
	char taskType[100];
};