#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include <math.h>

float xRotated = 90.0, yRotated = 0.0, zRotated = 0.0,qx,qz;
//----------------------keyboard--------------------------
void keyboard(unsigned char Key,int x,int y)
    {
   if(Key=='w'){qz-=0.1;} if(Key=='s'){qz+=0.1;}//forward and back   moving
   if(Key=='a'){qx-=0.1;} if(Key=='d'){qx+=0.1;}//left and right    moving

    glutPostRedisplay();
    }
void onMouseClick(int button, int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {

        qx-=0.1;
    }
}

//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}
void planetmap()
{
    //planet1
 glPushMatrix();
 glColor3f(0.94, 0.86, 0.51);

 glTranslatef(-5,3,0.1);
glRotatef(zRotated, 0,0,1);
 glutSolidSphere(1.6,800,90);
 glPopMatrix();


 // the ring of the planet
 glPushMatrix();
glColor3f(0.94, 0.86, 0.51);
 glRotatef(60,1,0,0);
glTranslatef(-4.8,2,-2);

glRotatef    (zRotated, 0,0,1);


 glutSolidTorus(0.1,2.,200,30);

 glPopMatrix();






//--------stars------------//


 // small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-5, 1, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();

// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-3.4, 1.5, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();

// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-2.5,2.9, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();



// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-3,4, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();




// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-3.7,4.6, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();



// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-5,5, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();


// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-6.5,5., 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();

// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-7.6,4.7, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();


// small star
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (-8,4, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();



//---------------------------//

//planet1
 glPushMatrix();
glColor3f(1.0, 0.33, 0.64);
 glTranslatef(-11,-5,1);
 glutSolidSphere(5.4,200,30);
 glPopMatrix();





 //1
 glPushMatrix();
glColor3f(1.0, 0.33, 0.64);
 glTranslatef(-6.4,-3,1);
 glutSolidSphere(0.8,200,30);
 glPopMatrix();


 //2
 glPushMatrix();
glColor3f(1.0, 0.33, 0.64);
 glTranslatef(-7.4,-1,1);
 glutSolidSphere(0.4,200,30);
 glPopMatrix();




 //3
 glPushMatrix();
glColor3f(1.0, 0.33, 0.64);
 glTranslatef(-6.3,-4,0);
 glutSolidSphere(0.6,200,30);
 glPopMatrix();


  //4
 glPushMatrix();
glColor3f(1.0, 0.33, 0.64);
 glTranslatef(-9,0,1.6);
 glutSolidSphere(0.6,200,30);
 glPopMatrix();





//------------------------//


//orange planet
 glPushMatrix();
 glColor3f(1.0, 0.55, 0.0);
 glTranslatef(6,2.5,1);

 glutSolidSphere(1.6,800,90);
 glPopMatrix();


 //---------stars--------//




// small star 1
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (5.5,0.2, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();

// small star 2
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (6.7,0.2, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();


// small star 3
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (4.5,1, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();

// small star 4
glColor3f (1.0, 1.0, 0.19);
glPushMatrix ();
glTranslatef    (4,2, 0.0);
glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);


glutSolidSphere (0.1, 5, 30);
glPopMatrix ();


//----------------------//
//green planet
 glPushMatrix();
 glColor3f(0.67, 0.88, 0.69);
 glTranslatef(6,-18,-3);
 glutSolidSphere(16,100,400);
 glPopMatrix();


//--------------------//
//cone1
glColor3f (1,1, 1);
     glPushMatrix ();

       glTranslatef    (3,3,1);//to change position on screen
       glRotatef       (70, 2,0,-700);
       glRotatef       (0, 1,0,0);// points where

       glutSolidCone(0.1,3, 50,50);
    glPopMatrix ();


//cone2
glColor3f (1,1, 1);
     glPushMatrix ();
       glTranslatef    (-1,4,1);//to change position on screen
       glRotatef       (70, 7,0,-700);
       glRotatef       (0,1,0,0);// points where
       glutSolidCone(0.1,3, 50,50);
    glPopMatrix ();
//----------------//
//purple planet
 glPushMatrix();
 glColor3f(0.96, 0.73, 1.01);

  glRotatef(70, 2,0,-700);
 glTranslatef(2,-1,-5);



 glutSolidSphere(1.9,900,100);
 glPopMatrix();



//1
  glPushMatrix();
glColor3f(1.0, 0.0, 0.25);
 glTranslatef(1,-1.5,-4.5);
 glutSolidSphere(0.5,200,30);
 glPopMatrix();
//1
  glPushMatrix();
glColor3f(1.0, 0.0, 0.25);
 glTranslatef(-1,-1.5,-4);
 glutSolidSphere(0.5,200,30);
 glPopMatrix();

//3
 glPushMatrix();
glColor3f(1.0, 0.0, 0.25);
 glTranslatef(-1.4,-1.2,-5);
 glutSolidSphere(0.5,200,30);
 glPopMatrix();





}
void rocket()
{
    //cube//
    glLoadIdentity();

     glTranslatef(2+qx, -1, -5.5+qz);
    glScalef(0.5,2,0.5);
   glBegin(GL_QUADS);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f( 0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f,  0.5f);
      glVertex3f( 0.5f, 0.5f,  0.5f);



      glVertex3f( 0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f( 0.5f, -0.5f, -0.5f);



      glVertex3f( 0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glVertex3f( 0.5f, -0.5f, 0.5f);



      glVertex3f( 0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f( 0.5f,  0.5f, -0.5f);



      glVertex3f(-0.5f,  0.5f,  0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);



      glVertex3f(0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();
//---------------------//
    glPushMatrix();
    glTranslatef(2+qx,0.7,-5.5+qz);
    glScalef(0.8,0.2,0.5);
    glBegin(GL_TRIANGLES);

      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f( 0.0f, 1.0f, 0.0f);

      glVertex3f(-1.0f, -1.0f, 1.0f);

      glVertex3f(1.0f, -1.0f, 1.0f);

      // Right

      glVertex3f(0.0f, 1.0f, 0.0f);

      glVertex3f(1.0f, -1.0f, 1.0f);

      glVertex3f(1.0f, -1.0f, -1.0f);

      // Back

      glVertex3f(0.0f, 1.0f, 0.0f);

      glVertex3f(1.0f, -1.0f, -1.0f);

      glVertex3f(-1.0f, -1.0f, -1.0f);

      // Left

      glVertex3f( 0.0f, 1.0f, 0.0f);

      glVertex3f(-1.0f,-1.0f,-1.0f);

      glVertex3f(-1.0f,-1.0f, 1.0f);


   glEnd();   // Done drawing the pyramid


   //--------------------//



//wings//
 //Upper//
//1
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5+qx,0,-5.5+qz);
    glScalef(3,0.3,0.5);
    glutSolidCube(0.6);

//2
    glPopMatrix();
     glPopMatrix();
    glPushMatrix();
    glTranslatef(0.5+qx,0,-5.5+qz);
    glScalef(3,0.3,0.5);
    glutSolidCube(0.6);

//lower
    glPopMatrix();
//3
     glPushMatrix();
    glTranslatef(3.3+qx,-1,-5.5+qz);
    glScalef(2,0.3,0.5);
    glutSolidCube(0.6);

//4
    glPopMatrix();
     glPopMatrix();
    glPushMatrix();
    glTranslatef(0.7+qx,-1,-5.5+qz);
    glScalef(2,0.3,0.5);
    glutSolidCube(0.6);


    glPopMatrix();
}
//------------------------------  display   -------------------------------

void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef    (0.0, 0.0, -15.0);

	//Your code is written here
    planetmap();


    rocket();

    glutSwapBuffers();

}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); // buffer mode
    glutInitWindowSize     (1000,1000);
    glutInitWindowPosition (95,50);
    glutCreateWindow       ("20101794");

    glClearColor (0.0, 0.0, 0.0, 0.0);

    glutDisplayFunc (display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(onMouseClick);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0.03, 0.27, 0.49,0);
    texture(); // Lighting and textures


    glutMainLoop();
}

