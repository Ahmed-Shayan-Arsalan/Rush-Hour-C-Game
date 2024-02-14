//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;


// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

/*void Taxidisplay()
{
glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
glOrtho(-20,20,-20,20,-1,1);

glEnable(GL_ALPHA_TEST);
glAlphaFunc(GL_EQUAL,1.0);

glPixelZoom(1,1);
glRasterPos2i(-20,-20);
pix[0].draw();

glutSwapBuffers();
glFlush();
}

void inn()
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GLUT-SINGLE | GLUT-RGB);
glLoadIdentity();
glOrtho(-90.0, 100.0, -15.0, 100.0, 0.0, 1.0);
}*/


int xI = 220, yI = 700;
void drawCar() {

	DrawSquare(xI, yI, 30, colors[RED]);   //drawing the taxi we will use
	glutPostRedisplay();
}
int x2 = 320, y2 = 400;
void drawCar1() {
//Drawing automatic car number one
	DrawSquare(x2, y2, 30, colors[DARK_BLUE]);
	glutPostRedisplay();
}


int x3 = 250, y3 = 430;
void drawCar2() {
//drawing automatic car number 2
DrawSquare(x3, y3, 36, colors[DARK_BLUE]);
glutPostRedisplay();
}


bool flag = true;
void moveCar1() {
	//declaring movement for car number1
	if (x2 > 220 && flag) {
		x2 -= 10;
		cout << "going left";
		if(x2 < 100)
			
			flag = false;

	}
	else if (x2 < 610 && !flag) {
		cout << "go right";
		x2 += 10;
		if (x2 > 900)
			flag = true;
	}

}

void moveCar2() {
	//declaring movement for car number 2
	if (y3 > 10 && flag) {
		y3 -= 10;
		cout << "going down";
		if(y3 < 100)
			
			flag = false;

	}
	else if (y3 < 900 && !flag) {
		cout << "go up";
		y3 += 10;
		if (y3 > 300)
			flag = true;
	}

}



void person1()
{//Drawing first person
	DrawCircle(715 , 550 , 11 , colors[RED]);
	DrawLine(715 , 520 ,  715 , 550 , 5 , colors[BLACK] );
	
}


void person2()
{//drawing second person
	DrawCircle(480 , 610 , 11 , colors[RED]);
	DrawLine(480 , 580 ,  480 , 610 , 5 , colors[BLACK] );
	
}

void person3()
{//drawing third person
	DrawCircle(355 , 250 , 11 , colors[RED]);
	DrawLine(355 , 220 ,  355 , 250 , 5 , colors[BLACK] );
	
}

