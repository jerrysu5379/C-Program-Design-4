#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

/* 请在这里填写答案 */
void CharPyramid( int n, char ch){
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++) printf(" ");
        for(int k=0;k<=i;k++) printf("%c ",ch);
        printf("\n");
    }
}