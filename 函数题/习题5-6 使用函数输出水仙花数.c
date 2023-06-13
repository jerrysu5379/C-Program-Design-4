#include <stdio.h>
#include <math.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number ){
    int n=0,t,sum=0;
    t=number;
    while (t!=0)
    {
        t/=10;
        n++;
    }
    t=number;
    while (t!=0)
    {
        int dig=t%10;
        sum+=pow(dig,n);
        t/=10;
    }
    if(sum==number) return 1;
    else return 0;
}
void PrintN( int m, int n ){
    for(int i=m+1;i<n;i++){
        if(narcissistic(i)) printf("%d\n",i);
    }
}