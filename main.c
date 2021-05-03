 #include<stdlib.h>
#include<GL/glut.h>

static int rot = 0;

void init(void){
	glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void){
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	
	glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
	
	/* chao-- -----------------------------------------------------*/
	//parte 1 maior
	glPushMatrix();
	glTranslatef (-2.5, 0.0, 0.0);
	glScalef (7.0, 0.1, 10.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	//parte 2 menor
	glPushMatrix();
	glTranslatef (4.3, 0.0, 0.0);
	glScalef (2.5, 0.1, 10.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	/* pista --------------------------------------------------------*/
	//pista	
	glPushMatrix();
	glTranslatef (2.02, 0.0, 0.0);
	glScalef (2.0, 0.1, 10.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	// pontos pinta
	glPushMatrix();
	glTranslatef (2.02, 0.15, 4.0);
	glScalef (0.1, 0.05, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (2.02, 0.15, 2.0);
	glScalef (0.1, 0.05, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (2.02, 0.15, 0.0);
	glScalef (0.1, 0.05, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (2.02, 0.15, -2.0);
	glScalef (0.1, 0.05, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (2.02, 0.15, -4.0);
	glScalef (0.1, 0.05, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	// broco final da pista
	glPushMatrix();
	glTranslatef (2.02, 0.15, 5.0);
	glScalef (2.0, 0.2, 0.1);
	glutWireCube (1.0);
	glPopMatrix();
	
	/* Torre  ------------------------------------------------------------------  */ 
	// base
	glPushMatrix();
	GLUquadricObj *p1 = gluNewQuadric();
	//gluQuadricDrawStyle( p,GLU__FILL);
	glTranslatef (-3.0, 0.2, -4.0);
	//glScalef (2.5, 0.1, 8.0);
	glRotatef (-90.0, 1.0, 0.0, 0.0);
	glRotatef (45.0, 0.0, 0.0, 0.5);
	gluCylinder(p1, 0.3, 0.2, 0.9, 4, 5);
	//glutWireCube (1.0);
	glPopMatrix();
	
	//depois base
	glPushMatrix();
	glTranslatef (-3.0, 1.1, -4.0);
	glScalef (0.3, 0.2, 0.3);
	glutWireCube (1.0);
	glPopMatrix();
	
	// parte de cima da base
	glPushMatrix();
	GLUquadricObj *p2 = gluNewQuadric();
	glTranslatef (-3.0, 1.2, -4.0);
	glRotatef (-90.0, 1.0, 0.0, 0.0);
	glRotatef (45.0, 0.0, 0.0, 0.5);
	gluCylinder(p2, 0.2, 0.5, 0.5, 4, 5);
	glPopMatrix();
	
	// antena
	glPushMatrix();
	glTranslatef (-3.0, 1.8, -4.0);
	glScalef (0.08, 0.5, 0.08);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	GLUquadricObj *p3 = gluNewQuadric();
	glTranslatef (-3.0, 2.0, -4.0);
	glRotatef (-90.0, 1.0, 0.0, 0.0);
	glRotatef (45.0, 0.0, 1.0, 0.0);
	gluCylinder(p3, 0.05, 0.2, 0.1, 15, 5);
	glPopMatrix();
	
	/* Prédios  ------------------------------------------------------------------ */  
	//bloco 1
	glPushMatrix();
	glTranslatef (-4.0, 0.5, 2.56);
	glScalef (0.5, 1.0, 1.5);
	glutWireCube (1.0);
	glPopMatrix();
	
	//bloco 2 maior
	glPushMatrix();
	glTranslatef (-4.0, 0.76, 0.78);
	glScalef (1.0, 1.5, 2.0);
	glutWireCube (1.0);
	glPopMatrix();
	
	//bloco 3
	glPushMatrix();
	glTranslatef (-4.0, 0.5, -1.0);
	glScalef (0.5, 1.0, 1.5);
	glutWireCube (1.0);
	glPopMatrix();
	
	//tubos dos blocos menores
	glPushMatrix();
	glTranslatef (-3.0, 0.6, 2.56);
	glScalef (1.5, 0.3, 0.3);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (-3.0, 0.6, -1.0);
	glScalef (1.5, 0.3, 0.3);
	glutWireCube (1.0);
	glPopMatrix();
	// blocos pequenos (base dos tubos)
	glPushMatrix();
	glTranslatef (-2.5, 0.2, -1.0);
	glScalef (0.08, 0.5, 0.08);
	glutWireCube (1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef (-2.5, 0.2, 2.56);
	glScalef (0.08, 0.5, 0.08);
	glutWireCube (1.0);
	glPopMatrix();
	
	
	 
	
	/* Avião  -------------------------------------------------------------------- */  
	// parte da frente(maior)
	glPushMatrix();
	GLUquadricObj *a1 = gluNewQuadric();
	glTranslatef (2.0, 2.0, -3.5);
	glRotatef (45.0, 0.0, 0.0, 1.0);
	gluCylinder(a1, 0.35, 0.2, 0.4, 4, 15);
	glPopMatrix();
	//parte da frente (menor-ponta)
	glPushMatrix();
	GLUquadricObj *a2 = gluNewQuadric();
	glTranslatef (2.0, 2.0, -3.1);
	glRotatef (45.0, 0.0, 0.0, 1.0);
	gluCylinder(a2, 0.2, 0.0, 0.2, 4, 5);
	glPopMatrix();
	
	// parte do meio
	glPushMatrix();
	glTranslatef (2.0, 2.0, -4.0);
	glScalef (0.5, 0.5, 1.0);
	glutSolidCube (1.0);
	glPopMatrix();
	
	// parte de trás
	glPushMatrix();
	GLUquadricObj *a3 = gluNewQuadric();
	glTranslatef (2.0, 2.0, -5.3);
	glRotatef (45.0, 0.0, 0.0, 1.0);
	gluCylinder(a3, 0.1, 0.35, 0.8, 4, 15);
	glPopMatrix();
	
	// Asa direita
	glPushMatrix();
	glTranslatef (2.6, 2.1, -4.0);
	glRotatef (15.0, 0.0, 1.0, 0.0);
	glScalef (1.0, 0.06, 0.3);
	glutSolidCube (1.0);
	glPopMatrix();
	
	// Asa esquerda
	glPushMatrix();
	glTranslatef (1.6, 2.1, -4.0);
	glRotatef (-15.0, 0.0, 1.0, 0.0);
	glScalef (1.0, 0.06, 0.3);
	glutSolidCube (1.0);
	glPopMatrix();
	
	/*  -------------------------------------------------------------------- */  
	
	
	/*  -------------------------------------------------------------------- */ 
	
	
	
	
	glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h){
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef (0.0, 1.0, -10.0);		//	Ajusta a posição 
	glRotatef (35.0, 10.0, 0.0, 0.0);
}
void keyboard(unsigned char key, int x, int y){
	switch (key) {
	case 49:
		rot = (rot + 5) % 360;
		glutPostRedisplay();
	break;
	case 50:
		rot = (rot - 5) % 360;
		glutPostRedisplay();
	break;  
	case 27:                                         // tecla Esc (encerra o programa)
		exit(0);
	break;
	}
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (1400, 700); 
	glutInitWindowPosition (100, 10);
	glutCreateWindow (argv[0]);
	init ();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

