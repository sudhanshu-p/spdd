//hinstance in msg box

#include<windows.h>
#include<stdio.h>

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE preinstance, LPSTR lpstr, int cmdshow){
    char ch[100];
    sprintf(ch, "%d", hinstance);
    printf("hinstance :%d", hinstance);
    MessageBox(0, ch, "hinstance value", MB_OKCANCEL);
    return 0;
}
