#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0;
void display()
{

    glBegin(GL_POLYGON);
       glVertex2f(-0.140, 0.368);
   glVertex2f(-0.316, 0.268);
   glVertex2f(-0.308, 0.184);
   glVertex2f(-0.216, 0.124);
   glVertex2f(-0.104, 0.124);
   glVertex2f(-0.012, 0.124);
   glVertex2f(0.072, 0.140);
   glVertex2f(0.140, 0.156);
   glVertex2f(0.172, 0.192);
   glVertex2f(0.192, 0.276);
   glVertex2f(0.184, 0.352);
   glVertex2f(0.096, 0.468);
   glVertex2f(-0.036, 0.508);
   glVertex2f(-0.068, 0.512);
   glVertex2f(-0.196, 0.520);
   glVertex2f(-0.228, 0.520);



    glBegin(GL_POLYGON);
       glVertex2f(-0.204, 0.536);
   glVertex2f(-0.204, 0.560);
   glVertex2f(-0.192, 0.628);
   glVertex2f(-0.168, 0.692);
   glVertex2f(-0.132, 0.688);
   glVertex2f(-0.124, 0.676);
   glVertex2f(-0.116, 0.628);
   glVertex2f(-0.116, 0.588);
   glVertex2f(-0.112, 0.496);
    glEnd();


    glBegin(GL_POLYGON);
   glVertex2f(0.012, 0.484);
   glVertex2f(0.020, 0.516);
   glVertex2f(0.048, 0.564);
   glVertex2f(0.068, 0.612);
   glVertex2f(0.124, 0.620);
   glVertex2f(0.132, 0.604);
   glVertex2f(0.132, 0.532);
   glVertex2f(0.132, 0.500);
   glVertex2f(0.132, 0.456);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
   glVertex2f(-0.080, 0.412);
   glVertex2f(-0.084, 0.392);
   glVertex2f(-0.068, 0.384);
   glVertex2f(-0.036, 0.384);
   glVertex2f(-0.024, 0.432);
   glVertex2f(-0.036, 0.448);
   glVertex2f(-0.068, 0.476);
   glVertex2f(-0.092, 0.408);
    glEnd();

	glutSwapBuffers();
}
void mouse(int button, int state, int x,int y)
{
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0;

    if(state == GLUT_DOWN) {
        printf("   glVertex2f(%.3f, %.3f);\n", X, Y);
    }///只要是滑鼠下壓事件就printf不燃活屬彈回也會printf就會印兩次
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);///視窗設500x500
    glutCreateWindow("GLUT Shapes");


    glutDisplayFunc(display);

    glutMouseFunc(mouse);
    glutMainLoop();
}
