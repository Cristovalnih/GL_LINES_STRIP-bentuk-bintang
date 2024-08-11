#include <GL/glut.h>

#include <stdlib.h>

void drawLineStrip(void){
	   glClear(GL_COLOR_BUFFER_BIT);
       glBegin(GL_LINE_STRIP);
	   //bawah kanan 
       glVertex2i(0, -200);
       //sisi kanan bagian bawah
       glVertex2i(15, -15);
       //sisi titik kanan 
       glVertex2i(150, 0);
       //atas bagian kanan
       glVertex2i(15, 15);
       //titik atas
       glVertex2i(0, 200);
       //sisi kiri atas
       glVertex2i(-15, 15);
   		//sisi titik kiri 
       glVertex2i(-150,0);
        //sisi kiri bagian bawah
       glVertex2i(-15, -15);
        //bawah kiri 
       glVertex2i(0, -200);
       glEnd();
       
       glFlush();
}

int main (int argc, char **argv) {
       glutInit(&argc, argv);
      
       glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
       glutInitWindowPosition(100,100);
       glutInitWindowSize(320,240);

       glutCreateWindow("Grafika GLUT");
       gluOrtho2D(-320.,320.,-320.,320.);
       glutDisplayFunc(drawLineStrip);
       glutMainLoop();
}
