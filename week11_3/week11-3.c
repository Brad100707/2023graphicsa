#include <windows.h>

///�n���� setting-compiler ��linker setting�[�Wwinmm

int main()
{
    PlaySoundA("do_re_mi\\do,wav", NULL, SND_SYNC);
    PlaySoundA("do_re_mi\\do,wav", NULL, SND_SYNC);
    PlaySoundA("do_re_mi\\do,wav", NULL, SND_SYNC);
    PlaySoundA("do_re_mi\\re,wav", NULL, SND_SYNC);
}
