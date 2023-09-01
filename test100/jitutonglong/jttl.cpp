// jttl.cpp -- 鸡兔同笼问题
// 输入鸡兔总数，鸡的爪数和兔的爪数
// 输出鸡的数量和兔的数量

#include <iostream>
#include <string>
using namespace std;

int chicken_feet = 2, rabbit_feet = 4; // 鸡爪数，兔子爪数

void calculate_v1(int total, int feet_total);
void calculate_v2(int total, int feet_total);
void calculate_v3(int total, int feet_total);

int main()
{
    int total;                             // 鸡兔总数
    int feet_total;                        // 鸡兔爪数总和
    int chicken_feet = 2, rabbit_feet = 4; // 鸡爪数，兔子爪数

    cout << "鸡爪数:2 , 兔子爪数:4\n";
    cout << "输入鸡兔总数:\n";
    cin >> total;
    cout << "输入鸡兔爪总数:\n";
    cin >> feet_total;

    // 假设法
    calculate_v1(total,feet_total);
    //二元一次方程求解
    calculate_v2(total,feet_total);
    //穷举法
    calculate_v3(total,feet_total);
    return 0;
}

// 假设法
//设全为鸡时，多余的爪数即兔子的爪子，从而得到兔子的总数，继而得到鸡的总数
void calculate_v1(int total, int feet_total)
{
    int chicken = 0, rabbit = 0;
    int other_feet;
    chicken = total;
    other_feet = chicken * chicken_feet;
    if (chicken_feet != feet_total)
    {
        rabbit = (feet_total - other_feet) / (rabbit_feet - chicken_feet);
        chicken = total - rabbit;
    }
    cout << "鸡: " << chicken << "  兔子: " << rabbit << endl;
}

//一元二次方程求解：
//设鸡数为x，兔子数为y，总数为n，爪子总数为m，则：x+y=n,2x+4y=m,解得x=(4n-m)/2,y=n-x.
void calculate_v2(int total, int feet_total)
{
    int chicken = 0, rabbit = 0;
    chicken = (4 * total - feet_total) / 2;
    rabbit = total - chicken;
    if(chicken > 0 && rabbit > 0)
        cout << "鸡: " << chicken << "  兔子: " << rabbit << endl;
}

void calculate_v3(int total, int feet_total)
{
    int chicken = 0, rabbit = 0;
    int i,j;
    for(i = 0; i < total; i++)   //鸡
    {
        for(j = 0; j < total; j++)  //兔子
        {
            if(i + j == total && (2 * i + 4 * j == feet_total))
            {
                chicken = i;
                rabbit = j;
                cout << "鸡: " << chicken << "  兔子: " << rabbit << endl;
                
            }
        }
    }
}