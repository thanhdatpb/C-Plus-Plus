#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int demchucai(char *str)
{
    int i=0,d=0;
    while(str[i]!=0){
                    if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
                    d++;
                    i++;
    }
    return d;
}
 
int demchuso(char *str)
{
    int i=0,d=0;
    while(str[i]!=0){
                    if (str[i]>='0' && str[i]<='9')
                    d++;
                    i++;
    }
return d;
}
 
int main()
{
    char s[100];
    printf("Nhap xau:");
    gets(s);
    printf("\nSo chu cai la :%d",demchucai(s));
    printf("\nSo chu so la :%d",demchuso(s));
    getch();
    return 0;
}
