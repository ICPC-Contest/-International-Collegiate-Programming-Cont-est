// 任务描述
// 本关任务：给出一个十进制数字 n（0＜n＜1000），把它转换为二进制数。

// 相关知识
// 为了完成本关任务，你需要掌握：1.进制转换原理，2.辗转相除法。

// 编程要求
// 根据提示，在右侧编辑器补充完整代码。

// 测试说明
// Time limit 1000 ms
// Mem limit 32768 kB

// 平台会对你编写的代码进行测试：

// 测试输入：1
// 预期输出：
// 1

// 测试输入：2
// 预期输出：
// 10

// 测试输入：3
// 预期输出：
// 11








//答案：
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,i;
    int s[10];    //n最大为1000
    while(cin>>n){
        for(i=0;n!=0;i++,n/=2)
            s[i]=n%2;
        for(i--;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}

