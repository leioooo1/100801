
#include "uploadFile.h"
uploadFile::uploadFile():task("上传文件")
{
	uploader[0] = 0;
	fileName[0] = 0;
}


uploadFile::~uploadFile()
{

}

void uploadFile::input()
{
	cout << "请输入文件名" << endl;
	cin >> fileName;
	cout << "请输入上传者" << endl;
	cin >> uploader;
}

void uploadFile::display() const
{
	cout << "任务类型: " << taskType << endl;
	cout << "文件名: " << fileName << endl;
	cout << "上传者: " << uploader << endl;
}