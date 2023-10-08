#include "downloadFile.h"
#include "getFileList.h"
#include "uploadFile.h"
#include "task.h"
#include <iostream>
using namespace std;

int main() {
    const int maxTasks = 100; // 可以处理的最大任务数量
    task* tasks[maxTasks]; // 使用数组来存储任务指针
    int numTasks = 0; // 当前任务数量

    while (true) {
        cout << "菜单：" << endl;
        cout << "1、添加任务" << endl;
        cout << "2、显示所有任务" << endl;
        cout << "3、退出系统" << endl;
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            if (numTasks < maxTasks) {
                cout << "请选择任务类型：" << endl;
                cout << "1. 获取文件列表" << endl;
                cout << "2. 上传文件" << endl;
                cout << "3. 下载文件" << endl;
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
                    cout << "无效的选择" << endl;
                    break;
                }

                if (newTask) {
                    newTask->input();
                    tasks[numTasks++] = newTask;
                    cout << "任务已添加" << endl;
                }
            }
            else {
                cout << "任务数量已达到最大限制，无法添加更多任务。" << endl;
            }
            break;
        case 2:
            cout << "显示所有任务：" << endl;
            for (int i = 0; i < numTasks; ++i) {
                tasks[i]->display();
                cout << endl;
            }
            break;

        case 3:
            cout << "退出系统" << endl;
            // 清理任务内存
            for (int i = 0; i < numTasks; ++i) {
                delete tasks[i];
            }
            return 0;
        default:
            cout << "无效的选择，请重新输入。" << endl;
            break;
        }
    }
    return 0;
}


