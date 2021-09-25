#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include <math.h>

int c = 0, d = 500, g = 380, h = 970, i = 0, p = 0, q = 300;
GLfloat x = 0.0, y = 0.0;
GLfloat flag = 0, flag2 = 0, flag3 = 0;
int train1, basic1, train2, basic2;
float fl = 0, f2 = 0;

void draw2()
{
	glColor3f(1.0, 0.0, 0.0);
	//	glRasterPos3f(450,950, 0.0);
	char c[100] = "Computer Graphics(UCS505) Mini Project";
	char c1[100] = "TITLE : TRAINS STOPPAGE";

	char c3[100] = "SUBMITTED TO : Dr. Shatrughan Modi";
	char c4[100] = "SUBMITTED BY :";
	char c9[100] = "Priyanshi Tiwari       Roll no. : 101803417";
	char c5[100] = "Kush Gupta             Roll no. : 101803454";
	char c6[100] = "Neetika                Roll no. : 101853024";
	char c7[100] = "PRESS 'S' TO START";
	int i;
	glColor3f(rand() % 3, rand() % 3, rand() % 3);
	glRasterPos3f(400, 900, 0.0);
	for (i = 0; c[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]); // Updates the position
	glColor3f(rand() % 3, rand() % 3, rand() % 3);
	glRasterPos3f(400, 850, 0.0);
	for (i = 0; c1[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c1[i]);
	glColor3f(0.0, 1.0, 0.0);
	glRasterPos3f(300, 670, 0.0);

	for (i = 0; c3[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c3[i]);
	glColor3f(1.0, 1.0, 0.5);
	glRasterPos3f(300, 560, 0.0);


	for (i = 0; c4[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c4[i]);
	glColor3f(1.0, 1.0, 0.5);
	glRasterPos3f(300, 500, 0.0);

	for (i = 0; c9[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c9[i]);
	glColor3f(1.0, 1.0, 0.5);
	glRasterPos3f(300, 440, 0.0);


	for (i = 0; c5[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c5[i]);
	glColor3f(1.0, 1.0, 0.5);
	glRasterPos3f(300, 380, 0.0);

	for (i = 0; c6[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c6[i]);
	glColor3f(rand() % 3, rand() % 3, rand() % 3);
	glRasterPos3f(400, 200, 0.0);

	for (i = 0; c7[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c7[i]);
}
void drawString()
{
	glColor3f(0.0, 0.0, 0.0);
	glRasterPos3f(306, 615, 0.0);
	if (fl == 0)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'K');
	else
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'S');
	glRasterPos3f(806, 415, 0.0);
	if (f2 == 0)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'G');
	else
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'D');


}

void sky()
{

	glBegin(GL_POLYGON);
	glColor3f(0, 0.8, 1);//sky
	glVertex2f(0, 730);
	glVertex2f(999, 730);
	glVertex2f(999, 999);
	glVertex2f(0, 999);
	glEnd();



}


void TRAINS1(int x1, int y1, int c, int d)
{
	int i = 0;

	glBegin(GL_QUADS);
	glColor3f(1, 0.0, 0.0);			 //ENGINE
	glVertex2f(x1, y1);				//length of engine=60;height of engine=30;
	glColor3f(1, 0.0, 0.0);
	glVertex2f(x1 + 60, y1);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(x1 + 60, y1 - 30);
	glColor3f(0, 0.0, 0.0);
	glVertex2f(x1, y1 - 30);
	glEnd();

	while (i < 4)
	{
		glBegin(GL_QUADS);			//BOGIES
		glColor3f(0.0, 0.0, 0.0);		//For right train a=795,b=510
		glVertex2f(c, d);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2f(c + 60, d);
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(c + 60, d - 20);
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(c, d - 20);
		glEnd();
		c += 65;
		i++;
	}

}

void TRAINS2(int x2, int y2, int s, int t)
{
	int r = 0;
	while (r < 4)
	{
		glBegin(GL_QUADS);			//BOGIES
		glColor3f(0.0, 0.0, 1.0);		//For right train a=795,b=510
		glVertex2f(s, t);
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(s - 60, t);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2f(s - 60, t + 20);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2f(s, t + 20);
		glEnd();
		s -= 65;
		r++;

	}



	glBegin(GL_QUADS);
	glColor3f(0, 0.0, 0.0);			 //ENGINE
	glVertex2f(x2, y2);				//length of engine=60;height of engine=30;
	glColor3f(0, 0.0, 1.0);
	glVertex2f(x2 - 60, y2);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(x2 - 60, y2 + 30);
	glColor3f(1, 0.0, 0.0);
	glVertex2f(x2, y2 + 30);
	glEnd();
}


void TRACKS()
{

	sky();
	/* Track */
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0, 500);
	glVertex2f(1000, 500);
	glVertex2f(0, 499);
	glVertex2f(1000, 499);

	glVertex2f(0, 485);
	glVertex2f(1000, 485);
	glVertex2f(0, 486);
	glVertex2f(1000, 486);
	while (c != 1000)
	{
		glVertex2f(c, d);
		glVertex2f(c, d - 15);
		c += 10;
	}
	glEnd();
}

void TRACKS1()
{
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0, 300);
	glVertex2f(1000, 300);
	glVertex2f(0, 299);
	glVertex2f(1000, 299);

	glVertex2f(0, 285);
	glVertex2f(1000, 285);
	glVertex2f(0, 286);
	glVertex2f(1000, 286);
	while (p != 1000)
	{
		glVertex2f(p, q);
		glVertex2f(p, q - 15);
		p += 10;
	}
	glEnd();
}



void myinit()
{

	//background color
	gluOrtho2D(0, 999, 0, 999);
	glPointSize(2.0);
	glLineWidth(2.0);

	basic1 = glGenLists(1);
	glNewList(basic1, GL_COMPILE);
	TRACKS();
	glEndList();

	train1 = glGenLists(1);
	glNewList(train1, GL_COMPILE);
	TRAINS1(730, 520, 795, 510);
	glEndList();

	basic2 = glGenLists(1);
	glNewList(basic2, GL_COMPILE);
	TRACKS1();
	glEndList();

	train2 = glGenLists(1);
	glNewList(train2, GL_COMPILE);
	TRAINS2(270, 288, 205, 288);
	glEndList();

}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.7, 0.0, 0.0);


	glBegin(GL_LINES);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(300, 500);
	glVertex2f(300, 650);
	glVertex2f(301, 500);
	glVertex2f(301, 650);
	glEnd();
	glColor3f(1.0, 1.0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(302, 650);
	glVertex2f(302, 600);
	glVertex2f(330, 625);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.2, 0.2, 0.2);
	glVertex2f(800, 300);
	glVertex2f(800, 450);
	glVertex2f(801, 300);
	glVertex2f(801, 450);
	glVertex2f(802, 300);
	glVertex2f(802, 450);
	glEnd();
	glColor3f(1.0, 1.0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(802, 450);
	glVertex2f(802, 400);
	glVertex2f(830, 425);
	glEnd();


	glPushMatrix();

	glPushMatrix();
	glCallList(basic1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(x, 0.0, 0.0);
	glCallList(train1);
	glPopMatrix();
	drawString();


	if (x > -450)
	{
		x = x - 0.1;
	}

	if (flag == 1)
	{
		if (x > -1099)
		{
			x = x - 0.1;

		}
		else
		{
			if (fl == 1)
				fl = 0;
			else
				fl = 1;
			x = 200;

			flag = 0;
		}

	}
	/*if(flag==0)
	{
		if(x>-150)
		{
			x=x-0.1;
		}
	}*/

	glPopMatrix();
	glutPostRedisplay();

	glPushMatrix();

	glPushMatrix();
	glCallList(basic2);
	glPopMatrix();




	glPushMatrix();
	glTranslatef(y, 0.0, 0.0);
	glCallList(train2);
	glPopMatrix();

	if (y < 550)
	{
		y = y + 0.1;

	}
	if (flag2 == 1)
	{
		if (y < 1099)
		{
			y = y + 0.1;
		}
		else
		{
			if (f2 == 1)
				f2 = 0;
			else
				f2 = 1;
			y = -199;
			flag2 = 0;
		}
	}

	glPopMatrix();
	glutPostRedisplay();

	if (flag3 == 0)
	{
		glColor3f(0.0, 0.0, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f(0, 0);
		glVertex2f(0, 999);
		glVertex2f(999, 999);
		glVertex2f(999, 0);
		glEnd();

	}
	if (flag3 == 0)
	{
		draw2();
	}
	glFlush();
}



void Idle()
{

}
void keb(unsigned char key, int x, int y)
{
	if (key == 'k' || key == 'K')
		flag = 1;
	if (key == 'g' || key == 'G')
		flag2 = 1;
	if (key == 's' || key == 'S')
		flag3 = 1;
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1200, 700);
	glutCreateWindow("TRAINS STOPPAGE");
	myinit();
	glutDisplayFunc(display);
	glutKeyboardFunc(keb);
	glutIdleFunc(Idle);
	glutMainLoop();
}

