#include <GL/glut.h>
float angle = 0;///�ŧi global �����ܼ� angle
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///�M�I��
    glPushMatrix(); ///�ƥ��x�}
        glTranslatef( 0.6, 0, 0);///�s�[���{���X
        glRotatef(angle, 0, 1, 0);///���� angle ����
        glColor3f(1,1,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///�٭�x�}
    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle, 0, 1, 0);///���� angle ����
        glTranslatef( 0.6, 0, 0);///�s�[���{���X
        glColor3f(1,0,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///�٭�x�}
    glutSwapBuffers();
    angle++;
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);///����idle��,�N���e�e��
    glutMainLoop();
}