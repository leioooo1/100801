#include "getFileList.h"

getFileList::getFileList()
{
	strcpy_s(taskType,100, "��ȡ�ļ��б�");
	strcpy_s(dir,100, "");
}


getFileList::~getFileList()
{
}

void getFileList::input()
{
	cout << "�������ļ��б��Ŀ¼" << endl;
	cin >> dir;
	
}


void getFileList::display() const
{
	cout << "��������: " << taskType << endl;
	cout << "�ļ��б��Ŀ¼: " << dir << endl;
}