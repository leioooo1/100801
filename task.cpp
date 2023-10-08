#include "task.h"
task::task()
{
	strcpy_s(taskType,100, " ");
}

task::task(const char * type)
{
	strcpy_s(taskType,100, type);
}


task::~task()
{
}

void task::input()
{
}

void task::display() const
{
}
