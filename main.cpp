#include "downloadFile.h"
#include "getFileList.h"
#include "uploadFile.h"
#include "task.h"
#include <iostream>
using namespace std;

int main() {
    const int maxTasks = 100; // ���Դ���������������
    task* tasks[maxTasks]; // ʹ���������洢����ָ��
    int numTasks = 0; // ��ǰ��������

    while (true) {
        cout << "�˵���" << endl;
        cout << "1���������" << endl;
        cout << "2����ʾ��������" << endl;
        cout << "3���˳�ϵͳ" << endl;
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            if (numTasks < maxTasks) {
                cout << "��ѡ���������ͣ�" << endl;
                cout << "1. ��ȡ�ļ��б�" << endl;
                cout << "2. �ϴ��ļ�" << endl;
                cout << "3. �����ļ�" << endl;
                int taskChoice;
                cin >> taskChoice;

                task* newTask = nullptr;
                switch (taskChoice) {
                case 1:
                    newTask = new getFileList;
                    break;

                case 2:
                    newTask = new uploadFile;
                    break;

                case 3:
                    newTask = new downloadFile;
                    break;

                default:
                    cout << "��Ч��ѡ��" << endl;
                    break;
                }

                if (newTask) {
                    newTask->input();
                    tasks[numTasks++] = newTask;
                    cout << "���������" << endl;
                }
            }
            else {
                cout << "���������Ѵﵽ������ƣ��޷���Ӹ�������" << endl;
            }
            break;
        case 2:
            cout << "��ʾ��������" << endl;
            for (int i = 0; i < numTasks; ++i) {
                tasks[i]->display();
                cout << endl;
            }
            break;

        case 3:
            cout << "�˳�ϵͳ" << endl;
            // ���������ڴ�
            for (int i = 0; i < numTasks; ++i) {
                delete tasks[i];
            }
            return 0;
        default:
            cout << "��Ч��ѡ�����������롣" << endl;
            break;
        }
    }
    return 0;
}


