
#include "uploadFile.h"
uploadFile::uploadFile():task("�ϴ��ļ�")
{
	uploader[0] = 0;
	fileName[0] = 0;
}


uploadFile::~uploadFile()
{

}

void uploadFile::input()
{
	cout << "�������ļ���" << endl;
	cin >> fileName;
	cout << "�������ϴ���" << endl;
	cin >> uploader;
}

void uploadFile::display() const
{
	cout << "��������: " << taskType << endl;
	cout << "�ļ���: " << fileName << endl;
	cout << "�ϴ���: " << uploader << endl;
}