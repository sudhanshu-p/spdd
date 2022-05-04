#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE preInstance, LPSTR lPstr, int cmdshow) {
    int sum=0, i,j,count=0;
    char str[50];
    int nums[50];
    sprintf(str,"%s",lPstr);
    for(i=0; i<strlen(str); i++) {
        if(str[i]==' ') {}
        else{
            nums[count] = str[i] - '0';
            count++;
        }
    }
    for( j=0; j<count; j++) {
        sum=sum+nums[j];
    }
    sprintf(str,"%d",sum);
    MessageBox(0,str,"Sum", MB_OKCANCEL);
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE preInstance, LPSTR lPstr, int cmdshow) {
    int num, res=1, i;
    char a[50];
    num=atoi(lPstr);


    for(i=1 ; i<=num; i++)
    {
        res=res*i;
    }
    printf("Factorial is %d\n",res);
    sprintf(a,"%d",res);
    MessageBox(0,a,"HINSTANCE ", MB_OKCANCEL);


    return 0;
}
