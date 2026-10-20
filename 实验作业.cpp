#include <stdio.h>

int main(void)
{
    int a, b;         // 定义两个参与运算的整数
    char op;          // 定义字符变量，存放运算符 + - * / %

    // 读取输入，格式如5%2，数字和运算符之间没有空格
    // %d读第一个数，%c读运算符，%d读第二个数
    scanf("%d%c%d", &a, &op, &b);

    int res;          // 保存运算结果

    // 根据运算符op选择执行哪一段代码
    switch(op)
    {
        case '+':            // 如果运算符是加号
            res = a + b;     // 做加法
            break;           // 跳出switch，防止case穿透

        case '-':            // 如果运算符是减号
            res = a - b;     // 做减法
            break;

        case '*':            // 如果运算符是乘号
            res = a * b;     // 做乘法
            break;

        case '/':            // 如果运算符是除号，整数除法
            res = a / b;
            break;

        case '%':            // 如果运算符是求余符号
            res = a % b;     // 求余数
            break;

        default:             // 上面都不匹配，非法运算符
            res = 0;
            break;
    }

    // 输出格式：原样输出表达式=结果，op变量自带%，不用写%%
    printf("%d%c%d=%d\n", a, op, b, res);

    return 0;
}