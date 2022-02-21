#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int num; //declaration of variables
        scanf("%d\n",&num);
        
        if(num%10==0)
        {
            printf("0\n");
        }
        else if(num%10==5)
        {
            printf("1\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
//code by bhumika nayak