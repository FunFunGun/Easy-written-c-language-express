#include <stdio.h>

void print_value(int n);

int main()
{
    int n;
    
    do
    {
        printf("값을 입력하시오(종료는 음수) :");
        scanf("%d", &n);
        
        if(n < 0)
            break;
            
    }while(1);
   
    return 0;
}

void print_value(int n)
{
    for(int i = 0; i < n; i++)
        printf("*");
}
