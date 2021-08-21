/*
 * FINAL PROJECT - GROUP 05
 *
 *
 //In this project, we implemented a city life where day and night view has been drawn.
 //There are many features in day and night view, which can be done by pressing a keyboard
 //button in the city view. Altogether it would render an eye-pleasing city view scenario.
 //Our program provides a fast and accurate rendering of the objects as well as a landscape
 //to simulate a city view.
 *
 * GROUP MEMBERS ARE:
 * 1. Fahim Ahmmed Mojumder, 19-39488-1
 * 2. Md Al Amin Hossen, 19-39535-1
 * 3. Ashraful Huda Rafi, 19-39721-1
 * 4. Md Monjurul Islam Arman, 19-39482-1
 * 5. Prisila Saha, 19-39759-1
 */


//Code
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
using namespace std;


float Car1_Position = 0.0f;
float Car1_Speed = 18.0f;

float Car2_Position = 0.0f;
float Car2_Speed = 18.0f;

float Car3_Position = 0.0f;
float Car3_Speed = 23.0f;

float Truck_Position = 0.0f;
float Truck_Speed = 15.0f;

float Cloud1_Position = 0.0f;
float Cloud1_Speed = 2.0f;

float Cloud2_Position = 0.0f;
float Cloud2_Speed = 3.0f;

float Cloud3_Position = 0.0f;
float Cloud3_Speed = 5.0f;

float Cloud4_Position = 0.0f;
float Cloud4_Speed = 6.0f;

float Plane_Position = 0.0f;
float Plane_Speed = 12.0f;

float Ship1_Position = 0.0f;
float Ship1_Speed = 8.0f;

float Ship2_Position = 0.0f;
float Ship2_Speed = 6.0f;

float Sun_Position = 0.0f;
float Sun_Speed = 6.0f;


char State = 'd';


void init()
{
    glLoadIdentity();
    glClearColor(255.0f, 255.0f, 255.0, 1.0f);
    gluOrtho2D(-960, 960, -500, 500);

    //gluOrtho2D(-1500, 1500, -700, 700);
}

//UPDATE FUNCTION FOR CAR1(RED)
void Car1_Update(int value)
{

    if(Car1_Position > 1800.0)
        Car1_Position = -850.0f;

    Car1_Position = Car1_Position + Car1_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Car1_Update, 0);
}

//UPDATE FUNCTION FOR CAR2
void Car2_Update(int value)
{

    if(Car2_Position > 2000.0)
        Car2_Position = -850.0f;

    Car2_Position = Car2_Position + Car2_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Car2_Update, 0);
}

//UPDATE FUNCTION FOR CAR3(BLUE)
void Car3_Update(int value)
{

    if(Car3_Position > 900.0)
        Car3_Position = -1650.0f;

    Car3_Position = Car3_Position + Car3_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Car3_Update, 0);
}

//UPDATE FUNCTION FOR TRUCK
void Truck_Update(int value)
{

    if(Truck_Position > 1520.0)
        Truck_Position = -1550.0f;

    Truck_Position = Truck_Position + Truck_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Truck_Update, 0);
}

//UPDATE FUNCTION FOR CLOUD 1
void Cloud1_Update(int value)
{

    if(Cloud1_Position > 1150.0)
        Cloud1_Position = -1150.0f;

    Cloud1_Position = Cloud1_Position + Cloud1_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Cloud1_Update, 0);
}

//UPDATE FUNCTION FOR CLOUD 2
void Cloud2_Update(int value)
{

    if(Cloud2_Position > 1720.0)
        Cloud2_Position = -500.0f;

    Cloud2_Position = Cloud2_Position + Cloud2_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Cloud2_Update, 0);
}

//UPDATE FUNCTION FOR CLOUD 3
void Cloud3_Update(int value)
{

    if(Cloud3_Position > 500.0)
        Cloud3_Position = -1740.0f;

    Cloud3_Position = Cloud3_Position + Cloud3_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Cloud3_Update, 0);
}

//UPDATE FUNCTION FOR CLOUD 4
void Cloud4_Update(int value)
{

    if(Cloud4_Position > 1400.0)
        Cloud4_Position = -800.0f;

    Cloud4_Position = Cloud4_Position + Cloud4_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Cloud4_Update, 0);
}

//UPDATE FUNCTION FOR PLANE
void Plane_Update(int value)
{
    if(Plane_Position > 4300.0)
        Plane_Position = -1350.0f;

    Plane_Position = Plane_Position + Plane_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Plane_Update, 0);
}

//UPDATE FUNCTION FOR CAR1
void Ship2_Update(int value)
{

    if(Ship2_Position > 1800.0)
        Ship2_Position = -850.0f;

    Ship2_Position = Ship2_Position + Ship2_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Ship2_Update, 0);
}

//UPDATE FUNCTION FOR SHIP
void Ship1_Update(int value)
{

    if(Ship1_Position > 2000.0)
        Ship1_Position = -850.0f;

    Ship1_Position = Ship1_Position + Ship1_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Ship1_Update, 0);
}

//UPDATE FUNCTION FOR SUN
void Sun_Update(int value)
{

    if(State == 'd' && Sun_Position > 200.0)
    {
        Sun_Position = 200.0f;

    }
    Sun_Position = Sun_Position + Sun_Speed;

    glutPostRedisplay();

    glutTimerFunc(100, Sun_Update, 0);
}

//MOUSE HANDLING FUNCTION
void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            Car1_Speed += 8.0f;
            Car2_Speed += 8.0f;
            Car3_Speed += 10.0f;
            Truck_Speed += 5.0f;
            //printf("clicked at (%d, %d)\n", x, y);
        }
    }

    if (button == GLUT_RIGHT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            Car1_Speed = 0.0f;
            Car2_Speed = 0.0f;
            Car3_Speed = 0.0f;
            Truck_Speed = 0.0f;
            //printf("clicked at (%d, %d)\n", x, y);
        }
    }


    glutPostRedisplay();
}

//KEYBOARD HANDLING FUNCTION
void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 's': //Car Stop
        Car1_Speed = 0.0f;
        Car2_Speed = 0.0f;
        Car3_Speed = 0.0f;
        Truck_Speed = 0.0f;
        break;

    case 'w': //Car Starts
        Car1_Speed += 8.0f;
        Car2_Speed += 8.0f;
        Car3_Speed += 10.0f;
        Truck_Speed += 5.0f;
        break;

    case 'p': //Ship Stop
        Ship1_Speed = 0.0f;
        Ship2_Speed = 0.0f;
        break;

    case 'o': //Ship Start
        Ship1_Speed += 5.0f;
        Ship2_Speed += 6.0f;
        break;

    case 'n': //Night View
        State = 'n';
        break;

    case 'd': //Night View
        State = 'd';
        break;

        glutPostRedisplay();

    }
}

