#include <GL/glut.h>
float angle = 0;
void display()
{
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M�z�I�����M�|���ݼv

	glColor3f(0,1,0);
	glPushMatrix();///�ƥ��x�}
        glutSolidCube(0.5);

        glPushMatrix();
            glTranslatef(0.25, 0.25, 0);///step3�����S�@�V�k�Wx,y�U0.25
            glRotatef(angle, 0, 0, 1);///step2���
            glTranslatef(0.25,0.25,0.25);///step1���������त��

            glColor3f(1,0,0);
            glutSolidCube(0.5);
    glPopMatrix();/// �٭�x�}
	glutSwapBuffers();
	angle++;///�⨤��++
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutIdleFunc(display);///�M�e��
    glutMainLoop();
}
