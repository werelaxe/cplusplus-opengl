#include<gl\glut.h>

float WinWid=400.0;//Ширина окна
float WinHei=400.0;//Высота окна

void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
		for(float i=-WinWid/2; i<=WinWid/2; i+=20.0)
		{
			glVertex2f(i, -WinHei/2);
			glVertex2f(i, WinHei/2);
		}
		for(float i=-WinHei/2; i<=WinHei/2; i+=20.0)
		{
			glVertex2f(-WinWid/2, i);
			glVertex2f(WinWid/2, i);
		}
	glEnd();
	glFlush();
}

void Initialize()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-WinWid/2, WinWid/2, -WinHei/2, WinHei/2, -200.0, 200.0);
	glMatrixMode(GL_MODELVIEW);
	//glTranslatef(50.0, 0.0, 0.0);//Перемещение
	glScalef(0.9, 0.9, 1.0);//Масштабирование
	glRotatef(15, 2.0, 0.0, -1.0);//Вращение
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(WinWid, WinHei);
	glutInitWindowPosition(100, 200);
	glutCreateWindow("Lesson 02");
	glutDisplayFunc(Draw);
	Initialize();
	glutMainLoop();
	return 0;
}