void building1()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(146, 230, 199);
    if(State=='n')
        glColor3ub(61,119,89);
    glVertex2f(-920.0f, 200.0f);
    glVertex2f(-920.0f, 0.0f);
    glVertex2f(-800.0f, 0.0f);
    glVertex2f(-800.0f, 200.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(10, 136, 138);
    if(State=='n')
        glColor3ub(4,56,57);
    glVertex2f(-920.0f, 200.0f);
    glVertex2f(-920.0f, 0.0f);
    glVertex2f(-800.0f, 0.0f);
    glVertex2f(-800.0f, 200.0f);
    glEnd();

    //ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(146, 230, 199);
    if(State=='n')
        glColor3ub(61,119,89);
    glVertex2f(-860.0f, 225.0f);
    glVertex2f(-925.0f, 205.0f);
    glVertex2f(-795.0f, 205.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(10, 136, 138);
    if(State=='n')
        glColor3ub(4,56,57);
    glVertex2f(-860.0f, 225.0f);
    glVertex2f(-925.0f, 205.0f);
    glVertex2f(-795.0f, 205.0f);
    glEnd();
    //
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(10, 136, 138);
    if(State=='n')
        glColor3ub(4,56,57);
    glVertex2f(-925.0f, 205.0f);
    glVertex2f(-920.0f, 200.0f);
    glVertex2f(-800.0f, 200.0f);
    glVertex2f(-795.0f, 205.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(204, 241, 255);
    if(State=='n')
        glColor3ub(255,255,112);

    glVertex2f(-910.0f, 30.0f);
    glVertex2f(-910.0f, 10.0f);
    glVertex2f(-890.0f, 10.0f);
    glVertex2f(-890.0f, 30.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-910.0f, 70.0f);
    glVertex2f(-910.0f, 50.0f);
    glVertex2f(-890.0f, 50.0f);
    glVertex2f(-890.0f, 70.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-910.0f, 110.0f);
    glVertex2f(-910.0f, 90.0f);
    glVertex2f(-890.0f, 90.0f);
    glVertex2f(-890.0f, 110.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-910.0f, 150.0f);
    glVertex2f(-910.0f, 130.0f);
    glVertex2f(-890.0f, 130.0f);
    glVertex2f(-890.0f, 150.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-910.0f, 190.0f);
    glVertex2f(-910.0f, 170.0f);
    glVertex2f(-890.0f, 170.0f);
    glVertex2f(-890.0f, 190.0f);
    glEnd();

    //2
    glBegin(GL_POLYGON);
    glVertex2f(-870.0f, 30.0f);
    glVertex2f(-870.0f, 10.0f);
    glVertex2f(-850.0f, 10.0f);
    glVertex2f(-850.0f, 30.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-870.0f, 70.0f);
    glVertex2f(-870.0f, 50.0f);
    glVertex2f(-850.0f, 50.0f);
    glVertex2f(-850.0f, 70.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-870.0f, 110.0f);
    glVertex2f(-870.0f, 90.0f);
    glVertex2f(-850.0f, 90.0f);
    glVertex2f(-850.0f, 110.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-870.0f, 150.0f);
    glVertex2f(-870.0f, 130.0f);
    glVertex2f(-850.0f, 130.0f);
    glVertex2f(-850.0f, 150.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-870.0f, 190.0f);
    glVertex2f(-870.0f, 170.0f);
    glVertex2f(-850.0f, 170.0f);
    glVertex2f(-850.0f, 190.0f);
    glEnd();

    //3
    glBegin(GL_POLYGON);
    glVertex2f(-830.0f, 30.0f);
    glVertex2f(-830.0f, 10.0f);
    glVertex2f(-810.0f, 10.0f);
    glVertex2f(-810.0f, 30.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-830.0f, 70.0f);
    glVertex2f(-830.0f, 50.0f);
    glVertex2f(-810.0f, 50.0f);
    glVertex2f(-810.0f, 70.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-830.0f, 110.0f);
    glVertex2f(-830.0f, 90.0f);
    glVertex2f(-810.0f, 90.0f);
    glVertex2f(-810.0f, 110.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-830.0f, 150.0f);
    glVertex2f(-830.0f, 130.0f);
    glVertex2f(-810.0f, 130.0f);
    glVertex2f(-810.0f, 150.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-830.0f, 190.0f);
    glVertex2f(-830.0f, 170.0f);
    glVertex2f(-810.0f, 170.0f);
    glVertex2f(-810.0f, 190.0f);
    glEnd();

    //#################window border
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-910.0f, 30.0f);
    glVertex2f(-910.0f, 10.0f);
    glVertex2f(-890.0f, 10.0f);
    glVertex2f(-890.0f, 30.0f);
    glVertex2f(-900.0f, 30.0f);
    glVertex2f(-900.0f, 10.0f);
    glVertex2f(-900.0f, 30.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-910.0f, 70.0f);
    glVertex2f(-910.0f, 50.0f);
    glVertex2f(-890.0f, 50.0f);
    glVertex2f(-890.0f, 70.0f);
    glVertex2f(-900.0f, 70.0f);
    glVertex2f(-900.0f, 50.0f);
    glVertex2f(-900.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-910.0f, 110.0f);
    glVertex2f(-910.0f, 90.0f);
    glVertex2f(-890.0f, 90.0f);
    glVertex2f(-890.0f, 110.0f);
    glVertex2f(-900.0f, 110.0f);
    glVertex2f(-900.0f, 90.0f);
    glVertex2f(-900.0f, 110.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-910.0f, 150.0f);
    glVertex2f(-910.0f, 130.0f);
    glVertex2f(-890.0f, 130.0f);
    glVertex2f(-890.0f, 150.0f);
    glVertex2f(-900.0f, 150.0f);
    glVertex2f(-900.0f, 130.0f);
    glVertex2f(-900.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-910.0f, 190.0f);
    glVertex2f(-910.0f, 170.0f);
    glVertex2f(-890.0f, 170.0f);
    glVertex2f(-890.0f, 190.0f);
    glVertex2f(-900.0f, 190.0f);
    glVertex2f(-900.0f, 170.0f);
    glVertex2f(-900.0f, 190.0f);
    glEnd();
    //2 border
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-870.0f, 30.0f);
    glVertex2f(-870.0f, 10.0f);
    glVertex2f(-850.0f, 10.0f);
    glVertex2f(-850.0f, 30.0f);
    glVertex2f(-860.0f, 30.0f);
    glVertex2f(-860.0f, 10.0f);
    glVertex2f(-860.0f, 30.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-870.0f, 70.0f);
    glVertex2f(-870.0f, 50.0f);
    glVertex2f(-850.0f, 50.0f);
    glVertex2f(-850.0f, 70.0f);
    glVertex2f(-860.0f, 70.0f);
    glVertex2f(-860.0f, 50.0f);
    glVertex2f(-860.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-870.0f, 110.0f);
    glVertex2f(-870.0f, 90.0f);
    glVertex2f(-850.0f, 90.0f);
    glVertex2f(-850.0f, 110.0f);
    glVertex2f(-860.0f, 110.0f);
    glVertex2f(-860.0f, 90.0f);
    glVertex2f(-860.0f, 110.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-870.0f, 150.0f);
    glVertex2f(-870.0f, 130.0f);
    glVertex2f(-850.0f, 130.0f);
    glVertex2f(-850.0f, 150.0f);
    glVertex2f(-860.0f, 150.0f);
    glVertex2f(-860.0f, 130.0f);
    glVertex2f(-860.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-870.0f, 190.0f);
    glVertex2f(-870.0f, 170.0f);
    glVertex2f(-850.0f, 170.0f);
    glVertex2f(-850.0f, 190.0f);
    glVertex2f(-860.0f, 190.0f);
    glVertex2f(-860.0f, 170.0f);
    glVertex2f(-860.0f, 190.0f);
    glEnd();

    //3 border
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-830.0f, 30.0f);
    glVertex2f(-830.0f, 10.0f);
    glVertex2f(-810.0f, 10.0f);
    glVertex2f(-810.0f, 30.0f);
    glVertex2f(-820.0f, 30.0f);
    glVertex2f(-820.0f, 10.0f);
    glVertex2f(-820.0f, 30.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-830.0f, 70.0f);
    glVertex2f(-830.0f, 50.0f);
    glVertex2f(-810.0f, 50.0f);
    glVertex2f(-810.0f, 70.0f);
    glVertex2f(-820.0f, 70.0f);
    glVertex2f(-820.0f, 50.0f);
    glVertex2f(-820.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-830.0f, 110.0f);
    glVertex2f(-830.0f, 90.0f);
    glVertex2f(-810.0f, 90.0f);
    glVertex2f(-810.0f, 110.0f);
    glVertex2f(-820.0f, 110.0f);
    glVertex2f(-820.0f, 90.0f);
    glVertex2f(-820.0f, 110.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-830.0f, 150.0f);
    glVertex2f(-830.0f, 130.0f);
    glVertex2f(-810.0f, 130.0f);
    glVertex2f(-810.0f, 150.0f);
    glVertex2f(-820.0f, 150.0f);
    glVertex2f(-820.0f, 130.0f);
    glVertex2f(-820.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(36, 138, 100);
    glVertex2f(-830.0f, 190.0f);
    glVertex2f(-830.0f, 170.0f);
    glVertex2f(-810.0f, 170.0f);
    glVertex2f(-810.0f, 190.0f);
    glVertex2f(-820.0f, 190.0f);
    glVertex2f(-820.0f, 170.0f);
    glVertex2f(-820.0f, 190.0f);
    glEnd();

}
void building2()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 159, 180);
    if(State=='n')
        glColor3ub(255,66,77);
    glVertex2f(-780.0f, 220.0f);
    glVertex2f(-780.0f, 0.0f);
    glVertex2f(-630.0f, 0.0f);
    glVertex2f(-630.0f, 220.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(172, 10, 63);
    if(State=='n')
        glColor3ub(73,4,26);
    glVertex2f(-780.0f, 220.0f);
    glVertex2f(-780.0f, 0.0f);
    glVertex2f(-630.0f, 0.0f);
    glVertex2f(-630.0f, 220.0f);
    glEnd();

    //ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(172, 10, 63);
    if(State=='n')
        glColor3ub(73,4,26);
    glVertex2f(-790.0f, 225.0f);
    glVertex2f(-790.0f, 220.0f);
    glVertex2f(-620.0f, 220.0f);
    glVertex2f(-620.0f, 225.0f);
    glEnd();

    //2nd body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 159, 180);
    if(State=='n')
        glColor3ub(255,66,77);
    glVertex2f(-760.0f, 255.0f);
    glVertex2f(-760.0f, 225.0f);
    glVertex2f(-650.0f, 225.0f);
    glVertex2f(-650.0f, 255.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(172, 10, 63);
    if(State=='n')
        glColor3ub(73,4,26);
    glVertex2f(-760.0f, 255.0f);
    glVertex2f(-760.0f, 220.0f);
    glVertex2f(-650.0f, 220.0f);
    glVertex2f(-650.0f, 255.0f);
    glEnd();

    //2nd body ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(172, 10, 63);
    if(State=='n')
        glColor3ub(73,4,26);
    glVertex2f(-770.0f, 260.0f);
    glVertex2f(-770.0f, 255.0f);
    glVertex2f(-640.0f, 255.0f);
    glVertex2f(-640.0f, 260.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 222, 229);
    if(State=='n')
        glColor3ub(103,167,217);
    glVertex2f(-770.0f, 210.0f);
    glVertex2f(-770.0f, 180.0f);
    glVertex2f(-740.0f, 180.0f);
    glVertex2f(-740.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-770.0f, 170.0f);
    glVertex2f(-770.0f, 140.0f);
    glVertex2f(-740.0f, 140.0f);
    glVertex2f(-740.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-770.0f, 130.0f);
    glVertex2f(-770.0f, 100.0f);
    glVertex2f(-740.0f, 100.0f);
    glVertex2f(-740.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-770.0f, 90.0f);
    glVertex2f(-770.0f, 60.0f);
    glVertex2f(-740.0f, 60.0f);
    glVertex2f(-740.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-770.0f, 50.0f);
    glVertex2f(-770.0f, 20.0f);
    glVertex2f(-740.0f, 20.0f);
    glVertex2f(-740.0f, 50.0f);
    glEnd();
    //window border
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-770.0f, 210.0f);
    glVertex2f(-770.0f, 180.0f);
    glVertex2f(-740.0f, 180.0f);
    glVertex2f(-740.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-770.0f, 170.0f);
    glVertex2f(-770.0f, 140.0f);
    glVertex2f(-740.0f, 140.0f);
    glVertex2f(-740.0f, 170.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-770.0f, 130.0f);
    glVertex2f(-770.0f, 100.0f);
    glVertex2f(-740.0f, 100.0f);
    glVertex2f(-740.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-770.0f, 90.0f);
    glVertex2f(-770.0f, 60.0f);
    glVertex2f(-740.0f, 60.0f);
    glVertex2f(-740.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-770.0f, 50.0f);
    glVertex2f(-770.0f, 20.0f);
    glVertex2f(-740.0f, 20.0f);
    glVertex2f(-740.0f, 50.0f);
    glEnd();


    //middle
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 222, 229);
    if(State=='n')
        glColor3ub(103,167,217);
    glVertex2f(-730.0f, 210.0f);
    glVertex2f(-730.0f, 20.0f);
    glVertex2f(-680.0f, 20.0f);
    glVertex2f(-680.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-730.0f, 210.0f);
    glVertex2f(-730.0f, 20.0f);
    glVertex2f(-680.0f, 20.0f);
    glVertex2f(-680.0f, 210.0f);
    glEnd();

    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 183, 198);
    if(State=='n')
        glColor3ub(255, 79,88);
    glVertex2f(-720.0f, 200.0f);
    glVertex2f(-720.0f, 20.0f);
    glVertex2f(-690.0f, 20.0f);
    glVertex2f(-690.0f, 200.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-720.0f, 200.0f);
    glVertex2f(-720.0f, 20.0f);
    glVertex2f(-690.0f, 20.0f);
    glVertex2f(-690.0f, 200.0f);
    glEnd();


    //right side window

    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 222, 229);
    if(State=='n')
        glColor3ub(103,167,217);
    glVertex2f(-670.0f, 210.0f);
    glVertex2f(-670.0f, 180.0f);
    glVertex2f(-640.0f, 180.0f);
    glVertex2f(-640.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-670.0f, 170.0f);
    glVertex2f(-670.0f, 140.0f);
    glVertex2f(-640.0f, 140.0f);
    glVertex2f(-640.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-670.0f, 130.0f);
    glVertex2f(-670.0f, 100.0f);
    glVertex2f(-640.0f, 100.0f);
    glVertex2f(-640.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-670.0f, 90.0f);
    glVertex2f(-670.0f, 60.0f);
    glVertex2f(-640.0f, 60.0f);
    glVertex2f(-640.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-670.0f, 50.0f);
    glVertex2f(-670.0f, 20.0f);
    glVertex2f(-640.0f, 20.0f);
    glVertex2f(-640.0f, 50.0f);
    glEnd();

    //right side window border

    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-670.0f, 210.0f);
    glVertex2f(-670.0f, 180.0f);
    glVertex2f(-640.0f, 180.0f);
    glVertex2f(-640.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-670.0f, 170.0f);
    glVertex2f(-670.0f, 140.0f);
    glVertex2f(-640.0f, 140.0f);
    glVertex2f(-640.0f, 170.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-670.0f, 130.0f);
    glVertex2f(-670.0f, 100.0f);
    glVertex2f(-640.0f, 100.0f);
    glVertex2f(-640.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-670.0f, 90.0f);
    glVertex2f(-670.0f, 60.0f);
    glVertex2f(-640.0f, 60.0f);
    glVertex2f(-640.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(172, 10, 63);
    glVertex2f(-670.0f, 50.0f);
    glVertex2f(-670.0f, 20.0f);
    glVertex2f(-640.0f, 20.0f);
    glVertex2f(-640.0f, 50.0f);
    glEnd();

}
void building3()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 212, 133);
    if(State=='n')
        glColor3ub(255,99,55);
    glVertex2f(-650.0f, 180.0f);
    glVertex2f(-650.0f, 0.0f);
    glVertex2f(-470.0f, 0.0f);
    glVertex2f(-470.0f, 180.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(175, 99, 7);
    if(State=='n')
        glColor3ub(74,41,3);
    glVertex2f(-650.0f, 180.0f);
    glVertex2f(-650.0f, 0.0f);
    glVertex2f(-470.0f, 0.0f);
    glVertex2f(-470.0f, 180.0f);
    glEnd();

    //ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255, 212, 133);
    if(State=='n')
        glColor3ub(255,73,42);
    glVertex2f(-660.0f, 190.0f);
    glVertex2f(-660.0f, 180.0f);
    glVertex2f(-460.0f, 180.0f);
    glVertex2f(-460.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(175, 99, 7);
    if(State=='n')
        glColor3ub(74,41,3);
    glVertex2f(-660.0f, 190.0f);
    glVertex2f(-660.0f, 180.0f);
    glVertex2f(-460.0f, 180.0f);
    glVertex2f(-460.0f, 190.0f);
    glEnd();

    //window 3rd floor
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(214, 215, 255);
    if(State=='n')
        glColor3ub(255,255,112);
    glVertex2f(-630.0f, 165.0f);
    glVertex2f(-630.0f, 145.0f);
    glVertex2f(-610.0f, 145.0f);
    glVertex2f(-610.0f, 165.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f, 165.0f);
    glVertex2f(-600.0f, 145.0f);
    glVertex2f(-580.0f, 145.0f);
    glVertex2f(-580.0f, 165.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-570.0f, 165.0f);
    glVertex2f(-570.0f, 145.0f);
    glVertex2f(-550.0f, 145.0f);
    glVertex2f(-550.0f, 165.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-540.0f, 165.0f);
    glVertex2f(-540.0f, 145.0f);
    glVertex2f(-520.0f, 145.0f);
    glVertex2f(-520.0f, 165.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-510.0f, 165.0f);
    glVertex2f(-510.0f, 145.0f);
    glVertex2f(-490.0f, 145.0f);
    glVertex2f(-490.0f, 165.0f);
    glEnd();


    //window border 3rd
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-630.0f, 165.0f);
    glVertex2f(-630.0f, 145.0f);
    glVertex2f(-610.0f, 145.0f);
    glVertex2f(-610.0f, 165.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-600.0f, 165.0f);
    glVertex2f(-600.0f, 145.0f);
    glVertex2f(-580.0f, 145.0f);
    glVertex2f(-580.0f, 165.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-570.0f, 165.0f);
    glVertex2f(-570.0f, 145.0f);
    glVertex2f(-550.0f, 145.0f);
    glVertex2f(-550.0f, 165.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-540.0f, 165.0f);
    glVertex2f(-540.0f, 145.0f);
    glVertex2f(-520.0f, 145.0f);
    glVertex2f(-520.0f, 165.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-510.0f, 165.0f);
    glVertex2f(-510.0f, 145.0f);
    glVertex2f(-490.0f, 145.0f);
    glVertex2f(-490.0f, 165.0f);
    glEnd();

    //label
    glBegin(GL_POLYGON);
    glColor3ub(255, 172, 102);
    glVertex2f(-650.0f, 130.0f);
    glVertex2f(-650.0f, 120.0f);
    glVertex2f(-470.0f, 120.0f);
    glVertex2f(-470.0f, 130.0f);
    glEnd();

    //window 2nd floor
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(214, 215, 255);
    if(State=='n')
        glColor3ub(255,255,112);
    glVertex2f(-630.0f, 105.0f);
    glVertex2f(-630.0f, 85.0f);
    glVertex2f(-610.0f, 85.0f);
    glVertex2f(-610.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f, 105.0f);
    glVertex2f(-600.0f, 85.0f);
    glVertex2f(-580.0f, 85.0f);
    glVertex2f(-580.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-570.0f, 105.0f);
    glVertex2f(-570.0f, 85.0f);
    glVertex2f(-550.0f, 85.0f);
    glVertex2f(-550.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-540.0f, 105.0f);
    glVertex2f(-540.0f, 85.0f);
    glVertex2f(-520.0f, 85.0f);
    glVertex2f(-520.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-510.0f, 105.0f);
    glVertex2f(-510.0f, 85.0f);
    glVertex2f(-490.0f, 85.0f);
    glVertex2f(-490.0f, 105.0f);
    glEnd();

    //window 2nd floor border
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-630.0f, 105.0f);
    glVertex2f(-630.0f, 85.0f);
    glVertex2f(-610.0f, 85.0f);
    glVertex2f(-610.0f, 105.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-600.0f, 105.0f);
    glVertex2f(-600.0f, 85.0f);
    glVertex2f(-580.0f, 85.0f);
    glVertex2f(-580.0f, 105.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-570.0f, 105.0f);
    glVertex2f(-570.0f, 85.0f);
    glVertex2f(-550.0f, 85.0f);
    glVertex2f(-550.0f, 105.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-540.0f, 105.0f);
    glVertex2f(-540.0f, 85.0f);
    glVertex2f(-520.0f, 85.0f);
    glVertex2f(-520.0f, 105.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-510.0f, 105.0f);
    glVertex2f(-510.0f, 85.0f);
    glVertex2f(-490.0f, 85.0f);
    glVertex2f(-490.0f, 105.0f);
    glEnd();

    //label 2
    glBegin(GL_POLYGON);
    glColor3ub(255, 172, 102);
    glVertex2f(-650.0f, 70.0f);
    glVertex2f(-650.0f, 60.0f);
    glVertex2f(-470.0f, 60.0f);
    glVertex2f(-470.0f, 70.0f);
    glEnd();

    //window 1st floor
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(214, 215, 255);
    if(State=='n')
        glColor3ub(255,255,112);
    glVertex2f(-630.0f, 45.0f);
    glVertex2f(-630.0f, 25.0f);
    glVertex2f(-610.0f, 25.0f);
    glVertex2f(-610.0f, 45.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f, 45.0f);
    glVertex2f(-600.0f, 25.0f);
    glVertex2f(-580.0f, 25.0f);
    glVertex2f(-580.0f, 45.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-570.0f, 45.0f);
    glVertex2f(-570.0f, 25.0f);
    glVertex2f(-550.0f, 25.0f);
    glVertex2f(-550.0f, 45.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-540.0f, 45.0f);
    glVertex2f(-540.0f, 25.0f);
    glVertex2f(-520.0f, 25.0f);
    glVertex2f(-520.0f, 45.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-510.0f, 45.0f);
    glVertex2f(-510.0f, 25.0f);
    glVertex2f(-490.0f, 25.0f);
    glVertex2f(-490.0f, 45.0f);
    glEnd();
    //1st floor window border
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-630.0f, 45.0f);
    glVertex2f(-630.0f, 25.0f);
    glVertex2f(-610.0f, 25.0f);
    glVertex2f(-610.0f, 45.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-600.0f, 45.0f);
    glVertex2f(-600.0f, 25.0f);
    glVertex2f(-580.0f, 25.0f);
    glVertex2f(-580.0f, 45.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-570.0f, 45.0f);
    glVertex2f(-570.0f, 25.0f);
    glVertex2f(-550.0f, 25.0f);
    glVertex2f(-550.0f, 45.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-540.0f, 45.0f);
    glVertex2f(-540.0f, 25.0f);
    glVertex2f(-520.0f, 25.0f);
    glVertex2f(-520.0f, 45.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(175, 99, 7);
    glVertex2f(-510.0f, 45.0f);
    glVertex2f(-510.0f, 25.0f);
    glVertex2f(-490.0f, 25.0f);
    glVertex2f(-490.0f, 45.0f);
    glEnd();


}
void building4()
{
    //top piller
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(60, 150, 222);
    if(State=='n')
        glColor3ub(30,70,109);

    glVertex2f(-400.0f, 275.0f);
    glVertex2f(-400.0f, 220.0f);
    glVertex2f(-350.0f, 220.0f);
    glVertex2f(-350.0f, 275.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(64, 106, 161);
    if(State=='n')
        glColor3ub(26,44,67);

    glVertex2f(-400.0f, 275.0f);
    glVertex2f(-400.0f, 220.0f);
    glVertex2f(-350.0f, 220.0f);
    glVertex2f(-350.0f, 275.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-400.0f, 280.0f);
    glVertex2f(-400.0f, 275.0f);
    glVertex2f(-350.0f, 275.0f);
    glVertex2f(-350.0f, 280.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-400.0f, 280.0f);
    glVertex2f(-400.0f, 275.0f);
    glVertex2f(-350.0f, 275.0f);
    glVertex2f(-350.0f, 280.0f);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(60, 150, 222);
    if(State=='n')
        glColor3ub(30,70,109);
    glVertex2f(-450.0f, 215.0f);
    glVertex2f(-450.0f, 0.0f);
    glVertex2f(-300.0f, 0.0f);
    glVertex2f(-300.0f, 275.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(64, 106, 161);
    if(State=='n')
        glColor3ub(26,44,67);
    glVertex2f(-450.0f, 215.0f);
    glVertex2f(-450.0f, 0.0f);
    glVertex2f(-300.0f, 0.0f);
    glVertex2f(-300.0f, 275.0f);
    glEnd();
    //ceiling
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-450.0f, 220.0f);
    glVertex2f(-450.0f, 215.0f);
    glVertex2f(-300.0f, 275.0f);
    glVertex2f(-300.0f, 280.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-450.0f, 220.0f);
    glVertex2f(-450.0f, 215.0f);
    glVertex2f(-300.0f, 275.0f);
    glVertex2f(-300.0f, 280.0f);
    glEnd();


    //window floor 1
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-430.0f, 60.0f);
    glVertex2f(-430.0f, 30.0f);
    glVertex2f(-400.0f, 30.0f);
    glVertex2f(-400.0f, 60.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-390.0f, 60.0f);
    glVertex2f(-390.0f, 30.0f);
    glVertex2f(-360.0f, 30.0f);
    glVertex2f(-360.0f, 60.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-350.0f, 60.0f);
    glVertex2f(-350.0f, 30.0f);
    glVertex2f(-320.0f, 30.0f);
    glVertex2f(-320.0f, 60.0f);
    glEnd();
    //border win 1
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-430.0f, 60.0f);
    glVertex2f(-430.0f, 30.0f);
    glVertex2f(-400.0f, 30.0f);
    glVertex2f(-400.0f, 60.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-390.0f, 60.0f);
    glVertex2f(-390.0f, 30.0f);
    glVertex2f(-360.0f, 30.0f);
    glVertex2f(-360.0f, 60.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-350.0f, 60.0f);
    glVertex2f(-350.0f, 30.0f);
    glVertex2f(-320.0f, 30.0f);
    glVertex2f(-320.0f, 60.0f);
    glEnd();

    //window floor 2
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-430.0f, 110.0f);
    glVertex2f(-430.0f, 80.0f);
    glVertex2f(-400.0f, 80.0f);
    glVertex2f(-400.0f, 110.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-390.0f, 110.0f);
    glVertex2f(-390.0f, 80.0f);
    glVertex2f(-360.0f, 80.0f);
    glVertex2f(-360.0f, 110.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-350.0f, 110.0f);
    glVertex2f(-350.0f, 80.0f);
    glVertex2f(-320.0f, 80.0f);
    glVertex2f(-320.0f, 110.0f);
    glEnd();
    //border 2
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-430.0f, 110.0f);
    glVertex2f(-430.0f, 80.0f);
    glVertex2f(-400.0f, 80.0f);
    glVertex2f(-400.0f, 110.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-390.0f, 110.0f);
    glVertex2f(-390.0f, 80.0f);
    glVertex2f(-360.0f, 80.0f);
    glVertex2f(-360.0f, 110.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-350.0f, 110.0f);
    glVertex2f(-350.0f, 80.0f);
    glVertex2f(-320.0f, 80.0f);
    glVertex2f(-320.0f, 110.0f);
    glEnd();

    //window floor 3
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-430.0f, 160.0f);
    glVertex2f(-430.0f, 130.0f);
    glVertex2f(-400.0f, 130.0f);
    glVertex2f(-400.0f, 160.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-390.0f, 160.0f);
    glVertex2f(-390.0f, 130.0f);
    glVertex2f(-360.0f, 130.0f);
    glVertex2f(-360.0f, 160.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-350.0f, 160.0f);
    glVertex2f(-350.0f, 130.0f);
    glVertex2f(-320.0f, 130.0f);
    glVertex2f(-320.0f, 160.0f);
    glEnd();
    //border 2
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-430.0f, 160.0f);
    glVertex2f(-430.0f, 130.0f);
    glVertex2f(-400.0f, 130.0f);
    glVertex2f(-400.0f, 160.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-390.0f, 160.0f);
    glVertex2f(-390.0f, 130.0f);
    glVertex2f(-360.0f, 130.0f);
    glVertex2f(-360.0f, 160.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-350.0f, 160.0f);
    glVertex2f(-350.0f, 130.0f);
    glVertex2f(-320.0f, 130.0f);
    glVertex2f(-320.0f, 160.0f);
    glEnd();

    //window floor 4
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-430.0f, 210.0f);
    glVertex2f(-430.0f, 180.0f);
    glVertex2f(-400.0f, 180.0f);
    glVertex2f(-400.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-390.0f, 210.0f);
    glVertex2f(-390.0f, 180.0f);
    glVertex2f(-360.0f, 180.0f);
    glVertex2f(-360.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(234, 243, 255);
    glVertex2f(-350.0f, 210.0f);
    glVertex2f(-350.0f, 180.0f);
    glVertex2f(-320.0f, 180.0f);
    glVertex2f(-320.0f, 210.0f);
    glEnd();
    //border 4
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-430.0f, 210.0f);
    glVertex2f(-430.0f, 180.0f);
    glVertex2f(-400.0f, 180.0f);
    glVertex2f(-400.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-390.0f, 210.0f);
    glVertex2f(-390.0f, 180.0f);
    glVertex2f(-360.0f, 180.0f);
    glVertex2f(-360.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(64, 106, 161);
    glVertex2f(-350.0f, 210.0f);
    glVertex2f(-350.0f, 180.0f);
    glVertex2f(-320.0f, 180.0f);
    glVertex2f(-320.0f, 210.0f);
    glEnd();


}

