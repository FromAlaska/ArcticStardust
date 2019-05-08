
#include <GL/glut.h>
#include <stdlib.h>

//#define GLfloat float

void displayMe(void)
{
    GLfloat vertices[3][3] = {{0.0,0.0,0.0}, {25.0,50.0,0.0}, {50.0,0.0,0.0}};

    GLfloat p[3] = {7.5,5.0,0.0};

    int j, k;

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        // glVertex3f(0.5, 0.0, 0.5);
        // glVertex3f(0.5, 0.0, 0.0);
        // glVertex3f(0.0, 0.5, 0.0);
        // glVertex3f(0.0, 0.0, 0.5);
        glVertex3f(0.0,0.0,0.0);
        glVertex3f(25.0,50.0,0.0);
        glVertex3f(50.0,0.0,0.0);

        for(k = 0; k < 5000; ++k) {
            j=rand()%3;
            p[0] = (p[0] + vertices[j][0])/2;
            p[1] = (p[1] + vertices[j][1])/2;

            glVertex3fv(p);
        }
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("ArcticStardust");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}