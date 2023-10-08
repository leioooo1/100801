#include "getFileList.h"

getFileList::getFileList()
{
	strcpy_s(taskType,100, "获取文件列表");
	strcpy_s(dir,100, "");
}


getFileList::~getFileList()
{
}

void getFileList::input()
{
	cout << "请输入文件列表的目录" << endl;
	cin >> dir;
	
}


void getFileList::display() const
{
	cout << "任务类型: " << taskType << endl;
	cout << "文件列表的目录: " << dir << endl;
}