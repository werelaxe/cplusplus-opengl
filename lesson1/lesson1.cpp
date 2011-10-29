#include<gl\glut.h>

void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POINTS);
		glVertex2f(0.0, 0.0);
	glEnd();
	glFlush();//только для GLUT_SINGLE
}

void Initialize()
{
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-200.0, 200.0, -200.0, 200.0, -5.0, 5.0);
}

int main(int argc, char** argv)
{
	//Инициализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 200);
	glutCreateWindow("Lesson 01");
	//Регистрация
	glutDisplayFunc(Draw);//Рисование
	Initialize();
	glutMainLoop();
	return 0;
}