#include <stdio.h>
#include <windows.h>

int var1;
int main()
{
    system("title cg Upscale");
    printf("1. 1080p 18mbit\n");
    printf("2. 2k 25mbit\n");
    scanf_s("%i", &var1);
    switch (var1)
    {
    case 1: system("ffmpeg.exe -threads 0  -hwaccel auto -i ""cginput.mp4"" -r 60.0 -s 1920x1080 -c:v h264_amf -b:v 18000k -quality quality -profile:v high -level 5.1 -filter_complex ""[0:v]setpts=1.0*PTS[out]"" -map ""[out]"" -c:a aac -ar 48k -b:a 320k -filter:a ""atempo=1.0"" -map a:0 -pix_fmt yuv420p -sws_flags lanczos -y ""cgoutput.mp4"""); break;
    case 2: system("ffmpeg.exe -threads 0  -hwaccel auto -i ""cginput.mp4"" -r 60.0 -s 2560x1440 -c:v h264_amf -b:v 25000k -quality quality -profile:v high -level 5.1 -filter_complex ""[0:v]setpts=1.0*PTS[out]"" -map ""[out]"" -c:a aac -ar 48k -b:a 320k -filter:a ""atempo=1.0"" -map a:0 -pix_fmt yuv420p -sws_flags lanczos -y ""cgoutput.mp4"""); break;
    }
}
