#include <GL/glut.h>
float angle = 0;
void display()
{
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M�z�I�����M�|���ݼv


    glutSolidSphere(0.05, 30, 30);///�Ф@��glutSolidSphere�ӻ��U

    glPushMatrix();


        glRotatef(angle, 0, 0, 1);/// step02,�}�l����
        glTranslatef(0.46, -0.05, 0);/// step1��������줤���I,�i�Ф@��glutSolidSphere�ӻ��U
        glutSolidTeapot(0.3);
    glPopMatrix();

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
