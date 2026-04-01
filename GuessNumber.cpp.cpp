#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand((unsigned int)time(NULL));

    int num = rand() % 100 + 1;

    int val = 0;

    cout << "《猜数字游戏》" << endl;
    cout << "系统已生成 1~100 的随机数字，请开始猜：" << endl;

    while (true) {
        cin >> val;

        if (val > num) {
            cout << "猜大了" << endl;
        } else if (val < num) {
            cout << "猜小了" << endl;
        } else {
            cout << "恭喜你，猜对了！数字是：" << num << endl;
            break;
        }
    }

    return 0;
}
