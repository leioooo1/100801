
#include "downloadFile.h"

downloadFile::downloadFile() :task("�����ļ�")
{
	downloadCount = 0;
	path[0] = 0;
}

downloadFile::~downloadFile()
{
}

void downloadFile::input()
{
	cout << "���������ص��ļ�·��" << endl;
	cin >> path;
	cout << "���������ص��ļ�����" << endl;
	cin >> downloadCount;
}

void downloadFile::display() const
{
	cout << "��������:�����ļ�" << "\t"
		<< "����·��:" << path << "\t"
		<< "���ش���:" << downloadCount << "��" << endl;
}