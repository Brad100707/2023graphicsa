#include <stdio.h>
int main()
{
    FILE * fin = fopen("file.txt", "r");

    char line[100];
    fscanf(fin, "%s", line);
    printf("�qfile.txtŪ��F: %s\n", line);

    ///�����J��Ů�|�_���ҥH�b�[�@��
    fscanf(fin ,"%s", line);
    printf("�qfile.txtŪ��F: %s\n", line);
}
