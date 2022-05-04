#include <Windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE preInstance, LPSTR lpstr, int cmdshow) {
    char c[100], a[100];
    int arr[10], sum = 0;
    sprintf(a, "%s", lpstr);
    for(int i = 0; i < strlen(a) && i < 10; i++) {
        arr[i] = a[i] -48;
    }
    for(int i = 0; i < strlen(a) - 1; i++) {
        sum += arr[i];
    }
    sprintf(c, "%d", sum);
    printf("Sum = %d", sum);
    MessageBox(0, c, "SUM COUNTER", MB_OK);
}
