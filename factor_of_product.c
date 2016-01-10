#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x=0,i,t[10];
    long long int ans[100];
    //print no of test cases
    scanf("%d",&i);
    while(x<i)
    {
        int j=0;
        long long int num;
                //print no of digits
        scanf("%d",&t[x]);
        ans[x]=1;
        while(j<t[x])
        {
            //print every digit
            scanf("%d",&num);
            ans[x]=ans[x]*num;
            j++;
        }
        x++;
    }
    int k=0;
    while(k<i)
    {
        int m=2,count=0;
        while(m<=(ans[k]/2))
        {
            if(ans[k]%m==0)
            count++;
            m++;
        }
    printf(" \n %d \n",(count+2));
    k++;
    }
    getch();
}
