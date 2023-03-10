
#include <GL/glut.h>
float angle = 0;
void display()
{
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清理背景不清會有殘影

	glPushMatrix();///備份矩陣
        glRotatef(angle,0,1,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();/// 還原矩陣
	glutSwapBuffers();
	angle++;///把角度++
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutIdleFunc(display);///清畫面
    glutMainLoop();
}
