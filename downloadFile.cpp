
#include "downloadFile.h"

downloadFile::downloadFile() :task("下载文件")
{
	downloadCount = 0;
	path[0] = 0;
}

downloadFile::~downloadFile()
{
}

void downloadFile::input()
{
	cout << "请输入下载的文件路径" << endl;
	cin >> path;
	cout << "请输入下载的文件次数" << endl;
	cin >> downloadCount;
}

void downloadFile::display() const
{
	cout << "任务类型:下载文件" << "\t"
		<< "保存路径:" << path << "\t"
		<< "下载次数:" << downloadCount << "次" << endl;
}