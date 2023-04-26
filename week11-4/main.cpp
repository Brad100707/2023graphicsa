#ifdef _APPLE
#else
#include <GL/glut.h>
#endif

#include "CMP3_MCI.h"

int main(int argc, char *argv[])
CMP3_MCI_myMp3;
{
    char filename[] = "C:/Users/Administrator/Desktop/do_re_mi/suzumi.mp3" ///這個/跟這個\\是一樣的AKA一條線跟兩條一樣
    myMp3.Load(filename);
    myMp3.Play(); ///播放
}
