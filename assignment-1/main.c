// number of words in string using cmd line argument

#include<windows.h>
#include<stdio.h>

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE preinstance, LPSTR lpstr, int cmdshow){
    char ch[100];
    char name[20];
    sprintf(name, "%s", lpstr);
    int c = 0, i = 0;
    while(name[i] != '\0'){
        if(name[i] == ' ')
            c++;
        i++;
    }
    printf("Number of words : %d", c);
    sprintf(ch, "%d", c);
    MessageBox(0, ch, "Word Counter", MB_OKCANCEL);
    return 0;
}
