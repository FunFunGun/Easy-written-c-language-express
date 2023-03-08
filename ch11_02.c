#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main()
{
    int sum = 0;
    int diff = 0;
    
    get_sum_diff(100,200,&sum,&diff);
    
    printf("원소들의 합=%d", sum);
    printf("원소들의 차=%d", diff);
    
    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x+y;
    
    if(x>y)
        *p_diff = x-y;
        
    else
        *p_diff = y-x;
}
