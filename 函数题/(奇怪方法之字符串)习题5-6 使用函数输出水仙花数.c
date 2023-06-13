#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    char str[10010];
    sprintf(str, "%d", number);
    int n = strlen(str);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int digit = str[i] - '0';
        sum += pow(digit, n);
    }
    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}

void PrintN( int m, int n ){
    int count = 0;
    for (int i = m + 1; i < n; i++) {
        if ( narcissistic(i) ) {
            printf("%d\n", i);
            count++;
        }
    }
}