/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour     all 1s to make it white
	glClear (GL_COLOR_BUFFER_BIT); //Update the csolors
	//Red Square
	DrawSquare(490, 220, 30, colors[BLACK]);
	DrawSquare(490, 190, 30, colors[BLACK]);
	DrawSquare(490, 160, 30, colors[BLACK]);
	DrawSquare(460, 220, 30, colors[BLACK]);
	DrawSquare(430, 220, 30, colors[BLACK]);
	DrawSquare(250, 550, 30, colors[BLACK]);
	DrawSquare(250, 520, 30, colors[BLACK]);
	DrawSquare(250, 490, 30, colors[BLACK]);
	DrawSquare(250, 220, 30, colors[BLACK]);
	DrawSquare(250, 510, 30, colors[BLACK]);
	DrawSquare(250, 540, 30, colors[BLACK]);  //drawing the walls 
	DrawSquare(280, 550, 30, colors[BLACK]);
	DrawSquare(310, 550, 30, colors[BLACK]);
	DrawSquare(610, 370, 30, colors[BLACK]);
	DrawSquare(340, 550, 30, colors[BLACK]);
	DrawSquare(340, 570, 30, colors[BLACK]);
	DrawSquare(340, 590, 30, colors[BLACK]);
	DrawSquare(340, 610, 30, colors[BLACK]);
	DrawSquare(610, 400, 30, colors[BLACK]);
	DrawSquare(580, 370, 30, colors[BLACK]);
	DrawSquare(610, 640, 30, colors[BLACK]);
	DrawSquare(610, 610, 30, colors[BLACK]);
	DrawSquare(580, 610, 30, colors[BLACK]);   //drawing the walls
	DrawSquare(550, 610, 30, colors[BLACK]);
	DrawSquare(520, 610, 30, colors[BLACK]);
	DrawSquare(490, 610, 30, colors[BLACK]);
	DrawSquare(520, 220, 30, colors[BLACK]);
	DrawSquare(580, 220, 30, colors[BLACK]);
	DrawSquare(760, 610, 30, colors[BLACK]);
	DrawSquare(730, 610, 30, colors[BLACK]);
	DrawSquare(700, 610, 30, colors[BLACK]);
	DrawSquare(730, 580, 30, colors[BLACK]);
	DrawSquare(730, 550, 30, colors[BLACK]);
	DrawSquare(730, 520, 30, colors[BLACK]);
	DrawSquare(730, 490, 30, colors[BLACK]);
	DrawSquare(730, 460, 30, colors[BLACK]);
	DrawSquare(730, 590, 30, colors[BLACK]);
	DrawSquare(730, 560, 30, colors[BLACK]);     //drawing the walls
	DrawSquare(730, 530, 30, colors[BLACK]);
	DrawSquare(730, 500, 30, colors[BLACK]);
	DrawSquare(730, 470, 30, colors[BLACK]);
	DrawSquare(730, 610, 30, colors[BLACK]);
	DrawSquare(730, 190, 30, colors[BLACK]);
	DrawSquare(700, 190, 30, colors[BLACK]);
	DrawSquare(760, 190, 30, colors[BLACK]);
	
	DrawSquare(670, 340, 30, colors[GREEN]);
	DrawString(673, 343, "+", colors[YELLOW]);   //drawing the box
	
	DrawSquare(310, 430, 30, colors[GREEN]);
	DrawString(313, 433, "+", colors[YELLOW]);   //box number 2
	
	DrawSquare(670, 160, 30, colors[GREEN]);
	DrawString(673, 163, "+", colors[YELLOW]);     //box number 3
 	
	//Display Score
	DrawString( 50, 800, "Score=", colors[MISTY_ROSE]);
	 
	DrawCircle(325 , 310 , 15 , colors[GREEN]);
	DrawString(313 , 290 , "*", colors[RED]);    //drawing obstacle
	
       DrawCircle(595 , 475 , 15 , colors[GREEN]);
	DrawString(582 , 455 , "*", colors[RED]);    //drawing obstacle

	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//top line
	DrawLine( 220 , 730 ,  820 , 730 , 2 , colors[BLACK] );
	//bot line
	DrawLine( 220 , 130 ,  820 , 130 , 2 , colors[BLACK] );
	DrawLine( 820 , 130 ,  820 , 730 , 2 , colors[BLACK] );
	DrawLine( 790 , 130 ,  790 , 730 , 2 , colors[BLACK] );
	DrawLine( 760 , 130 ,  760 , 730 , 2 , colors[BLACK] );
	DrawLine( 730 , 130 ,  730 , 730 , 2 , colors[BLACK] );
	DrawLine( 700 , 130 ,  700 , 730 , 2 , colors[BLACK] );
	DrawLine( 670 , 130 ,  670 , 730 , 2 , colors[BLACK] );
	DrawLine( 640 , 130 ,  640 , 730 , 2 , colors[BLACK] );
	DrawLine( 610 , 130 ,  610 , 730 , 2 , colors[BLACK] );
	DrawLine( 580 , 130 ,  580 , 730 , 2 , colors[BLACK] );  //making grid
	DrawLine( 550 , 130 ,  550 , 730 , 2 , colors[BLACK] );
	DrawLine( 520 , 130 ,  520 , 730 , 2 , colors[BLACK] );	
	DrawLine( 490 , 130 ,  490 , 730 , 2 , colors[BLACK] );
	DrawLine( 460 , 130 ,  460 , 730 , 2 , colors[BLACK] );
	DrawLine( 430 , 130 ,  430 , 730 , 2 , colors[BLACK] );
	DrawLine( 400 , 130 ,  400 , 730 , 2 , colors[BLACK] );
	DrawLine( 370 , 130 ,  370 , 730 , 2 , colors[BLACK] );
	DrawLine( 340 , 130 ,  340 , 730 , 2 , colors[BLACK] );
	DrawLine( 310 , 130 ,  310 , 730 , 2 , colors[BLACK] );
	DrawLine( 280 , 130 ,  280 , 730 , 2 , colors[BLACK] );
	DrawLine( 250 , 130 ,  250 , 730 , 2 , colors[BLACK] );
	DrawLine( 220 , 130 ,  220 , 730 , 2 , colors[BLACK] );	
	
	/*DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);*/
	drawCar();
	person1();
	drawCar1();    //declaring multple functions here
	drawCar2();
	person2();
	person3();
	glutSwapBuffers(); // do not modify this line..

}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {

	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		
		if(xI > 220) //forcing boundary
		xI -= 30; 		
}
	else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		if(xI < 790)	//forcing boundary
		xI += 30;
		
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		if(yI < 700)	//forcing boundary
		yI += 30;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		if(yI > 130)	//forcing boundary
		yI -= 30;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

        moveCar1();   //declaring movement
        moveCar2();
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
 

 
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Ahmed Shayan"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...
	
	/*pix[0].readBMPfile("Taxi.BMP") //Line for adding taxi picture
        inn();*/
	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
	
	

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
