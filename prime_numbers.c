#include<stdio.h>
#include<stdbool.h>
void main(void)
{
    int number1,number2;
    printf("please Input number 1 : ");
    scanf("%d",&number1);
    printf("please Input number 2: ");
    scanf("%d",&number2);
    if(number1>number2)
    {
        number1--;
       for (int i=number1;i>number2;i--)
       {
           bool signal=true;
           for(int j=2;j<i;j++)
           {
               if (i%j==0)
               {
                   signal=false;

               }

           }
           if (signal==true)
            printf("%d\n",i);

       }
    }
    if (number1<number2)
    {
        number1++;
        if (number1==1)
            number1++;
          for (int i=number1;i<number2;i++)
       {
           bool signal=true;
           for(int j=2;j<i;j++)
           {
               if (i%j==0)
               {
                   signal=false;
               }
           }
            if (signal==true)
                printf("%d\n",i);
        }
    }
    if (number1==number2)
    {
        if (number1==0 || number1 == 1)
        {
            printf("[%d] is not prime",number1);
        }
        else if (number1==2)
            printf("[2] is prime number");
        else
        {
            bool signal=true;
            for(int i=2;i<number1;i++)
            {
                if (number1%i==0)
                    signal=false;
            }
            if (signal==true)
                printf("[%d] is prime number",number1);
        }

    }

}