void building5()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(226, 232, 46);
    if(State=='n')
        glColor3ub(114,122,19);
    glVertex2f(-310.0f, 150.0f);
    glVertex2f(-310.0f, 0.0f);
    glVertex2f(-170.0f, 0.0f);
    glVertex2f(-170.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-310.0f, 150.0f);
    glVertex2f(-310.0f, 0.0f);
    glVertex2f(-170.0f, 0.0f);
    glVertex2f(-170.0f, 150.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-290.0f, 50.0f);
    glVertex2f(-290.0f, 30.0f);
    glVertex2f(-270.0f, 30.0f);
    glVertex2f(-270.0f, 50.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-250.0f, 50.0f);
    glVertex2f(-250.0f, 30.0f);
    glVertex2f(-230.0f, 30.0f);
    glVertex2f(-230.0f, 50.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-210.0f, 50.0f);
    glVertex2f(-210.0f, 30.0f);
    glVertex2f(-190.0f, 30.0f);
    glVertex2f(-190.0f, 50.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-290.0f, 50.0f);
    glVertex2f(-290.0f, 30.0f);
    glVertex2f(-270.0f, 30.0f);
    glVertex2f(-270.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-250.0f, 50.0f);
    glVertex2f(-250.0f, 30.0f);
    glVertex2f(-230.0f, 30.0f);
    glVertex2f(-230.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-210.0f, 50.0f);
    glVertex2f(-210.0f, 30.0f);
    glVertex2f(-190.0f, 30.0f);
    glVertex2f(-190.0f, 50.0f);
    glEnd();

    //window 2
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-290.0f, 90.0f);
    glVertex2f(-290.0f, 70.0f);
    glVertex2f(-270.0f, 70.0f);
    glVertex2f(-270.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-250.0f, 90.0f);
    glVertex2f(-250.0f, 70.0f);
    glVertex2f(-230.0f, 70.0f);
    glVertex2f(-230.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-210.0f, 90.0f);
    glVertex2f(-210.0f, 70.0f);
    glVertex2f(-190.0f, 70.0f);
    glVertex2f(-190.0f, 90.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-290.0f, 90.0f);
    glVertex2f(-290.0f, 70.0f);
    glVertex2f(-270.0f, 70.0f);
    glVertex2f(-270.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-250.0f, 90.0f);
    glVertex2f(-250.0f, 70.0f);
    glVertex2f(-230.0f, 70.0f);
    glVertex2f(-230.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-210.0f, 90.0f);
    glVertex2f(-210.0f, 70.0f);
    glVertex2f(-190.0f, 70.0f);
    glVertex2f(-190.0f, 90.0f);
    glEnd();

    //window 3
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-290.0f, 130.0f);
    glVertex2f(-290.0f, 110.0f);
    glVertex2f(-270.0f, 110.0f);
    glVertex2f(-270.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-250.0f, 130.0f);
    glVertex2f(-250.0f, 110.0f);
    glVertex2f(-230.0f, 110.0f);
    glVertex2f(-230.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-210.0f, 130.0f);
    glVertex2f(-210.0f, 110.0f);
    glVertex2f(-190.0f, 110.0f);
    glVertex2f(-190.0f, 130.0f);
    glEnd();
    //border 3
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-290.0f, 130.0f);
    glVertex2f(-290.0f, 110.0f);
    glVertex2f(-270.0f, 110.0f);
    glVertex2f(-270.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-250.0f, 130.0f);
    glVertex2f(-250.0f, 110.0f);
    glVertex2f(-230.0f, 110.0f);
    glVertex2f(-230.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-210.0f, 130.0f);
    glVertex2f(-210.0f, 110.0f);
    glVertex2f(-190.0f, 110.0f);
    glVertex2f(-190.0f, 130.0f);
    glEnd();

    //1st ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-315.0f, 160.0f);
    glVertex2f(-315.0f, 150.0f);
    glVertex2f(-165.0f, 150.0f);
    glVertex2f(-165.0f, 160.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-315.0f, 160.0f);
    glVertex2f(-315.0f, 150.0f);
    glVertex2f(-165.0f, 150.0f);
    glVertex2f(-165.0f, 160.0f);
    glEnd();

    //body 2
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(226, 232, 46);
    if(State=='n')
        glColor3ub(114,122,19);
    glVertex2f(-300.0f, 200.0f);
    glVertex2f(-300.0f, 160.0f);
    glVertex2f(-180.0f, 160.0f);
    glVertex2f(-180.0f, 200.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-300.0f, 200.0f);
    glVertex2f(-300.0f, 160.0f);
    glVertex2f(-180.0f, 160.0f);
    glVertex2f(-180.0f, 200.0f);
    glEnd();

    //window 4
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-285.0f, 190.0f);
    glVertex2f(-285.0f, 170.0f);
    glVertex2f(-265.0f, 170.0f);
    glVertex2f(-265.0f, 190.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-250.0f, 190.0f);
    glVertex2f(-250.0f, 170.0f);
    glVertex2f(-230.0f, 170.0f);
    glVertex2f(-230.0f, 190.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(245, 247, 186);
    glVertex2f(-215.0f, 190.0f);
    glVertex2f(-215.0f, 170.0f);
    glVertex2f(-195.0f, 170.0f);
    glVertex2f(-195.0f, 190.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-285.0f, 190.0f);
    glVertex2f(-285.0f, 170.0f);
    glVertex2f(-265.0f, 170.0f);
    glVertex2f(-265.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-250.0f, 190.0f);
    glVertex2f(-250.0f, 170.0f);
    glVertex2f(-230.0f, 170.0f);
    glVertex2f(-230.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(208, 89, 0);
    glVertex2f(-215.0f, 190.0f);
    glVertex2f(-215.0f, 170.0f);
    glVertex2f(-195.0f, 170.0f);
    glVertex2f(-195.0f, 190.0f);
    glEnd();

    //ceiling 2
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-305.0f, 210.0f);
    glVertex2f(-305.0f, 200.0f);
    glVertex2f(-175.0f, 200.0f);
    glVertex2f(-175.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-305.0f, 210.0f);
    glVertex2f(-305.0f, 200.0f);
    glVertex2f(-175.0f, 200.0f);
    glVertex2f(-175.0f, 210.0f);
    glEnd();
    //body3
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(226, 232, 46);
    if(State=='n')
        glColor3ub(114,122,19);
    glVertex2f(-270.0f, 230.0f);
    glVertex2f(-270.0f, 210.0f);
    glVertex2f(-210.0f, 210.0f);
    glVertex2f(-210.0f, 230.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-270.0f, 230.0f);
    glVertex2f(-270.0f, 210.0f);
    glVertex2f(-210.0f, 210.0f);
    glVertex2f(-210.0f, 230.0f);
    glEnd();
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-275.0f, 240.0f);
    glVertex2f(-275.0f, 230.0f);
    glVertex2f(-205.0f, 230.0f);
    glVertex2f(-205.0f, 240.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(208, 89, 0);
    if(State=='n')
        glColor3ub(122,52,0);
    glVertex2f(-275.0f, 240.0f);
    glVertex2f(-275.0f, 230.0f);
    glVertex2f(-205.0f, 230.0f);
    glVertex2f(-205.0f, 240.0f);
    glEnd();


}
void building6()
{
    glPushMatrix();
    glTranslatef(620.0f,0.0f,0.0f);
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(101, 187, 112);
    if(State=='n')
        glColor3ub(42,81,46);
    glVertex2f(-780.0f, 220.0f);
    glVertex2f(-780.0f, 0.0f);
    glVertex2f(-630.0f, 0.0f);
    glVertex2f(-630.0f, 220.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-780.0f, 220.0f);
    glVertex2f(-780.0f, 0.0f);
    glVertex2f(-630.0f, 0.0f);
    glVertex2f(-630.0f, 220.0f);
    glEnd();

    //ceiling
    glBegin(GL_POLYGON);
    glColor3ub(4, 64, 12);
    glVertex2f(-790.0f, 225.0f);
    glVertex2f(-790.0f, 220.0f);
    glVertex2f(-620.0f, 220.0f);
    glVertex2f(-620.0f, 225.0f);
    glEnd();

    //2nd body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(101, 187, 112);
    if(State=='n')
        glColor3ub(42,81,46);
    glVertex2f(-760.0f, 255.0f);
    glVertex2f(-760.0f, 225.0f);
    glVertex2f(-650.0f, 225.0f);
    glVertex2f(-650.0f, 255.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-760.0f, 255.0f);
    glVertex2f(-760.0f, 220.0f);
    glVertex2f(-650.0f, 220.0f);
    glVertex2f(-650.0f, 255.0f);
    glEnd();

    //2nd body ceiling
    glBegin(GL_POLYGON);
    glColor3ub(4, 64, 12);
    glVertex2f(-770.0f, 260.0f);
    glVertex2f(-770.0f, 255.0f);
    glVertex2f(-640.0f, 255.0f);
    glVertex2f(-640.0f, 260.0f);
    glEnd();
    glPopMatrix();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(137, 209, 147);
    if(State=='n')
        glColor3ub(255,255,119);

    glVertex2f(-150.0f, 70.0f);
    glVertex2f(-150.0f, 30.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-20.0f, 70.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-150.0f, 130.0f);
    glVertex2f(-150.0f, 90.0f);
    glVertex2f(-20.0f, 90.0f);
    glVertex2f(-20.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-150.0f, 190.0f);
    glVertex2f(-150.0f, 150.0f);
    glVertex2f(-20.0f, 150.0f);
    glVertex2f(-20.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-150.0f, 70.0f);
    glVertex2f(-150.0f, 30.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-20.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-150.0f, 130.0f);
    glVertex2f(-150.0f, 90.0f);
    glVertex2f(-20.0f, 90.0f);
    glVertex2f(-20.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-150.0f, 190.0f);
    glVertex2f(-150.0f, 150.0f);
    glVertex2f(-20.0f, 150.0f);
    glVertex2f(-20.0f, 190.0f);
    glEnd();

    ////
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-124.0f, 70.0f);
    glVertex2f(-124.0f, 30.0f);
    glVertex2f(-46.0f, 30.0f);
    glVertex2f(-46.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-124.0f, 130.0f);
    glVertex2f(-124.0f, 90.0f);
    glVertex2f(-46.0f, 90.0f);
    glVertex2f(-46.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-124.0f, 190.0f);
    glVertex2f(-124.0f, 150.0f);
    glVertex2f(-46.0f, 150.0f);
    glVertex2f(-46.0f, 190.0f);
    glEnd();
    ///////
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-98.0f, 70.0f);
    glVertex2f(-98.0f, 30.0f);
    glVertex2f(-72.0f, 30.0f);
    glVertex2f(-72.0f, 70.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-98.0f, 130.0f);
    glVertex2f(-98.0f, 90.0f);
    glVertex2f(-72.0f, 90.0f);
    glVertex2f(-72.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(4, 64, 12);
    glVertex2f(-98.0f, 190.0f);
    glVertex2f(-98.0f, 150.0f);
    glVertex2f(-72.0f, 150.0f);
    glVertex2f(-72.0f, 190.0f);
    glEnd();


}
void building7()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(137, 151, 209);
    if(State=='n')
        glColor3ub(57,63,96);

    glVertex2f(20.0f, 0.0f);
    glVertex2f(290.0f, 0.0f);
    glVertex2f(290.0f, 120.0f);
    glVertex2f(200.0f, 120.0f);
    glVertex2f(200.0f, 220.0f);
    glVertex2f(20.0f, 220.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(57, 43, 87);
    if(State=='n')
        glColor3ub(24,18,36);

    glVertex2f(20.0f, 0.0f);
    glVertex2f(290.0f, 0.0f);
    glVertex2f(290.0f, 120.0f);
    glVertex2f(200.0f, 120.0f);
    glVertex2f(200.0f, 220.0f);
    glVertex2f(20.0f, 220.0f);
    glEnd();
    //
    //ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(137, 151, 209);
    if(State=='n')
        glColor3ub(57,63,96);
    glVertex2f(15.0f, 230.0f);
    glVertex2f(15.0f, 220.0f);
    glVertex2f(205.0f, 220.0f);
    glVertex2f(205.0f, 230.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(57, 43, 87);
    if(State=='n')
        glColor3ub(24,18,36);
    glVertex2f(15.0f, 230.0f);
    glVertex2f(15.0f, 220.0f);
    glVertex2f(205.0f, 220.0f);
    glVertex2f(205.0f, 230.0f);
    glEnd();
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(137, 151, 209);
    if(State=='n')
        glColor3ub(57,63,96);
    glVertex2f(200.0f, 130.0f);
    glVertex2f(200.0f, 120.0f);
    glVertex2f(295.0f, 120.0f);
    glVertex2f(295.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(57, 43, 87);
    if(State=='n')
        glColor3ub(24,18,36);
    glVertex2f(200.0f, 130.0f);
    glVertex2f(200.0f, 120.0f);
    glVertex2f(295.0f, 120.0f);
    glVertex2f(295.0f, 130.0f);
    glEnd();


    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(187, 228, 252);
    if(State=='n')
        glColor3ub(81,116,179);

    glVertex2f(30.0f, 60.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(280.0f, 30.0f);
    glVertex2f(280.0f, 60.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 105.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(280.0f, 75.0f);
    glVertex2f(280.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 150.0f);
    glVertex2f(30.0f, 120.0f);
    glVertex2f(190.0f, 120.0f);
    glVertex2f(190.0f, 150.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 195.0f);
    glVertex2f(30.0f, 165.0f);
    glVertex2f(190.0f, 165.0f);
    glVertex2f(190.0f, 195.0f);
    glEnd();

    ////white////
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(236, 248, 255);
    if(State=='n')
        glColor3ub(129,162,255);
    glVertex2f(30.0f, 60.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(130.0f, 30.0f);
    glVertex2f(150.0f, 60.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 105.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(130.0f, 75.0f);
    glVertex2f(150.0f, 105.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 150.0f);
    glVertex2f(30.0f, 120.0f);
    glVertex2f(130.0f, 120.0f);
    glVertex2f(150.0f, 150.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30.0f, 195.0f);
    glVertex2f(30.0f, 165.0f);
    glVertex2f(130.0f, 165.0f);
    glVertex2f(150.0f, 195.0f);
    glEnd();

    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(57, 43, 87);
    glVertex2f(30.0f, 60.0f);
    glVertex2f(30.0f, 30.0f);
    glVertex2f(280.0f, 30.0f);
    glVertex2f(280.0f, 60.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(57, 43, 87);
    glVertex2f(30.0f, 105.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(280.0f, 75.0f);
    glVertex2f(280.0f, 105.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(57, 43, 87);
    glVertex2f(30.0f, 150.0f);
    glVertex2f(30.0f, 120.0f);
    glVertex2f(190.0f, 120.0f);
    glVertex2f(190.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(57, 43, 87);
    glVertex2f(30.0f, 195.0f);
    glVertex2f(30.0f, 165.0f);
    glVertex2f(190.0f, 165.0f);
    glVertex2f(190.0f, 195.0f);
    glEnd();




}

void building8()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(160, 251, 122);
    if(State=='n')
        glColor3ub(67,180,50);

    glVertex2f(310.0f, 150.0f);
    glVertex2f(310.0f, 0.0f);
    glVertex2f(450.0f, 0.0f);
    glVertex2f(450.0f, 150.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(310.0f, 150.0f);
    glVertex2f(310.0f, 0.0f);
    glVertex2f(450.0f, 0.0f);
    glVertex2f(450.0f, 150.0f);
    glEnd();
    //1st ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(80, 183, 38);
    if(State=='n')
        glColor3ub(33,79,16);
    glVertex2f(305.0f, 160.0f);
    glVertex2f(305.0f, 150.0f);
    glVertex2f(455.0f, 150.0f);
    glVertex2f(455.0f, 160.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(305.0f, 160.0f);
    glVertex2f(305.0f, 150.0f);
    glVertex2f(455.0f, 150.0f);
    glVertex2f(455.0f, 160.0f);
    glEnd();

    //body 2
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(160, 251, 122);
    if(State=='n')
        glColor3ub(67,180,50);

    glVertex2f(320.0f, 200.0f);
    glVertex2f(320.0f, 160.0f);
    glVertex2f(440.0f, 160.0f);
    glVertex2f(440.0f, 200.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(320.0f, 200.0f);
    glVertex2f(320.0f, 160.0f);
    glVertex2f(440.0f, 160.0f);
    glVertex2f(440.0f, 200.0f);
    glEnd();
    //ceiling 2
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(80, 183, 38);
    if(State=='n')
        glColor3ub(33,79,16);
    glVertex2f(315.0f, 210.0f);
    glVertex2f(315.0f, 200.0f);
    glVertex2f(445.0f, 200.0f);
    glVertex2f(445.0f, 210.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(315.0f, 210.0f);
    glVertex2f(315.0f, 200.0f);
    glVertex2f(445.0f, 200.0f);
    glVertex2f(445.0f, 210.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(245, 247, 186);
    if(State=='n')
        glColor3ub(234, 243, 255);
    glVertex2f(330.0f, 50.0f);
    glVertex2f(330.0f, 30.0f);
    glVertex2f(350.0f, 30.0f);
    glVertex2f(350.0f, 50.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(370.0f, 50.0f);
    glVertex2f(370.0f, 30.0f);
    glVertex2f(390.0f, 30.0f);
    glVertex2f(390.0f, 50.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(410.0f, 50.0f);
    glVertex2f(410.0f, 30.0f);
    glVertex2f(430.0f, 30.0f);
    glVertex2f(430.0f, 50.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(330.0f, 50.0f);
    glVertex2f(330.0f, 30.0f);
    glVertex2f(350.0f, 30.0f);
    glVertex2f(350.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(370.0f, 50.0f);
    glVertex2f(370.0f, 30.0f);
    glVertex2f(390.0f, 30.0f);
    glVertex2f(390.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(410.0f, 50.0f);
    glVertex2f(410.0f, 30.0f);
    glVertex2f(430.0f, 30.0f);
    glVertex2f(430.0f, 50.0f);
    glEnd();

    //window 2
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(245, 247, 186);
    if(State=='n')
        glColor3ub(234, 243, 255);
    glVertex2f(330.0f, 90.0f);
    glVertex2f(330.0f, 70.0f);
    glVertex2f(350.0f, 70.0f);
    glVertex2f(350.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(370.0f, 90.0f);
    glVertex2f(370.0f, 70.0f);
    glVertex2f(390.0f, 70.0f);
    glVertex2f(390.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(410.0f, 90.0f);
    glVertex2f(410.0f, 70.0f);
    glVertex2f(430.0f, 70.0f);
    glVertex2f(430.0f, 90.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(330.0f, 90.0f);
    glVertex2f(330.0f, 70.0f);
    glVertex2f(350.0f, 70.0f);
    glVertex2f(350.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(370.0f, 90.0f);
    glVertex2f(370.0f, 70.0f);
    glVertex2f(390.0f, 70.0f);
    glVertex2f(390.0f, 90.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(410.0f, 90.0f);
    glVertex2f(410.0f, 70.0f);
    glVertex2f(430.0f, 70.0f);
    glVertex2f(430.0f, 90.0f);
    glEnd();

    //window 3
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(245, 247, 186);
    if(State=='n')
        glColor3ub(234, 243, 255);
    glVertex2f(330.0f, 130.0f);
    glVertex2f(330.0f, 110.0f);
    glVertex2f(350.0f, 110.0f);
    glVertex2f(350.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(370.0f, 130.0f);
    glVertex2f(370.0f, 110.0f);
    glVertex2f(390.0f, 110.0f);
    glVertex2f(390.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(410.0f, 130.0f);
    glVertex2f(410.0f, 110.0f);
    glVertex2f(430.0f, 110.0f);
    glVertex2f(430.0f, 130.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(330.0f, 130.0f);
    glVertex2f(330.0f, 110.0f);
    glVertex2f(350.0f, 110.0f);
    glVertex2f(350.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(370.0f, 130.0f);
    glVertex2f(370.0f, 110.0f);
    glVertex2f(390.0f, 110.0f);
    glVertex2f(390.0f, 130.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(410.0f, 130.0f);
    glVertex2f(410.0f, 110.0f);
    glVertex2f(430.0f, 110.0f);
    glVertex2f(430.0f, 130.0f);
    glEnd();

    //window444
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(245, 247, 186);
    if(State=='n')
        glColor3ub(234, 243, 255);
    glVertex2f(330.0f, 190.0f);
    glVertex2f(330.0f, 170.0f);
    glVertex2f(350.0f, 170.0f);
    glVertex2f(350.0f, 190.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(370.0f, 190.0f);
    glVertex2f(370.0f, 170.0f);
    glVertex2f(390.0f, 170.0f);
    glVertex2f(390.0f, 190.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(410.0f, 190.0f);
    glVertex2f(410.0f, 170.0f);
    glVertex2f(430.0f, 170.0f);
    glVertex2f(430.0f, 190.0f);
    glEnd();
    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(330.0f, 190.0f);
    glVertex2f(330.0f, 170.0f);
    glVertex2f(350.0f, 170.0f);
    glVertex2f(350.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(370.0f, 190.0f);
    glVertex2f(370.0f, 170.0f);
    glVertex2f(390.0f, 170.0f);
    glVertex2f(390.0f, 190.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(35, 88, 13);
    glVertex2f(410.0f, 190.0f);
    glVertex2f(410.0f, 170.0f);
    glVertex2f(430.0f, 170.0f);
    glVertex2f(430.0f, 190.0f);
    glEnd();


}
void building9()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(91, 196, 191);
    if(State=='n')
        glColor3ub(48,87,84);

    glVertex2f(470.0f, 280.0f);
    glVertex2f(470.0f, 0.0f);
    glVertex2f(650.0f, 0.0f);
    glVertex2f(650.0f, 280.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(22, 62, 84);
    glVertex2f(470.0f, 280.0f);
    glVertex2f(470.0f, 0.0f);
    glVertex2f(650.0f, 0.0f);
    glVertex2f(650.0f, 280.0f);
    glEnd();
    //ceiling
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(91, 196, 191);
    if(State=='n')
        glColor3ub(48,87,84);
    glVertex2f(470.0f, 285.0f);
    glVertex2f(470.0f, 280.0f);
    glVertex2f(650.0f, 280.0f);
    glVertex2f(650.0f, 285.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(22, 62, 84);
    glVertex2f(470.0f, 285.0f);
    glVertex2f(470.0f, 280.0f);
    glVertex2f(650.0f, 280.0f);
    glVertex2f(650.0f, 285.0f);
    glEnd();

    //gate
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(210, 238, 251);
    if(State=='n')
        glColor3ub(255,255,119);

    glVertex2f(490.0f, 50.0f);
    glVertex2f(490.0f, 0.0f);
    glVertex2f(630.0f, 0.0f);
    glVertex2f(630.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(490.0f, 50.0f);
    glVertex2f(490.0f, 0.0f);
    glVertex2f(630.0f, 0.0f);
    glVertex2f(630.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(518.0f, 50.0f);
    glVertex2f(518.0f, 0.0f);
    glVertex2f(602.0f, 0.0f);
    glVertex2f(602.0f, 50.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(546.0f, 50.0f);
    glVertex2f(546.0f, 0.0f);
    glVertex2f(574.0f, 0.0f);
    glVertex2f(574.0f, 50.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(210, 238, 251);
    if(State=='n')
        glColor3ub(255,255,119);
    glVertex2f(476.0f, 260.0f);
    glVertex2f(476.0f, 60.0f);
    glVertex2f(644.0f, 60.0f);
    glVertex2f(644.0f, 260.0f);
    glEnd();
    //bbbb
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(476.0f, 100.0f);
    glVertex2f(476.0f, 60.0f);
    glVertex2f(644.0f, 60.0f);
    glVertex2f(644.0f, 100.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(476.0f, 140.0f);
    glVertex2f(476.0f, 100.0f);
    glVertex2f(644.0f, 100.0f);
    glVertex2f(644.0f, 140.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(476.0f, 180.0f);
    glVertex2f(476.0f, 140.0f);
    glVertex2f(644.0f, 140.0f);
    glVertex2f(644.0f, 180.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(476.0f, 220.0f);
    glVertex2f(476.0f, 180.0f);
    glVertex2f(644.0f, 180.0f);
    glVertex2f(644.0f, 220.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(476.0f, 260.0f);
    glVertex2f(476.0f, 220.0f);
    glVertex2f(644.0f, 220.0f);
    glVertex2f(644.0f, 260.0f);
    glEnd();
    //
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(504.0f, 100.0f);
    glVertex2f(504.0f, 60.0f);
    glVertex2f(616.0f, 60.0f);
    glVertex2f(616.0f, 100.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(504.0f, 140.0f);
    glVertex2f(504.0f, 100.0f);
    glVertex2f(616.0f, 100.0f);
    glVertex2f(616.0f, 140.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(504.0f, 180.0f);
    glVertex2f(504.0f, 140.0f);
    glVertex2f(616.0f, 140.0f);
    glVertex2f(616.0f, 180.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(504.0f, 220.0f);
    glVertex2f(504.0f, 180.0f);
    glVertex2f(616.0f, 180.0f);
    glVertex2f(616.0f, 220.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(504.0f, 260.0f);
    glVertex2f(504.0f, 220.0f);
    glVertex2f(616.0f, 220.0f);
    glVertex2f(616.0f, 260.0f);
    glEnd();
    //
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(532.0f, 100.0f);
    glVertex2f(532.0f, 60.0f);
    glVertex2f(588.0f, 60.0f);
    glVertex2f(588.0f, 100.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(532.0f, 140.0f);
    glVertex2f(532.0f, 100.0f);
    glVertex2f(588.0f, 100.0f);
    glVertex2f(588.0f, 140.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(532.0f, 180.0f);
    glVertex2f(532.0f, 140.0f);
    glVertex2f(588.0f, 140.0f);
    glVertex2f(588.0f, 180.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(532.0f, 220.0f);
    glVertex2f(532.0f, 180.0f);
    glVertex2f(588.0f, 180.0f);
    glVertex2f(588.0f, 220.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(532.0f, 260.0f);
    glVertex2f(532.0f, 220.0f);
    glVertex2f(588.0f, 220.0f);
    glVertex2f(588.0f, 260.0f);
    glEnd();

//mid line
    glBegin(GL_LINE_LOOP);
    glColor3ub(12, 54, 52);
    glVertex2f(560.0f, 260.0f);
    glVertex2f(560.0f, 60.0f);
    glVertex2f(588.0f, 60.0f);
    glVertex2f(588.0f, 260.0f);
    glEnd();

}
void building10()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(197, 79, 67);
    if(State=='n')
        glColor3ub(87,45,41);

    glVertex2f(660.0f, 230.0f);
    glVertex2f(660.0f, 0.0f);
    glVertex2f(810.0f, 0.0f);
    glVertex2f(810.0f, 230.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(0,0,0);
    glVertex2f(660.0f, 230.0f);
    glVertex2f(660.0f, 0.0f);
    glVertex2f(810.0f, 0.0f);
    glVertex2f(810.0f, 230.0f);
    glEnd();
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(197, 79, 67);
    if(State=='n')
        glColor3ub(87,45,41);
    glVertex2f(655.0f, 240.0f);
    glVertex2f(655.0f, 230.0f);
    glVertex2f(815.0f, 230.0f);
    glVertex2f(815.0f, 240.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(0,0,0);
    glVertex2f(655.0f, 240.0f);
    glVertex2f(655.0f, 230.0f);
    glVertex2f(815.0f, 230.0f);
    glVertex2f(815.0f, 240.0f);
    glEnd();

    //gate
    glBegin(GL_POLYGON);
    glColor3ub(104, 78, 45);
    glVertex2f(715.0f, 40.0f);
    glVertex2f(715.0f, 0.0f);
    glVertex2f(755.0f, 0.0f);
    glVertex2f(755.0f, 40.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(30,30,30);
    glVertex2f(715.0f, 40.0f);
    glVertex2f(715.0f, 0.0f);
    glVertex2f(755.0f, 0.0f);
    glVertex2f(755.0f, 40.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255,255,255);
    if(State=='n')
        glColor3ub(255,255,180);
    glVertex2f(680.0f, 90.0f);
    glVertex2f(680.0f, 60.0f);
    glVertex2f(700.0f, 60.0f);
    glVertex2f(700.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(710.0f, 90.0f);
    glVertex2f(710.0f, 60.0f);
    glVertex2f(730.0f, 60.0f);
    glVertex2f(730.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(740.0f, 90.0f);
    glVertex2f(740.0f, 60.0f);
    glVertex2f(760.0f, 60.0f);
    glVertex2f(760.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(770.0f, 90.0f);
    glVertex2f(770.0f, 60.0f);
    glVertex2f(790.0f, 60.0f);
    glVertex2f(790.0f, 90.0f);
    glEnd();



    //window 2
    glBegin(GL_POLYGON);
    glVertex2f(680.0f, 130.0f);
    glVertex2f(680.0f, 100.0f);
    glVertex2f(700.0f, 100.0f);
    glVertex2f(700.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(710.0f, 130.0f);
    glVertex2f(710.0f, 100.0f);
    glVertex2f(730.0f, 100.0f);
    glVertex2f(730.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(740.0f, 130.0f);
    glVertex2f(740.0f, 100.0f);
    glVertex2f(760.0f, 100.0f);
    glVertex2f(760.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(770.0f, 130.0f);
    glVertex2f(770.0f, 100.0f);
    glVertex2f(790.0f, 100.0f);
    glVertex2f(790.0f, 130.0f);
    glEnd();

    //window 3
    glBegin(GL_POLYGON);
    glVertex2f(680.0f, 170.0f);
    glVertex2f(680.0f, 140.0f);
    glVertex2f(700.0f, 140.0f);
    glVertex2f(700.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(710.0f, 170.0f);
    glVertex2f(710.0f, 140.0f);
    glVertex2f(730.0f, 140.0f);
    glVertex2f(730.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(740.0f, 170.0f);
    glVertex2f(740.0f, 140.0f);
    glVertex2f(760.0f, 140.0f);
    glVertex2f(760.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(770.0f, 170.0f);
    glVertex2f(770.0f, 140.0f);
    glVertex2f(790.0f, 140.0f);
    glVertex2f(790.0f, 170.0f);
    glEnd();

    //window 4
    glBegin(GL_POLYGON);
    glVertex2f(680.0f, 210.0f);
    glVertex2f(680.0f, 180.0f);
    glVertex2f(700.0f, 180.0f);
    glVertex2f(700.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(710.0f, 210.0f);
    glVertex2f(710.0f, 180.0f);
    glVertex2f(730.0f, 180.0f);
    glVertex2f(730.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(740.0f, 210.0f);
    glVertex2f(740.0f, 180.0f);
    glVertex2f(760.0f, 180.0f);
    glVertex2f(760.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(770.0f, 210.0f);
    glVertex2f(770.0f, 180.0f);
    glVertex2f(790.0f, 180.0f);
    glVertex2f(790.0f, 210.0f);
    glEnd();


}
void building11()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(249, 194, 48);
    if(State=='n')
        glColor3ub(167,85,20);
    glVertex2f(790.0f, 270.0f);
    glVertex2f(790.0f, 0.0f);
    glVertex2f(940.0f, 0.0f);
    glVertex2f(940.0f, 270.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(0,0,0);
    glVertex2f(790.0f, 270.0f);
    glVertex2f(790.0f, 0.0f);
    glVertex2f(940.0f, 0.0f);
    glVertex2f(940.0f, 270.0f);
    glEnd();
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(249, 194, 48);
    if(State=='n')
        glColor3ub(167,85,20);
    glVertex2f(785.0f, 280.0f);
    glVertex2f(785.0f, 270.0f);
    glVertex2f(945.0f, 270.0f);
    glVertex2f(945.0f, 280.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(0,0,0);
    glVertex2f(785.0f, 280.0f);
    glVertex2f(785.0f, 270.0f);
    glVertex2f(945.0f, 270.0f);
    glVertex2f(945.0f, 280.0f);
    glEnd();

    //gate
    glBegin(GL_POLYGON);
    glColor3ub(104, 78, 45);
    glVertex2f(845.0f, 40.0f);
    glVertex2f(845.0f, 0.0f);
    glVertex2f(885.0f, 0.0f);
    glVertex2f(885.0f, 40.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    if(State=='d')
        glColor3ub(22, 62, 84);
    if(State=='n')
        glColor3ub(30,30,30);
    glVertex2f(845.0f, 40.0f);
    glVertex2f(845.0f, 0.0f);
    glVertex2f(885.0f, 0.0f);
    glVertex2f(885.0f, 40.0f);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255,255,255);
    if(State=='n')
        glColor3ub(255,255,180);
    glVertex2f(810.0f, 90.0f);
    glVertex2f(810.0f, 60.0f);
    glVertex2f(830.0f, 60.0f);
    glVertex2f(830.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(840.0f, 90.0f);
    glVertex2f(840.0f, 60.0f);
    glVertex2f(860.0f, 60.0f);
    glVertex2f(860.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(870.0f, 90.0f);
    glVertex2f(870.0f, 60.0f);
    glVertex2f(890.0f, 60.0f);
    glVertex2f(890.0f, 90.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(900.0f, 90.0f);
    glVertex2f(900.0f, 60.0f);
    glVertex2f(920.0f, 60.0f);
    glVertex2f(920.0f, 90.0f);
    glEnd();

    //window 2
    glBegin(GL_POLYGON);
    glVertex2f(810.0f, 130.0f);
    glVertex2f(810.0f, 100.0f);
    glVertex2f(830.0f, 100.0f);
    glVertex2f(830.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(840.0f, 130.0f);
    glVertex2f(840.0f, 100.0f);
    glVertex2f(860.0f, 100.0f);
    glVertex2f(860.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(870.0f, 130.0f);
    glVertex2f(870.0f, 100.0f);
    glVertex2f(890.0f, 100.0f);
    glVertex2f(890.0f, 130.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(900.0f, 130.0f);
    glVertex2f(900.0f, 100.0f);
    glVertex2f(920.0f, 100.0f);
    glVertex2f(920.0f, 130.0f);
    glEnd();

    //window 3
    glBegin(GL_POLYGON);
    glVertex2f(810.0f, 170.0f);
    glVertex2f(810.0f, 140.0f);
    glVertex2f(830.0f, 140.0f);
    glVertex2f(830.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(840.0f, 170.0f);
    glVertex2f(840.0f, 140.0f);
    glVertex2f(860.0f, 140.0f);
    glVertex2f(860.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(870.0f, 170.0f);
    glVertex2f(870.0f, 140.0f);
    glVertex2f(890.0f, 140.0f);
    glVertex2f(890.0f, 170.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(900.0f, 170.0f);
    glVertex2f(900.0f, 140.0f);
    glVertex2f(920.0f, 140.0f);
    glVertex2f(920.0f, 170.0f);
    glEnd();

    //window 4
    glBegin(GL_POLYGON);
    glVertex2f(810.0f, 210.0f);
    glVertex2f(810.0f, 180.0f);
    glVertex2f(830.0f, 180.0f);
    glVertex2f(830.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(840.0f, 210.0f);
    glVertex2f(840.0f, 180.0f);
    glVertex2f(860.0f, 180.0f);
    glVertex2f(860.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(870.0f, 210.0f);
    glVertex2f(870.0f, 180.0f);
    glVertex2f(890.0f, 180.0f);
    glVertex2f(890.0f, 210.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(900.0f, 210.0f);
    glVertex2f(900.0f, 180.0f);
    glVertex2f(920.0f, 180.0f);
    glVertex2f(920.0f, 210.0f);
    glEnd();

    //window 5
    glBegin(GL_POLYGON);
    glVertex2f(810.0f, 250.0f);
    glVertex2f(810.0f, 220.0f);
    glVertex2f(830.0f, 220.0f);
    glVertex2f(830.0f, 250.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(840.0f, 250.0f);
    glVertex2f(840.0f, 220.0f);
    glVertex2f(860.0f, 220.0f);
    glVertex2f(860.0f, 250.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(870.0f, 250.0f);
    glVertex2f(870.0f, 220.0f);
    glVertex2f(890.0f, 220.0f);
    glVertex2f(890.0f, 250.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(900.0f, 250.0f);
    glVertex2f(900.0f, 220.0f);
    glVertex2f(920.0f, 220.0f);
    glVertex2f(920.0f, 250.0f);
    glEnd();



}

void shadow1()
{
    //body 1
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(129, 164, 169);
    if(State=='n')
        glColor3ub(0, 14, 66);
    glVertex2f(-50.0f, 250.0f);
    glVertex2f(-50.0f, 0.0f);
    glVertex2f(150.0f, 0.0f);
    glVertex2f(150.0f, 250.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(40.0f, 290.0f);
    glVertex2f(40.0f, 250.0f);
    glVertex2f(110.0f, 250.0f);
    glVertex2f(110.0f, 290.0f);
    glEnd();

    //2
    //body
    glBegin(GL_POLYGON);
    glVertex2f(-80.0f, 330.0f);
    glVertex2f(-80.0f, 0.0f);
    glVertex2f(-150.0f, 0.0f);
    glVertex2f(-150.0f, 330.0f);
    glEnd();
    //3
    glBegin(GL_POLYGON);
    glVertex2f(-150.0f, 270.0f);
    glVertex2f(-150.0f, 0.0f);
    glVertex2f(-230.0f, 0.0f);
    glVertex2f(-230.0f, 270.0f);
    glEnd();
    // 4
    glBegin(GL_POLYGON);
    glVertex2f(-250.0f, 330.0f);
    glVertex2f(-250.0f, 0.0f);
    glVertex2f(-320.0f, 0.0f);
    glVertex2f(-320.0f, 330.0f);
    glEnd();

    // 5
    glBegin(GL_POLYGON);
    glVertex2f(-350.0f, 250.0f);
    glVertex2f(-350.0f, 0.0f);
    glVertex2f(-500.0f, 0.0f);
    glVertex2f(-500.0f, 250.0f);
    glEnd();
    // 6
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f, 290.0f);
    glVertex2f(-600.0f, 0.0f);
    glVertex2f(-700.0f, 0.0f);
    glVertex2f(-700.0f, 290.0f);
    glEnd();

    // 7
    glBegin(GL_POLYGON);
    glVertex2f(-750.0f, 310.0f);
    glVertex2f(-750.0f, 0.0f);
    glVertex2f(-830.0f, 0.0f);
    glVertex2f(-830.0f, 310.0f);
    glEnd();
    // 8
    glBegin(GL_POLYGON);
    glVertex2f(-900.0f, 240.0f);
    glVertex2f(-900.0f, 0.0f);
    glVertex2f(-970.0f, 0.0f);
    glVertex2f(-970.0f, 240.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-940.0f, 270.0f);
    glVertex2f(-940.0f, 0.0f);
    glVertex2f(-970.0f, 0.0f);
    glVertex2f(-970.0f, 270.0f);
    glEnd();

}
void shadow2()
{
    //body
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(129, 164, 169);
    if(State=='n')
        glColor3ub(0, 14, 66);
    glVertex2f(260.0f, 260.0f);
    glVertex2f(260.0f, 0.0f);
    glVertex2f(370.0f, 0.0f);
    glVertex2f(370.0f, 260.0f);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    glVertex2f(390.0f, 295.0f);
    glVertex2f(390.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 295.0f);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    glVertex2f(570.0f, 340.0f);
    glVertex2f(570.0f, 0.0f);
    glVertex2f(700.0f, 0.0f);
    glVertex2f(700.0f, 280.0f);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    glVertex2f(800.0f, 300.0f);
    glVertex2f(800.0f, 0.0f);
    glVertex2f(970.0f, 0.0f);
    glVertex2f(970.0f, 300.0f);
    glEnd();

}


void DrawBuilding()
{
    shadow1();
    shadow2();
    building1();
    building2();
    building3();
    building4();
    building5();
    building6();
    building7();
    building8();
    building9();
    building11();
    building10();

}

void SkyColor()
{
    glBegin(GL_POLYGON);
    if(State=='d')
    {
        glColor3ub(156, 224, 235);
    }
    if(State=='n')
    {
        glColor3ub(0, 14, 66);
    }

    glVertex2f(960.0f, 500.0f);
    glVertex2f(-960.0f, 500.0f);

    if(State=='d')
    {
        glColor3ub(255,255,255);
    }
    if(State=='n')
    {
        glColor3ub(28, 48, 114);
    }
    glVertex2f(-960.0f, 100.0f);
    glVertex2f(960.0f, 100.0f);

    glEnd();
}


void SkyCloud01()
{
    glPushMatrix();
    glTranslatef(Cloud1_Position,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State=='d')
            glColor3ub(255.0f,255.0f,255.0f);
        if(State=='n')
            glColor3ub(200.0f,200.0f,200.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=45.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+20,y+400);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-20,y+400);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {

        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+400);
    }
    glEnd();


    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=30.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-60,y+400);
    }
    glEnd();
    glPopMatrix();
}

void SkyCloud02()
{
    glPushMatrix();
    glTranslatef(Cloud2_Position,0.0f,0.0f);
    glTranslatef(-700.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State=='d')
            glColor3ub(255.0f,255.0f,255.0f);
        if(State=='n')
            glColor3ub(200.0f,200.0f,200.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=40.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-10,y+400);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=40.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+70,y+400);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=26.0f;
        float x = 1.3 *r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+28,y+436);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=26.0f;
        float x = 1.3 *r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+28,y+385);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=26.0f;
        float x = 1.3 *r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+115,y+390);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=26.0f;
        float x = 1.3 *r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-40,y+390);
    }
    glEnd();
    glPopMatrix();
}

void SkyCloud03()
{
    glPushMatrix();
    glTranslatef(Cloud3_Position,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State=='d')
            glColor3ub(255.0f,255.0f,255.0f);
        if(State=='n')
            glColor3ub(200.0f,200.0f,200.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=45.0f;
        float x = 1.3 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+620,y+420);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+570,y+415);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+700,y+415);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=40.0f;
        float x = 1.2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+680,y+420);
    }
    glEnd();
    glPopMatrix();
}

void SkyCloud04()
{
    glPushMatrix();
    glTranslatef(Cloud4_Position,0.0f,0.0f);
    glTranslatef(-350.0f,-20.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State=='d')
            glColor3ub(255.0f,255.0f,255.0f);
        if(State=='n')
            glColor3ub(200.0f,200.0f,200.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = 1.5*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-100,y+410);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = 1.5*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+415);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = 2*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-35,y+415);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-80,y+425);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-50,y+450);
    }
    glEnd();
    //big
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0f;
        float x = r * cos(A);
        float y = 1.3*r * sin(A);
        glVertex2f(x-10,y+460);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = r * cos(A);
        float y = 1.3*r * sin(A);
        glVertex2f(x+35,y+445);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=25.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+435);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=15.0f;
        float x = 1.6*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+85,y+418);
    }
    glEnd();
    glPopMatrix();
}

void DrawPlane()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.40f,0.40f,0.0f);
    glTranslatef(850.0f, 600.0f, 0.0f);
    glTranslatef(-Plane_Position,0.0f,0.0f);
    glColor3ub ( 128, 128, 128 );
    glBegin(GL_POLYGON);
    glVertex2i(460,390);
    glVertex2i(570,305);
    glVertex2i(620,300);
    glVertex2i(680,300);
    glVertex2i(580,395);
    glVertex2i(505,400);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(590,380);
    glVertex2i(850,395);
    glVertex2i(880,405);
    glVertex2i(900,430);
    glVertex2i(900,440);
    glVertex2i(400,460);
    glVertex2i(320,430);
    glVertex2i(310,425);
    glVertex2i(300,410);
    glVertex2i(260,395);
    glVertex2i(270,390);
    glVertex2i(470,380);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(450,455);
    glVertex2i(560,450);
    glVertex2i(590,500);
    glVertex2i(520,510);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(850,405);
    glVertex2i(900,370);
    glVertex2i(930,370);
    glVertex2i(880,405);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(890,440);
    glVertex2i(900,495);
    glVertex2i(860,485);
    glVertex2i(840,430);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(335,435);
    glVertex2i(310,420);
    glVertex2i(340,415);
    glVertex2i(360,430);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(255.0f,255.0f,255.0f);
    if(State=='n')
        glColor3ub(255.0f,255.0f,112.0f);
    glVertex2i(460,420);
    glVertex2i(470,410);
    glVertex2i(480,425);
    glVertex2i(465,430);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(500,420);
    glVertex2i(510,410);
    glVertex2i(520,425);
    glVertex2i(505,430);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(550,420);
    glVertex2i(560,410);
    glVertex2i(570,425);
    glVertex2i(555,430);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2i(590,420);
    glVertex2i(600,410);
    glVertex2i(610,425);
    glVertex2i(595,430);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(630,420);
    glVertex2i(640,410);
    glVertex2i(650,425);
    glVertex2i(635,430);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(670,420);
    glVertex2i(680,410);
    glVertex2i(690,425);
    glVertex2i(675,430);
    glEnd();

    glPopMatrix();
}


void SkyCloud()
{
    SkyCloud01();
    SkyCloud02();

    DrawPlane();

    SkyCloud03();
    SkyCloud04();
}

//DRAWING SUN
void SkySun()
{
    glPushMatrix();
    //glTranslatef(0, Sun_Position, 0);

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State == 'd')
        {
            glColor3ub(255.0f,222.0f,62.0f);
        }
        if(State == 'n')
        {
            glColor3ub(255.0f,255.0f,255.0f);
        }
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=40.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+700,y+400);
    }
    glEnd();

    glPopMatrix();
}

void star1()
{
    glPushMatrix();
    glTranslatef(-50,70,0);
    glScalef(2.5,2.5,0);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(240.0f,240.0f,240.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-180,y+95);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-179.3f,95.8f);
    glVertex2f(-180.7f,95.8f);
    glVertex2f(-180.0f,97.5f);
    glEnd();
    glTranslatef(-180.0f,95.0f,0.0f);
    glRotatef(72,0.0f, 0.0f, 1.0f);
    glTranslatef(180.0f,-95.0f,0.0f);
    glColor3ub(240.0f,240.0f,240.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-179.3f,95.8f);
    glVertex2f(-180.7f,95.8f);
    glVertex2f(-180.0f,97.5f);
    glEnd();
    glTranslatef(-180.0f,95.0f,0.0f);
    glRotatef(72,0.0f, 0.0f, 1.0f);
    glTranslatef(180.0f,-95.0f,0.0f);
    glColor3ub(240.0f,240.0f,240.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-179.3f,95.8f);
    glVertex2f(-180.7f,95.8f);
    glVertex2f(-180.0f,97.5f);
    glEnd();
    glTranslatef(-180.0f,95.0f,0.0f);
    glRotatef(72,0.0f, 0.0f, 1.0f);
    glTranslatef(180.0f,-95.0f,0.0f);
    glColor3ub(240.0f,240.0f,240.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-179.3f,95.8f);
    glVertex2f(-180.7f,95.8f);
    glVertex2f(-180.0f,97.5f);
    glEnd();
    glTranslatef(-180.0f,95.0f,0.0f);
    glRotatef(72,0.0f, 0.0f, 1.0f);
    glTranslatef(180.0f,-95.0f,0.0f);
    glColor3ub(240.0f,240.0f,240.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-179.3f,95.8f);
    glVertex2f(-180.7f,95.8f);
    glVertex2f(-180.0f,97.5f);
    glEnd();
    glPopMatrix();
}

void star2()
{
    glPushMatrix();
    glTranslatef(-380,30,0);
    star1();

    glPopMatrix();
}
void star3()
{
    glPushMatrix();
    glTranslatef(-250,150,0);
    star1();

    glPopMatrix();
}

void star4()
{
    glPushMatrix();
    glTranslatef(50,150,0);
    star1();

    glPopMatrix();
}
void star5()
{
    glPushMatrix();
    glTranslatef(250,80,0);
    star1();

    glPopMatrix();
}
void star6()
{
    glPushMatrix();
    glTranslatef(450,140,0);
    star1();

    glPopMatrix();
}
void star7()
{
    glPushMatrix();
    glTranslatef(650,30,0);
    star1();

    glPopMatrix();
}
void star8()
{
    glPushMatrix();
    glTranslatef(800,150,0);
    star1();

    glPopMatrix();
}
void star9()
{
    glPushMatrix();
    glTranslatef(1000,50,0);
    star1();

    glPopMatrix();
}
void star10()
{
    glPushMatrix();
    glTranslatef(1250,150,0);
    star1();

    glPopMatrix();
}
void star11()
{
    glPushMatrix();
    glTranslatef(1400,35,0);
    star1();

    glPopMatrix();
}
void DrawStar()
{
    star1();
    star2();
    star3();
    star4();
    star5();
    star6();
    star7();
    star8();
    star9();
    star10();
    star11();


}

void DrawSky()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    SkyColor();
    if(State=='n')
    {
        DrawStar();
    }
    SkySun();
    SkyCloud();
    glPopMatrix();
}

//DRAWING ROAD BORDER
void RoadBorder()
{
    //WHITE COLOR
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-960.0f, -290.0f);
    glVertex2f(960.0f, -290.0f);
    glVertex2f(960.0f, -280.0f);
    glVertex2f(-960.0f, -280.0f);
    glEnd();

    //BLACK COLOR
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, -290.0f);
    glVertex2f(100.0f, -290.0f);
    glVertex2f(100.0f, -280.0f);
    glVertex2f(0.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(200.0f, -290.0f);
    glVertex2f(300.0f, -290.0f);
    glVertex2f(300.0f, -280.0f);
    glVertex2f(200.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(500.0f, -290.0f);
    glVertex2f(400.0f, -290.0f);
    glVertex2f(400.0f, -280.0f);
    glVertex2f(500.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(700.0f, -290.0f);
    glVertex2f(600.0f, -290.0f);
    glVertex2f(600.0f, -280.0f);
    glVertex2f(700.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(900.0f, -290.0f);
    glVertex2f(800.0f, -290.0f);
    glVertex2f(800.0f, -280.0f);
    glVertex2f(900.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-200.0f, -290.0f);
    glVertex2f(-100.0f, -290.0f);
    glVertex2f(-100.0f, -280.0f);
    glVertex2f(-200.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-400.0f, -290.0f);
    glVertex2f(-300.0f, -290.0f);
    glVertex2f(-300.0f, -280.0f);
    glVertex2f(-400.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-600.0f, -290.0f);
    glVertex2f(-500.0f, -290.0f);
    glVertex2f(-500.0f, -280.0f);
    glVertex2f(-600.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-800.0f, -290.0f);
    glVertex2f(-700.0f, -290.0f);
    glVertex2f(-700.0f, -280.0f);
    glVertex2f(-800.0f, -280.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1000.0f, -290.0f);
    glVertex2f(-900.0f, -290.0f);
    glVertex2f(-900.0f, -280.0f);
    glVertex2f(-1000.0f, -280.0f);
    glEnd();
}

//DRAWING ROAD PITCH
void RoadPitch()
{
    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(71, 71, 71);
    if(State=='n')
        glColor3ub(60,60,60);

    glVertex2f(-960.0f, -500.0f);
    glVertex2f(960.0f, -500.0f);
    glVertex2f(960.0f, -280.0f);
    glVertex2f(-960.0f, -280.0f);
    glEnd();
}

//DRAWING ROAD LINE
void RoadLine()
{
    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);
    glVertex2f(820.0f, -400.0f);
    glVertex2f(960.0f, -400.0f);
    glVertex2f(960.0f, -390.0f);
    glVertex2f(820.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(620.0f, -400.0f);
    glVertex2f(760.0f, -400.0f);
    glVertex2f(760.0f, -390.0f);
    glVertex2f(620.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(420.0f, -400.0f);
    glVertex2f(560.0f, -400.0f);
    glVertex2f(560.0f, -390.0f);
    glVertex2f(420.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(220.0f, -400.0f);
    glVertex2f(360.0f, -400.0f);
    glVertex2f(360.0f, -390.0f);
    glVertex2f(220.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(20.0f, -400.0f);
    glVertex2f(160.0f, -400.0f);
    glVertex2f(160.0f, -390.0f);
    glVertex2f(20.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-180.0f, -400.0f);
    glVertex2f(-40.0f, -400.0f);
    glVertex2f(-40.0f, -390.0f);
    glVertex2f(-180.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-380.0f, -400.0f);
    glVertex2f(-240.0f, -400.0f);
    glVertex2f(-240.0f, -390.0f);
    glVertex2f(-380.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-580.0f, -400.0f);
    glVertex2f(-440.0f, -400.0f);
    glVertex2f(-440.0f, -390.0f);
    glVertex2f(-580.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-780.0f, -400.0f);
    glVertex2f(-640.0f, -400.0f);
    glVertex2f(-640.0f, -390.0f);
    glVertex2f(-780.0f, -390.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-980.0f, -400.0f);
    glVertex2f(-840.0f, -400.0f);
    glVertex2f(-840.0f, -390.0f);
    glVertex2f(-980.0f, -390.0f);
    glEnd();
}

void Car01_Body()
{
    glScalef(1000.0f,1000.0f,0.0f);
    if(State=='n')
    {
        glPushMatrix();
        glTranslatef(-0.59,0.16,0);
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.10,0.05);
        glVertex2f(-0.04,0.01);
        glVertex2f(-0.04,0.08);

        glEnd();
        glPopMatrix();
    }
    glColor3ub(255.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.84f,0.23f);
    glVertex2f(-0.845f,0.228f);
    glVertex2f(-0.85f,0.2f);
    glVertex2f(-0.68f,0.2f);
    glVertex2f(-0.685f,0.22f);
    glVertex2f(-0.73f,0.22f);
    glEnd();

    glColor3ub(255.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f,0.2f);
    glVertex2f(-0.84f,0.187f);
    glVertex2f(-0.69f,0.187f);
    glVertex2f(-0.68f,0.2f);
    glEnd();
    glColor3ub(255.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.83f,0.23f);
    glVertex2f(-0.81f,0.26f);
    glVertex2f(-0.75f,0.26f);
    glVertex2f(-0.72f,0.22f);
    glEnd();
    //window
    glColor3ub(50.0f,50.0f,50.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.825f,0.225f);
    glVertex2f(-0.803f,0.255f);
    glVertex2f(-0.755f,0.255f);
    glVertex2f(-0.733f,0.225f);
    glEnd();
    //door
    glColor3ub(200.0f,100.0f,100.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.825f,0.225f);
    glVertex2f(-0.805f,0.187f);
    glVertex2f(-0.779f,0.255f);
    glVertex2f(-0.779f,0.187f);
    glVertex2f(-0.733f,0.225f);
    glVertex2f(-0.753f,0.187f);
    glEnd();

}

void Car01_Tire1()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.815f,0.185f,0.0f);
    //glRotatef(car1_angle, 0.0f, 0.0f,1.0f);
    glTranslatef(0.815f,-0.185f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(32.0f,32.0f,32.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.010;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();

    glPopMatrix();
}

void Car01_Tire2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.725f,0.185f,0.0f);
    //glRotatef(car1_angle, 0.0f, 0.0f,1.0f);
    glTranslatef(0.725f,-0.185f,0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.725,y+0.185);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(32.0f,32.0f,32.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.010;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.725,y+0.185);
    }
    glEnd();

    glPopMatrix();
}

//DRAWING CAR01
void Car01()
{
    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,-555.0f,0.0f);
    glTranslatef(Car1_Position,0.0f,0.0f);
    Car01_Body();

    Car01_Tire1();
    Car01_Tire2();

    glPopMatrix();

}

void Car02_Body()
{

    glScalef(1000.0f,1000.0f,0.0f);
    if(State=='n')
    {
        glPushMatrix();
        glTranslatef(0.65,-0.045,0);
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.04,0.05);
        glVertex2f(-0.04,0.01);
        glVertex2f(-0.04,0.08);

        glEnd();
        glPopMatrix();
    }
    glColor3ub(0.0f,200.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.84f,0.03f);
    glVertex2f(0.845f,0.028f);
    glVertex2f(0.85f,0.0f);
    glVertex2f(0.68f,0.0f);
    glVertex2f(0.685f,0.02f);
    glVertex2f(0.73f,0.02f);
    glEnd();
    glColor3ub(0.0f,200.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.85f,0.0f);
    glVertex2f(0.84f,-0.013f);
    glVertex2f(0.69f,-0.013f);
    glVertex2f(0.68f,0.0f);
    glEnd();
    glColor3ub(0.0f,200.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.83f,0.03f);
    glVertex2f(0.81f,0.06f);
    glVertex2f(0.75f,0.06f);
    glVertex2f(0.72f,0.02f);
    glEnd();
    glColor3ub(50.0f,50.0f,50.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.825f,0.025f);
    glVertex2f(0.803f,0.055f);
    glVertex2f(0.755f,0.055f);
    glVertex2f(0.733f,0.025f);
    glEnd();
    glColor3ub(134.0f,220.0f,232.0f);
    glBegin(GL_LINES);
    glVertex2f(0.825f,0.025f);
    glVertex2f(0.805f,-0.013f);
    glVertex2f(0.779f,0.055f);
    glVertex2f(0.779f,-0.013f);
    glVertex2f(0.733f,0.025f);
    glVertex2f(0.753f,-0.013f);
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.725,y-0.015);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.815,y-0.015);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(32.0f,32.0f,32.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.008;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.725,y-0.015);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(32.0f,32.0f,32.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.008;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.815,y-0.015);
    }
    glEnd();
}

//DRAWING CAR02
void Car02()
{
    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(250.0f,-430.0f,0.0f);
    glTranslatef(-Car2_Position,0.0f,0.0f);
    Car02_Body();

    //Car02_Tire1();
    //Car02_Tire2();

    glPopMatrix();

}

//DRAWING TRUCK BODY
void Truck_Body()
{
    //head light
    if(State=='n')
    {
        glPushMatrix();
        glTranslatef(-835,-485,0);
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(160,40);
        glVertex2f(80,0);
        glVertex2f(80,80);

        glEnd();
        glPopMatrix();
    }
    //DRAWING TRUCK - RIGHT
    glColor3ub(255,148,0);
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f,-460.0f);
    glVertex2f(-400.0f,-460.0f);
    glVertex2f(-400.0f,-380.0f);
    glVertex2f(-600.0f,-380.0f);
    glEnd();

    //DRAWING RIGHT BODY MIDDLE
    glColor3ub(90,166,255);
    glBegin(GL_POLYGON);
    glVertex2f(-600.0f,-430.0f);
    glVertex2f(-400.0f,-430.0f);
    glVertex2f(-400.0f,-420.0f);
    glVertex2f(-600.0f,-420.0f);
    glEnd();

    //DRAWING TRUCK - LEFT
    glColor3ub(253,17,6);
    glBegin(GL_POLYGON);
    glVertex2f(-680.0f,-460.0f);
    glVertex2f(-600.0f,-460.0f);
    glVertex2f(-600.0f,-400.0f);
    glVertex2f(-640.0f,-400.0f);
    glVertex2f(-680.0f,-440.0f);
    glEnd();

    //DRAWING TRUCK - BOTTOM
    glColor3ub(1,54,60);
    glBegin(GL_POLYGON);
    glVertex2f(-680.0f,-460.0f);
    glVertex2f(-395.0f,-460.0f);
    glVertex2f(-395.0f,-450.0f);
    glVertex2f(-680.0f,-450.0f);
    glEnd();

    //DRAWING TRUCK - TIRES
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    //DRAWING LEFT TIRE
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18;
        float x = -640 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=13;
        float x = -640 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();

    //DRAWING RIGHT TIRE01
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18;
        float x = -560 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=13;
        float x = -560 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();

    //DRAWING RIGHT TIRE02
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18;
        float x = -450 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=13;
        float x = -450 + r * cos(A);
        float y = -460 + r * sin(A);
        glVertex2f(x-0.815,y+0.185);
    }
    glEnd();

    glPopMatrix();

    //DRAWING TRUCK GLASS
    glColor3ub(50, 50, 50);
    glBegin(GL_POLYGON);
    glVertex2f(-660.0f,-435.0f);
    glVertex2f(-610.0f,-435.0f);
    glVertex2f(-610.0f,-405.0f);
    glVertex2f(-630.0f,-405.0f);
    glEnd();

}

//DRAWING TRUCK
void Truck()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(0.0f,-15.0f,0.0f);
    glTranslatef(-Truck_Position,0.0f,0.0f);
    Truck_Body();


    glPopMatrix();

}

//DRAWING CAR 03 TIRES
void Car3tire1()
{
    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-1.1f,0.1f,0.0f);
    glRotatef(60, 0.0f, 0.0f,1.0f);
    glTranslatef(1.1f,-0.1f,0.0f);
    //tire1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(255.0f,255.0f,255.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.45;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-1.1,y+0.1);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.41;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-1.1,y+0.1);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(150.0f,150.0f,150.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.23;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-1.1,y+0.1);
    }
    glEnd();
    glColor3ub(200.0f,0.0f,0.0f);
    glBegin(GL_LINES);
    glVertex2f(-1.1f,0.33f);
    glVertex2f(-1.1f,-0.13f);
    glVertex2f(-1.33f,0.1f);
    glVertex2f(-0.87f,0.1f);
    glEnd();
    glPopMatrix();
}
void Car3tire2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-4.3f,0.1f,0.0f);
    glRotatef(60, 0.0f, 0.0f,1.0f);
    glTranslatef(4.3f,-0.1f,0.0f);
    //tire2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(255.0f,255.0f,255.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.45;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-4.3,y+0.1);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,0.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.41;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-4.3,y+0.1);
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3ub(150.0f,150.0f,150.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.23;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-4.3,y+0.1);
    }
    glEnd();
    glColor3ub(200.0f,0.0f,0.0f);
    glBegin(GL_LINES);
    glVertex2f(-4.3f,0.33f);
    glVertex2f(-4.3f,-0.13f);
    glVertex2f(-4.53f,0.1f);
    glVertex2f(-4.07f,0.1f);
    glEnd();
    glPopMatrix();
}


//DRAWING CAR 03
void Car03()
{

    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(Car3_Position, 0.0f, 0.0f);
    glTranslatef(500, -340, 0);
    glScalef(32, 32, 0);
    //head light
    if(State=='n')
    {
        glPushMatrix();
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(0,0.7);
        glVertex2f(2.5,-0.3);
        glVertex2f(2.5,1.5);

        glEnd();
        glPopMatrix();
    }
    //body
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,0.0f);
    glVertex2f(-0.0f,1.0f);
    glVertex2f(-5.0f,1.0f);
    glVertex2f(-5.0f,0.0f);
    glEnd();
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,0.0f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.15f,0.95f);
    glVertex2f(-0.0f,1.0f);
    glEnd();
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,1.0f);
    glVertex2f(-1.0f,1.15f);
    glVertex2f(-1.0f,1.0f);
    glEnd();
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,1.15f);
    glVertex2f(-2.0f,2.2f);
    glVertex2f(-4.0f,2.2f);
    glVertex2f(-4.6f,1.3f);
    glVertex2f(-5.0f,1.2f);
    glVertex2f(-5.0f,1.0f);
    glEnd();
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f,1.2f);
    glVertex2f(-5.35f,1.1f);
    glVertex2f(-5.35f,0.1f);
    glVertex2f(-5.0f,0.0f);
    glEnd();
    glColor3ub(35.0f,80.0f,200.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.35f,0.1f);
    glVertex2f(-5.5f,0.143f);
    glVertex2f(-5.35f,0.6f);
    glEnd();
    //Window
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.2f,1.15f);
    glVertex2f(-2.0f,2.0f);
    glVertex2f(-3.0f,2.0f);
    glVertex2f(-3.0f,1.15f);
    glEnd();
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.2f,1.15f);
    glVertex2f(-3.2f,2.0f);
    glVertex2f(-3.95f,2.0f);
    glVertex2f(-4.5f,1.15f);
    glEnd();
    Car3tire1();
    Car3tire2();
    glPopMatrix();
}

void DrawRoad()
{
    RoadPitch();
    RoadLine();
    RoadBorder();
    Car03();
    Car01();
    Car02();
    Truck();
}

//DRAWING RIVER WATER
void RiverWater()
{
    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(68,176,205);
    if(State=='n')
        glColor3ub(0,114,160);
    glVertex2f(-960.0f, -280.0f);
    glVertex2f(960.0f, -280.0f);
    glVertex2f(960.0f, 0.0f);
    glVertex2f(-960.0f, 0.0f);
    glEnd();
}

//DRAWING RIVER TOP BORDER
void RiverTopBorder()
{

    glBegin(GL_QUADS);
    glColor3ub(67, 32, 11);
    glVertex2f(-960.0f, -10.0f);
    glVertex2f(960.0f, -10.0f);
    glVertex2f(960.0f, 0.0f);
    glVertex2f(-960.0f, 0.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(22, 57, 113);
    glVertex2f(-960.0f, -10.0f);
    glVertex2f(960.0f, -10.0f);
    glVertex2f(960.0f, -5.0f);
    glVertex2f(-960.0f, -5.0f);
    glEnd();

}


//DRAWING SHIP 01
void DrawShip01()
{

    ////
    glPushMatrix();
    glTranslatef(-Ship1_Position,0.0f,0.0f);
    glTranslatef(300, -30, 0);
    //head light
    if(State=='n')
    {
        glPushMatrix();
        glTranslatef(0,-155,0);
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(170,35);
        glVertex2f(0,0);
        glVertex2f(0,80);

        glEnd();
        glPopMatrix();
    }
    glScalef(0.75, 0.75, 0);
    glColor3ub ( 255, 0, 0 );
    glBegin(GL_POLYGON);
    glVertex2i(750,-255);
    glVertex2i(800,-230);
    glVertex2i(320,-230);
    glVertex2i(400,-255);
    glEnd();

    glColor3ub ( 0, 255, 64);
    glBegin(GL_POLYGON);
    glVertex2i(800,-230);
    glVertex2i(880,-170);
    glVertex2i(230,-170);
    glVertex2i(320,-230);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(550,-170);
    glVertex2i(550,-150);
    glVertex2i(200,-150);
    glVertex2i(230,-170);
    glEnd();


    //blue khamba
    if(State=='d')
        glColor3ub ( 140, 26, 255);
    if(State=='n')
        glColor3ub(77, 10, 126);

    glBegin(GL_QUADS);
    glVertex2i(550,-170);
    glVertex2i(600,-170);
    glVertex2i(600,-150);
    glVertex2i(550,-150);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(500,-150);
    glVertex2i(600,-150);
    glVertex2i(600,-130);
    glVertex2i(500,-130);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(500,-150);
    glVertex2i(600,-150);
    glVertex2i(600,-130);
    glVertex2i(500,-130);
    glEnd();


    if(State=='d')
        glColor3ub ( 255, 255, 26);
    if(State=='n')
        glColor3ub ( 255, 255, 11);
    glBegin(GL_QUADS);
    glVertex2i(500,-130);
    glVertex2i(600,-130);
    glVertex2i(600,-110);
    glVertex2i(500,-110);
    glEnd();

    //blue khamba
    if(State=='d')
        glColor3ub ( 140, 26, 255);
    if(State=='n')
        glColor3ub(77, 10, 126);
    glBegin(GL_QUADS);
    glVertex2i(500,-110);
    glVertex2i(600,-110);
    glVertex2i(600,-90);
    glVertex2i(500,-90);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(660,-170);
    glVertex2i(780,-170);
    glVertex2i(780,-150);
    glVertex2i(660,-150);
    glEnd();

    if(State=='d')
        glColor3ub ( 255, 255, 26);
    if(State=='n')
        glColor3ub ( 255, 255, 11);
    glBegin(GL_QUADS);
    glVertex2i(660,-150);
    glVertex2i(780,-150);
    glVertex2i(780,-130);
    glVertex2i(660,-130);
    glEnd();

    //blue khamba
    if(State=='d')
        glColor3ub ( 140, 26, 255);
    if(State=='n')
        glColor3ub(77, 10, 126);
    glBegin(GL_QUADS);
    glVertex2i(660,-130);
    glVertex2i(780,-130);
    glVertex2i(780,-105);
    glVertex2i(660,-105);
    glEnd();

    glColor3ub ( 0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(550,-170);
    glVertex2i(880,-170);
    glVertex2i(880,-160);
    glVertex2i(550,-160);
    glVertex2i(550,-170);
    glVertex2i(570,-170);
    glVertex2i(570,-160);
    glVertex2i(610,-160);
    glVertex2i(610,-170);
    glVertex2i(660,-170);
    glVertex2i(660,-160);
    glVertex2i(720,-160);
    glVertex2i(720,-170);
    glVertex2i(800,-170);
    glVertex2i(800,-160);
    glVertex2i(850,-160);
    glVertex2i(850,-170);
    glVertex2i(880,-170);
    glVertex2i(800,-230);
    glVertex2i(750,-255);
    glVertex2i(400,-255);
    glVertex2i(320,-230);
    glVertex2i(800,-230);
    glVertex2i(320,-230);
    glVertex2i(200,-150);
    glVertex2i(550,-150);
    glVertex2i(550,-170);
    glVertex2i(600,-170);
    glVertex2i(600,-130);
    glVertex2i(500,-130);
    glVertex2i(500,-150);
    glVertex2i(500,-90);
    glVertex2i(600,-90);
    glVertex2i(600,-110);
    glVertex2i(500,-110);
    glVertex2i(600,-110);
    glVertex2i(600,-170);
    glVertex2i(660,-170);
    glVertex2i(660,-105);
    glVertex2i(780,-105);
    glVertex2i(780,-130);
    glVertex2i(660,-130);
    glVertex2i(780,-130);
    glVertex2i(780,-150);
    glVertex2i(660,-150);
    glVertex2i(780,-150);
    glVertex2i(780,-170);
    glEnd();



    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub ( 255, 0, 0 );
        glColor3ub(0.0f,64.0f,255.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+600,y-200);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255.0f,128.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=15.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+600,y-200);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,64.0f,255.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+670,y-200);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255.0f,128.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=15.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+670,y-200);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0.0f,64.0f,255.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+740,y-200);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255.0f,128.0f,0.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=15.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+740,y-200);
    }
    glEnd();

//KALAJHADU
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        if(State=='d')
            glColor3ub(200,200,200);
        if(State=='n')
            glColor3ub(150,150,150);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = 2.2*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+570,y-60);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = 2.2*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+620,y-10);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = 2.2*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+760,y-70);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0f;
        float x = 2.2*r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+800,y-20);
    }
    glEnd();

    glPopMatrix();
}

//DRAWING SHIP 02
void DrawShip02()
{
    glPushMatrix();
    glTranslatef(Ship2_Position,0.0f,0.0f);
    glScalef(0.60, 0.60, 0);
    glTranslatef(0, 60, 0);

    //head light
    if(State=='n')
    {
        glPushMatrix();
        glScalef(1.40, 1.40, 0);
        glTranslatef(-7,-110,0);
        glColor3ub(255,255,150);
        glBegin(GL_TRIANGLES);
        glVertex2f(-170,35);
        glVertex2f(-20,0);
        glVertex2f(-20,80);

        glEnd();
        glPopMatrix();
    }
    //body

    glBegin(GL_POLYGON);
    glColor3ub(0,128,255);
    glVertex2i(-800,-205);
    glVertex2i(-400,-205);
    glVertex2i(-300,-145);
    glVertex2i(-900,-145);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-820,-145);
    glVertex2i(-870,-115);
    glVertex2i(-960,-115);
    glVertex2i(-900,-145);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-440,-145);
    glVertex2i(-300,-145);
    glVertex2i(-230,-100);
    glVertex2i(-390,-100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-420,-130);
    glVertex2i(-850,-130);
    glVertex2i(-850,-145);
    glVertex2i(-420,-145);
    glEnd();

    //white background
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(-840,-130);
    glVertex2i(-430,-130);
    glVertex2i(-430,-85);
    glVertex2i(-840,-85);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-840,-130);
    glVertex2i(-430,-130);
    glVertex2i(-430,-85);
    glVertex2i(-840,-85);
    glEnd();

    ////1st window
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(204,230,255);
    if(State=='n')
        glColor3ub(129,162,255);

    glVertex2i(-840,-130);
    glVertex2i(-810,-130);
    glVertex2i(-810,-95);
    glVertex2i(-840,-95);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(-800,-130);
    glVertex2i(-710,-130);
    glVertex2i(-710,-95);
    glVertex2i(-800,-95);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-700,-130);
    glVertex2i(-640,-130);
    glVertex2i(-640,-95);
    glVertex2i(-700,-95);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-630,-130);
    glVertex2i(-540,-130);
    glVertex2i(-540,-95);
    glVertex2i(-630,-95);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-530,-130);
    glVertex2i(-430,-130);
    glVertex2i(-430,-95);
    glVertex2i(-530,-95);
    glEnd();
    //window border
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-840,-130);
    glVertex2i(-810,-130);
    glVertex2i(-810,-95);
    glVertex2i(-840,-95);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-800,-130);
    glVertex2i(-710,-130);
    glVertex2i(-710,-95);
    glVertex2i(-800,-95);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-700,-130);
    glVertex2i(-640,-130);
    glVertex2i(-640,-95);
    glVertex2i(-700,-95);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-630,-130);
    glVertex2i(-540,-130);
    glVertex2i(-540,-95);
    glVertex2i(-630,-95);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-530,-130);
    glVertex2i(-430,-130);
    glVertex2i(-430,-95);
    glVertex2i(-530,-95);
    glEnd();

    //
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-870,-85);
    glVertex2i(-400,-85);
    glVertex2i(-400,-70);
    glVertex2i(-870,-70);
    glEnd();


    glTranslatef(-25,0,0);

    //white background2
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(-790,-70);
    glVertex2i(-430,-70);
    glVertex2i(-430,-25);
    glVertex2i(-790,-25);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-790,-70);
    glVertex2i(-430,-70);
    glVertex2i(-430,-25);
    glVertex2i(-790,-25);
    glEnd();

    //window 2nd
    glBegin(GL_POLYGON);
    if(State=='d')
        glColor3ub(204,230,255);
    if(State=='n')
        glColor3ub(129,162,255);
    glVertex2i(-790,-70);
    glVertex2i(-770,-70);
    glVertex2i(-770,-35);
    glVertex2i(-790,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-760,-70);
    glVertex2i(-660,-70);
    glVertex2i(-660,-35);
    glVertex2i(-760,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-650,-70);
    glVertex2i(-590,-70);
    glVertex2i(-590,-35);
    glVertex2i(-650,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-580,-70);
    glVertex2i(-470,-70);
    glVertex2i(-470,-35);
    glVertex2i(-580,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(-460,-70);
    glVertex2i(-430,-70);
    glVertex2i(-430,-35);
    glVertex2i(-460,-35);
    glEnd();
    //window2 border
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-790,-70);
    glVertex2i(-770,-70);
    glVertex2i(-770,-35);
    glVertex2i(-790,-35);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-760,-70);
    glVertex2i(-660,-70);
    glVertex2i(-660,-35);
    glVertex2i(-760,-35);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-650,-70);
    glVertex2i(-590,-70);
    glVertex2i(-590,-35);
    glVertex2i(-650,-35);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-580,-70);
    glVertex2i(-470,-70);
    glVertex2i(-470,-35);
    glVertex2i(-580,-35);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2i(-460,-70);
    glVertex2i(-430,-70);
    glVertex2i(-430,-35);
    glVertex2i(-460,-35);
    glEnd();

    //top
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-800,-25);
    glVertex2i(-420,-25);
    glVertex2i(-420,-10);
    glVertex2i(-800,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2i(-760,-10);
    glVertex2i(-670,-10);
    glVertex2i(-680,5);
    glVertex2i(-750,5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2i(-630,-10);
    glVertex2i(-540,-10);
    glVertex2i(-560,5);
    glVertex2i(-610,5);
    glEnd();

    glPopMatrix();
}

//DRAWING LAMP POST 01
void LampPost01()
{
    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(135, 143, 137);
    if(State=='n')
        glColor3ub(56,59,57);
    glVertex2f(-20.0f, -280.0f);
    glVertex2f(20.0f, -280.0f);
    glVertex2f(20.0f, -270.0f);
    glVertex2f(-20.0f, -270.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f, -270.0f);
    glVertex2f(5.0f, -270.0f);
    glVertex2f(5.0f, -180.0f);
    glVertex2f(-5.0f, -180.0f);
    glEnd();

    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(255, 255, 255);
    if(State=='n')
        glColor3ub(255, 255, 112);
    glVertex2f(-15.0f, -180.0f);
    glVertex2f(15.0f, -180.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-15.0f, -140.0f);
    glVertex2f(15.0f, -140.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();
}

//DRAWING LAMP POST 02
void LampPost02()
{
    glTranslatef(680.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(135, 143, 137);
    if(State=='n')
        glColor3ub(56,59,57);
    glVertex2f(-20.0f, -280.0f);
    glVertex2f(20.0f, -280.0f);
    glVertex2f(20.0f, -270.0f);
    glVertex2f(-20.0f, -270.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f, -270.0f);
    glVertex2f(5.0f, -270.0f);
    glVertex2f(5.0f, -180.0f);
    glVertex2f(-5.0f, -180.0f);
    glEnd();

    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(255, 255, 255);
    if(State=='n')
        glColor3ub(255, 255, 112);
    glVertex2f(-15.0f, -180.0f);
    glVertex2f(15.0f, -180.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-15.0f, -140.0f);
    glVertex2f(15.0f, -140.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();
}


//DRAWING LAMP POST 03
void LampPost03()
{
    glTranslatef(-1320.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(135, 143, 137);
    if(State=='n')
        glColor3ub(56,59,57);
    glVertex2f(-20.0f, -280.0f);
    glVertex2f(20.0f, -280.0f);
    glVertex2f(20.0f, -270.0f);
    glVertex2f(-20.0f, -270.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f, -270.0f);
    glVertex2f(5.0f, -270.0f);
    glVertex2f(5.0f, -180.0f);
    glVertex2f(-5.0f, -180.0f);
    glEnd();

    glBegin(GL_QUADS);
    if(State=='d')
        glColor3ub(255, 255, 255);
    if(State=='n')
        glColor3ub(255, 255, 112);
    glVertex2f(-15.0f, -180.0f);
    glVertex2f(15.0f, -180.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-15.0f, -140.0f);
    glVertex2f(15.0f, -140.0f);
    glVertex2f(15.0f, -130.0f);
    glVertex2f(-15.0f, -130.0f);
    glEnd();
}


//DRAING ROAD LAMP POST
void RoadLampPost()
{
    //glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    LampPost01();
    LampPost02();
    LampPost03();

    glPopMatrix();

}

//DRAWING RIVER
void DrawRiver()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    RiverWater();
    RiverTopBorder();
    DrawShip02();
    DrawShip01();
    RoadLampPost();

    glPopMatrix();
}

void displayMessage()
{
    cout<<"###--->CITY SCENARIO--->### "<<endl;
    cout<<"Keyboard Features: " <<endl;
    cout<<"1. Press 's' to stop the cars."<<endl;
    cout<<"2. Press 'w' to start/increase the speed of the cars."<<endl;
    cout<<"3. Press 'p' to stop the ships."<<endl;
    cout<<"4. Press 'o' to start/increase the speed of the ships."<<endl;
    cout<<"5. Press 'n' for night view."<<endl;
    cout<<"6. Press 'd' for day view."<<endl;
    cout<<"" <<endl;
    cout<<"Mouse Features: " <<endl;
    cout<<"1. Right click to stop the cars."<<endl;
    cout<<"2. Left click to start/increase the speed of the cars."<<endl;

}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    DrawSky();
    DrawBuilding();
    DrawRiver();
    DrawRoad();

    glutSwapBuffers();

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 625);
    glutInitWindowPosition(150, 50);
    glutCreateWindow("###--->CITY SCENARIO--->###");
    displayMessage();
    glutDisplayFunc(display);
    init();
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(1000, Car1_Update, 0);
    glutTimerFunc(1000, Car2_Update, 0);
    glutTimerFunc(1000, Car3_Update, 0);
    glutTimerFunc(1000, Truck_Update, 0);
    glutTimerFunc(1000, Cloud1_Update, 0);
    glutTimerFunc(1000, Cloud2_Update, 0);
    glutTimerFunc(1000, Cloud3_Update, 0);
    glutTimerFunc(1000, Cloud4_Update, 0);
    glutTimerFunc(1000, Plane_Update, 0);
    glutTimerFunc(1000, Ship1_Update, 0);
    glutTimerFunc(1000, Ship2_Update, 0);
    glutTimerFunc(1000, Sun_Update, 0);

    glutMainLoop();
    return 0;
}
