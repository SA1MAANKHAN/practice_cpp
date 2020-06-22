#include<iostream>
#include<windows.h>
#include<mmsystem.h>
int main()
{
    PlaySoundA(TEXT("D:\\project\\Boing-sound.wav"),NULL,SND_SYNC);
    return 0;

}
