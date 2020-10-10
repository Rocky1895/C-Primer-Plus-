#include <stdio.h>
int main(void)
{
    int dogs;
    
    printf("你有多少条狗狗?\n");
    scanf("%d", &dogs);
    /*scanf输入变量*/
    printf("所以你有 %d 条狗!\n", dogs);
    
    return 0;
}
