#pragma once
#include "task.h"
#include <iostream>
using namespace std;
class uploadFile :
	public task {
public:
	uploadFile();
	~uploadFile();
	virtual void input();
	virtual void display()const;
private:
	char uploader[20];
	char fileName[50];
};