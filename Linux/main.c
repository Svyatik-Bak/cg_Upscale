#include <stdio.h>

int var1;
int main()
{
    printf("1. 1080p 18mbit\n");
    printf("2. 2k 25mbit\n");
    scanf("%i", &var1);
    switch (var1)
    {
    case 1: system("ffmpeg -i cginput.mp4 -c:v libx264 -s 1920x1080 -filter:v fps=60 -b:v 18000k -c:a copy cgoutput.mp4"); break;
    case 2: system("ffmpeg -i cginput.mp4 -c:v libx264 -s 2560x1440 -filter:v fps=60 -b:v 25000k -c:a copy cgoutput.mp4"); break;
    }
}
