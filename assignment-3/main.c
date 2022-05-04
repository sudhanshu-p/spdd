// write a windows program to calculate factorial of number using cmd line arg
#include<windows.h>
#include<stdio.h>
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE preinstance, LPSTR lpstr, int cmdshow){
    char ch[100];
    int n, fact;
    n = atoi(lpstr);
    fact = n;
    if(n == 0){
        fact = 1;
        printf("Factorial of %d :%d" ,n ,fact);
        sprintf(ch, "%d", fact);
        MessageBox(0, ch, "Factorial", MB_OKCANCEL);
    }
    else{
        for(int i = (n - 1); i >= 1; i--){
            fact = fact * i;
        }
        printf("Factorial of %d :%d" ,n ,fact);
        sprintf(ch, "%d", fact);
        MessageBox(0, ch, "Factorial", MB_OK);
    }
    return 0;
}
