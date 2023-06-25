#include<stdio.h>

int main()
{
    int inputs1, inputs2;

    char c;
    float f;

    scanf("%d %d %f %c", &inputs1, &inputs2, &f, &c);
    printf("%d\n%d\n%0.2f\n%c", inputs1, inputs2, f, c);

    // input % in C method-1

    int a, b;
    char p;
    scanf("%d%c %d%c", &a, &p, &b, &p);
    printf("%d%% %d%%", a, b);

     // input % in C method-2

    int a, b;
    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%", a, b);




    return 0;

}