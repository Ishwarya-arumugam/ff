     #include<stdio.h>
     #include<conio.h>
     int main()
     {
      long int  a,c=1,i;
     clrscr();
     printf("\nEnter the number to find factorial");
     scanf("%ld",&a);
     if(a>0)
     {
     for(i=1;i<=a;++i)
     {
     c*=i;
     }
     printf(" the value is %ld",c);
     }
     else
     {
     printf("no value");
     }
     getch();
     return 0;
     }


