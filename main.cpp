#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
void myInit ()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 700, 0, 800, -10.0, 10.0);
}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{
    glBegin(GL_TRIANGLE_FAN);
// glColor3ub(41, 255, 9);
    glVertex2f(cx,cy);
    for(int i=0; i<=360; i++)
    {
        float angle = 3.1416f * i/180;
// cout<<angle<<endl;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}

float p = -10;
int i= -700;
float j= -250;

void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0,100);
    glVertex2f(800,100);
    glColor3ub(102, 204, 255);
    glVertex2f(800,800);
    glVertex2f(0,800);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 230, 204);
    glVertex2f(0,30);
    glVertex2f(800,30);
    glVertex2f(800,80);
    glVertex2f(0,80);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(51, 153, 51);
    glVertex2f(0,82);
    glVertex2f(800,82);
    glVertex2f(800,90);
    glVertex2f(0,90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 0);
    glVertex2f(0,28);
    glVertex2f(800,28);
    glVertex2f(800,0);
    glVertex2f(0,0);
    glEnd();

    /*
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(10,53.5);
        glVertex2f(25,53.5);
        glVertex2f(25,56.5);
        glVertex2f(10,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(50,53.5);
        glVertex2f(70,53.5);
        glVertex2f(70,56.5);
        glVertex2f(50,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(95,53.5);
        glVertex2f(110,53.5);
        glVertex2f(110,56.5);
        glVertex2f(95,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(135,53.5);
        glVertex2f(155,53.5);
        glVertex2f(155,56.5);
        glVertex2f(135,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(180,53.5);
        glVertex2f(195,53.5);
        glVertex2f(195,56.5);
        glVertex2f(180,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(220,53.5);
        glVertex2f(240,53.5);
        glVertex2f(240,56.5);
        glVertex2f(220,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(265,53.5);
        glVertex2f(280,53.5);
        glVertex2f(280,56.5);
        glVertex2f(265,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(305,53.5);
        glVertex2f(325,53.5);
        glVertex2f(325,56.5);
        glVertex2f(305,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(350,53.5);
        glVertex2f(365,53.5);
        glVertex2f(365,56.5);
        glVertex2f(350,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(390,53.5);
        glVertex2f(410,53.5);
        glVertex2f(410,56.5);
        glVertex2f(390,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(435,53.5);
        glVertex2f(450,53.5);
        glVertex2f(450,56.5);
        glVertex2f(435,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(475,53.5);
        glVertex2f(495,53.5);
        glVertex2f(495,56.5);
        glVertex2f(475,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(520,53.5);
        glVertex2f(535,53.5);
        glVertex2f(535,56.5);
        glVertex2f(520,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(560,53.5);
        glVertex2f(580,53.5);
        glVertex2f(580,56.5);
        glVertex2f(560,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(605,53.5);
        glVertex2f(620,53.5);
        glVertex2f(620,56.5);
        glVertex2f(605,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(645,53.5);
        glVertex2f(665,53.5);
        glVertex2f(665,56.5);
        glVertex2f(645,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(690,53.5);
        glVertex2f(705,53.5);
        glVertex2f(705,56.5);
        glVertex2f(690,56.5);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(730,53.5);
        glVertex2f(750,53.5);
        glVertex2f(750,56.5);
        glVertex2f(730,56.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(775,53.5);
        glVertex2f(795,53.5);
        glVertex2f(795,56.5);
        glVertex2f(775,56.5);
        glEnd();
        */

    ///tree......background of AB-2........
    glColor3ub(0, 128, 43);
    circle(30,60,510,225);
    glColor3ub(0, 128, 43);
    circle(9.5,20,530,290);
    glColor3ub(0, 128, 43);
    circle(9.5,20,480,260);
    glColor3ub(0, 128, 43);
    circle(9.5,20,495,275);
    glColor3ub(0, 128, 43);
    circle(9.5,20,503,290);
    glColor3ub(0, 128, 43);
    circle(9.5,20,515,273);

    glColor3ub(25, 77, 51);
    circle(6,12,502,282);
    glColor3ub(0, 128, 43);
    circle(6,12,502,280);

    glColor3ub(25, 77, 51);
    circle(12,20,515,260);
    glColor3ub(0, 128, 43);
    circle(12,20,515,257.5);
    glColor3ub(0, 128, 43);
    circle(9.5,20,534,175);

    glColor3ub(25, 77, 51);
    circle(7,14,529,205);
    glColor3ub(0, 128, 43);
    circle(7,14,529,207);

    glColor3ub(25, 77, 51);
    circle(9.5,20,520,235);
    glColor3ub(0, 128, 43);
    circle(9.5,20,519,235);

    glColor3ub(25, 77, 51);
    circle(9.5,20,493,262);
    glColor3ub(0, 128, 43);
    circle(9.5,20,493,258);

    glColor3ub(0, 128, 43);
    circle(9.5,20,535,273);
    glColor3ub(0, 128, 43);
    circle(9.5,27,545,200);



    ///........AB 2 main part-1
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(50,90);
    glVertex2f(110,90);
    glVertex2f(110,475);
    glVertex2f(50,475);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(52.5,90);        //Ab 2 main part 2
    glVertex2f(106,90);
    glVertex2f(106,460);
    glVertex2f(52.5,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(110,90);         //Ab 2 2nd part 2
    glVertex2f(140,90);
    glVertex2f(140,420);
    glVertex2f(110,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(110,90);         //Ab 2 2nd part 1
    glVertex2f(137.5,90);
    glVertex2f(137.5,410);
    glVertex2f(110,410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(113,370);   //part 2 AB2 6th floor2..........outlook
    glVertex2f(137.5,370);
    glVertex2f(137.5,400);
    glVertex2f(113,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(113,365);   //part 2 AB2 6th floor2..........outlook
    glVertex2f(123,365);
    glVertex2f(123,400);
    glVertex2f(113,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(118,365);   //Door AB2 6th floor2..........outlook-1
    glVertex2f(119,365);
    glVertex2f(119,392);
    glVertex2f(118,392);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,90);  //AB2 1st floor1
    glVertex2f(550,90);
    glVertex2f(550,145);
    glVertex2f(140,145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,145);   //AB2 2nd floor1
    glVertex2f(520,145);
    glVertex2f(520,200);
    glVertex2f(140,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,200);   //AB2 3rd floor1
    glVertex2f(490,200);
    glVertex2f(490,255);
    glVertex2f(140,255);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,255);   //AB2 4th floor1
    glVertex2f(460,255);
    glVertex2f(460,310);
    glVertex2f(140,310);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,310);   //AB2 5th floor1
    glVertex2f(420,310);
    glVertex2f(420,365);
    glVertex2f(140,365);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(140,365);   //AB2 6th floor1
    glVertex2f(360,365);
    glVertex2f(360,420);
    glVertex2f(140,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(110,420);   //AB2 7th floor1
    glVertex2f(360,420);
    glVertex2f(360,475);
    glVertex2f(110,475);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(160,475);   ///....varsity N A M E......
    glVertex2f(310,475);
    glVertex2f(310,500);
    glVertex2f(160,500);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(162,475);
    glVertex2f(308,475);
    glVertex2f(308,497);
    glVertex2f(162,497);
    glEnd();

    glColor3ub(0, 51, 204);
    glRasterPos2i(185,482);

    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'F');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'F');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,' ');
    glColor3ub(115, 115, 115);
    glRasterPos2i(212,482);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'R');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glColor3ub(0, 102, 34);
    glRasterPos2i(256,482);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'V');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'R');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Y');


    glBegin(GL_QUADS);              ///SIRI GHORE......
    glColor3ub(204, 204, 204);
    glVertex2f(90,475);
    glVertex2f(120,475);
    glVertex2f(120,515);
    glVertex2f(90,515);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(92,475);
    glVertex2f(118,475);
    glVertex2f(118,510);
    glVertex2f(92,510);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(100,475);
    glVertex2f(110,475);
    glVertex2f(110,505);
    glVertex2f(100,505);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(105,483);
    glVertex2f(106,483);
    glVertex2f(106,492);
    glVertex2f(105,492);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2f(65,475);
    glVertex2f(66,475);
    glVertex2f(66,600);
    glVertex2f(65,600);
    glEnd();

    glColor3ub(102, 102, 102);
    circle(3,6,64,580);
    glColor3ub(217, 217, 217);
    circle(2.5,5,64,580);
    glColor3ub(102, 102, 102);
    circle(2,4,67,565);
    glColor3ub(217, 217, 217);
    circle(1.5,3,67,565);

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(110,420);   //part 2 AB2 7th floor2
    glVertex2f(357,420);
    glVertex2f(357,460);
    glVertex2f(110,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,365);   //part 2 AB2 6th floor2
    glVertex2f(357,365);
    glVertex2f(357,405);
    glVertex2f(140,405);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,310);   //part 2 AB2 5th floor2
    glVertex2f(417,310);
    glVertex2f(417,350);
    glVertex2f(140,350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,255);   //part 2 AB2 4th floor2
    glVertex2f(457,255);
    glVertex2f(457,295);
    glVertex2f(140,295);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,200);   //part 2 AB2 3rd floor2
    glVertex2f(487,200);
    glVertex2f(487,240);
    glVertex2f(140,240);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,145);   //part 2 AB2 2nd floor2
    glVertex2f(517,145);
    glVertex2f(517,185);
    glVertex2f(140,185);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,90);  //part 2 AB2 1st floor2
    glVertex2f(547,90);
    glVertex2f(547,130);
    glVertex2f(140,130);
    glEnd();



    ///design of main building....red and glass..............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,420);  //7 Ab2 main part3
    glVertex2f(67,420);
    glVertex2f(67,460);
    glVertex2f(52.5,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,365);  //6 Ab2 main part3
    glVertex2f(67,365);
    glVertex2f(67,405);
    glVertex2f(52.5,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,310);  //5 Ab2 main part3
    glVertex2f(67,310);
    glVertex2f(67,350);
    glVertex2f(52.5,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,255);  //4 Ab2 main part3
    glVertex2f(67,255);
    glVertex2f(67,295);
    glVertex2f(52.5,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,200);  //3 Ab2 main part3
    glVertex2f(67,200);
    glVertex2f(67,240);
    glVertex2f(52.5,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,145);  //2 Ab2 main part3
    glVertex2f(67,145);
    glVertex2f(67,185);
    glVertex2f(52.5,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,90);  //1 Ab2 main part3
    glVertex2f(67,90);
    glVertex2f(67,130);
    glVertex2f(52.5,130);
    glEnd();
    /////////.....................
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,420);  //7 Ab2 main part3
    glVertex2f(106,420);
    glVertex2f(106,460);
    glVertex2f(95,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,365);  //6 Ab2 main part3
    glVertex2f(106,365);
    glVertex2f(106,405);
    glVertex2f(95,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,310);  //5 Ab2 main part3
    glVertex2f(106,310);
    glVertex2f(106,350);
    glVertex2f(95,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,255);  //4 Ab2 main part3
    glVertex2f(106,255);
    glVertex2f(106,295);
    glVertex2f(95,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,200);  //3 Ab2 main part3
    glVertex2f(106,200);
    glVertex2f(106,240);
    glVertex2f(95,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,145);  //2 Ab2 main part3
    glVertex2f(106,145);
    glVertex2f(106,185);
    glVertex2f(95,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(85,90);  //door
    glVertex2f(106,90);
    glVertex2f(106,130);
    glVertex2f(85,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(95,90);  //door 1 main
    glVertex2f(96,90);
    glVertex2f(96,130);
    glVertex2f(95,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(96,100);  //door 1 main
    glVertex2f(97,100);
    glVertex2f(97,120);
    glVertex2f(96,120);
    glEnd();

    //////////............................

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,420);  //7 Ab2 main part3
    glVertex2f(110,420);
    glVertex2f(110,421);
    glVertex2f(50,421);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,365);  //6 Ab2 main part3
    glVertex2f(137.5,365);
    glVertex2f(137.5,366);
    glVertex2f(50,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,310);  //5 Ab2 main part3
    glVertex2f(110,310);
    glVertex2f(110,311);
    glVertex2f(50,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,255);  //4 Ab2 main part3
    glVertex2f(110,255);
    glVertex2f(110,256);
    glVertex2f(50,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,199);  //3 Ab2 main part3
    glVertex2f(110,199);
    glVertex2f(110,200);
    glVertex2f(50,200);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,145);  //2 Ab2 main part3
    glVertex2f(110,145);
    glVertex2f(110,146);
    glVertex2f(50,146);
    glEnd();

    ///////...............................
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,405);  //7 Ab2 main part3
    glVertex2f(110,405);
    glVertex2f(110,406);
    glVertex2f(50,406);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,350);  //6 Ab2 main part3
    glVertex2f(110,350);
    glVertex2f(110,351);
    glVertex2f(50,351);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,295);  //5 Ab2 main part3
    glVertex2f(110,295);
    glVertex2f(110,296);
    glVertex2f(50,296);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,240);  //4 Ab2 main part3
    glVertex2f(110,240);
    glVertex2f(110,241);
    glVertex2f(50,241);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,185);  //3 Ab2 main part3
    glVertex2f(110,185);
    glVertex2f(110,186);
    glVertex2f(50,186);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,130);  //2 Ab2 main part3
    glVertex2f(110,130);
    glVertex2f(110,131);
    glVertex2f(50,131);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2f(140,90);  // part2
    glVertex2f(141,90);
    glVertex2f(141,420);
    glVertex2f(140,420);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(110,365);  //6 Ab2 main part3
    glVertex2f(120,365);
    glVertex2f(120,385);
    glVertex2f(110,385);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(128,365);  //6 Ab2 main part3
    glVertex2f(137.5,365);
    glVertex2f(137.5,385);
    glVertex2f(128,385);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57,80,80);
    glVertex2f(120,370);  //6 Ab2 main part3
    glVertex2f(128,370);
    glVertex2f(128.5,372);
    glVertex2f(120,372);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57,80,80);
    glVertex2f(120,379);  //6 Ab2 main part3
    glVertex2f(128,379);
    glVertex2f(128.5,381);
    glVertex2f(120,381);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,310);  //5 2nd part2
    glVertex2f(137.5,310);
    glVertex2f(137.5,350);
    glVertex2f(110,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,255);  //4 2nd part3
    glVertex2f(137.5,255);
    glVertex2f(137.5,295);
    glVertex2f(110,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,200);  //3 2nd part3
    glVertex2f(137.5,200);
    glVertex2f(137.5,240);
    glVertex2f(110,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,145);  //2 2nd part3
    glVertex2f(137.5,145);
    glVertex2f(137.5,185);
    glVertex2f(110,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(110,90);  //1 Ab2 main part3
    glVertex2f(137.5,90);
    glVertex2f(137.5,130);
    glVertex2f(110,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(117,90);  //1 Ab2 main part3
    glVertex2f(118,90);
    glVertex2f(118,130);
    glVertex2f(117,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(127,90);  //1 Ab2 main part3
    glVertex2f(128,90);
    glVertex2f(128,130);
    glVertex2f(127,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(118,100);  //1 Ab2 main part3
    glVertex2f(119,100);
    glVertex2f(119,120);
    glVertex2f(118,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(128,100);  //1 Ab2 main part3
    glVertex2f(129,100);
    glVertex2f(129,120);
    glVertex2f(128,120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(110,90);   //partation
    glVertex2f(111,90);
    glVertex2f(111,475);
    glVertex2f(110,475);
    glEnd();

    //..7th Floor design...................

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(113,425);   //part 2 AB2 7th floor2
    glVertex2f(191,425);
    glVertex2f(191,455);
    glVertex2f(113,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,425);   //part 2 AB2 7th floor2
    glVertex2f(274,425);
    glVertex2f(274,455);
    glVertex2f(196,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,425);   //part 2 AB2 7th floor2
    glVertex2f(357,425);
    glVertex2f(357,455);
    glVertex2f(279,455);
    glEnd();

    //....door.....window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(113,420);   //d1 AB2 7th floor2
    glVertex2f(123,420);
    glVertex2f(123,455);
    glVertex2f(113,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(118,430);   //d1 AB2 7th floor2
    glVertex2f(119,430);
    glVertex2f(119,445);
    glVertex2f(118,445);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,420);   //d2 AB2 7th floor2
    glVertex2f(206,420);
    glVertex2f(206,455);
    glVertex2f(196,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,430);   //d2 AB2 7th floor2
    glVertex2f(202,430);
    glVertex2f(202,445);
    glVertex2f(201,445);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,420);   //d3 AB2 7th floor2
    glVertex2f(289,420);
    glVertex2f(289,455);
    glVertex2f(279,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,430);   //d3 AB2 7th floor2
    glVertex2f(285,430);
    glVertex2f(285,445);
    glVertex2f(284,445);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(133,432);   //w1 AB2 7th floor2
    glVertex2f(153,432);
    glVertex2f(153,448);
    glVertex2f(133,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(133.5,433);   //w1 AB2 7th floor2
    glVertex2f(152.5,433);
    glVertex2f(152.5,447);
    glVertex2f(133.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,432);   //w1 AB2 7th floor2
    glVertex2f(144,432);
    glVertex2f(144,448);
    glVertex2f(143,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,432);   //w2 AB2 7th floor2
    glVertex2f(183,432);
    glVertex2f(183,448);
    glVertex2f(163,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,433);   //w2 AB2 7th floor2
    glVertex2f(182.5,433);
    glVertex2f(182.5,447);
    glVertex2f(163.5,447);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,432);   //w2 AB2 7th floor2
    glVertex2f(174,432);
    glVertex2f(174,448);
    glVertex2f(173,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,432);   //w3 AB2 7th floor2
    glVertex2f(235,432);
    glVertex2f(235,448);
    glVertex2f(215,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,433);   //w3 AB2 7th floor2
    glVertex2f(234.5,433);
    glVertex2f(234.5,447);
    glVertex2f(215.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,432);   //w3 AB2 7th floor2
    glVertex2f(226,432);
    glVertex2f(226,448);
    glVertex2f(225,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,432);   //w4 AB2 7th floor2
    glVertex2f(265,432);
    glVertex2f(265,448);
    glVertex2f(245,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,433);   //w4 AB2 7th floor2
    glVertex2f(264.5,433);
    glVertex2f(264.5,447);
    glVertex2f(245.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,432);   //w4 AB2 7th floor2
    glVertex2f(256,432);
    glVertex2f(256,448);
    glVertex2f(255,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,432);   //w5 AB2 7th floor2
    glVertex2f(318,432);
    glVertex2f(318,448);
    glVertex2f(298,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,433);   //w5 AB2 7th floor2
    glVertex2f(317.5,433);
    glVertex2f(317.5,447);
    glVertex2f(298.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,432);   //w5 AB2 7th floor2
    glVertex2f(309,432);
    glVertex2f(309,448);
    glVertex2f(308,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,432);   //w6 AB2 7th floor2
    glVertex2f(347,432);
    glVertex2f(347,448);
    glVertex2f(327,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,433);   //w6 AB2 7th floor2
    glVertex2f(346.5,433);
    glVertex2f(346.5,447);
    glVertex2f(327.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,432);   //w6 AB2 7th floor2
    glVertex2f(338,432);
    glVertex2f(338,448);
    glVertex2f(337,448);
    glEnd();

    //....6th Floor Design..........Door window

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,370);   //part 2 AB2 6th floor2..........Inlook
    glVertex2f(191,370);
    glVertex2f(191,400);
    glVertex2f(141,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,370);   //part 2 AB2 6th floor2
    glVertex2f(274,370);
    glVertex2f(274,400);
    glVertex2f(196,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,370);   //part 2 AB2 6th floor2
    glVertex2f(357,370);
    glVertex2f(357,400);
    glVertex2f(279,400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,365);   //d2 AB2 6th floor2
    glVertex2f(206,365);
    glVertex2f(206,400);
    glVertex2f(196,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,375);   //d2 AB2 6th floor2
    glVertex2f(202,375);
    glVertex2f(202,390);
    glVertex2f(201,390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,365);   //d3 AB2 6th floor2
    glVertex2f(289,365);
    glVertex2f(289,400);
    glVertex2f(279,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,375);   //d3 AB2 6th floor2
    glVertex2f(285,375);
    glVertex2f(285,390);
    glVertex2f(284,390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,377);   //w1 AB2 6th floor2
    glVertex2f(153,377);
    glVertex2f(153,393);
    glVertex2f(141,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,378);   //w1 AB2 6th floor2
    glVertex2f(152.5,378);
    glVertex2f(152.5,392);
    glVertex2f(141,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,377);   //w1 AB2 6th floor2
    glVertex2f(144,377);
    glVertex2f(144,393);
    glVertex2f(143,393);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,377);   //w2 AB2 6th floor2
    glVertex2f(183,377);
    glVertex2f(183,393);
    glVertex2f(163,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,378);   //w2 AB2 6th floor2
    glVertex2f(182.5,378);
    glVertex2f(182.5,392);
    glVertex2f(163.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,377);   //w2 AB2 6th floor2
    glVertex2f(174,377);
    glVertex2f(174,393);
    glVertex2f(173,393);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,377);   //w3 AB2 6th floor2
    glVertex2f(235,377);
    glVertex2f(235,393);
    glVertex2f(215,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,378);   //w3 AB2 6th floor2
    glVertex2f(234.5,378);
    glVertex2f(234.5,392);
    glVertex2f(215.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,377);   //w3 AB2 6th floor2
    glVertex2f(226,377);
    glVertex2f(226,393);
    glVertex2f(225,393);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,377);   //w4 AB2 6th floor2
    glVertex2f(265,377);
    glVertex2f(265,393);
    glVertex2f(245,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,378);   //w4 AB2 6th floor2
    glVertex2f(264.5,378);
    glVertex2f(264.5,392);
    glVertex2f(245.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,377);   //w4 AB2 6th floor2
    glVertex2f(256,377);
    glVertex2f(256,393);
    glVertex2f(255,393);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,377);   //w5 AB2 6th floor2
    glVertex2f(318,377);
    glVertex2f(318,393);
    glVertex2f(298,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,378);   //w5 AB2 6th floor2
    glVertex2f(317.5,378);
    glVertex2f(317.5,392);
    glVertex2f(298.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,377);   //w5 AB2 6th floor2
    glVertex2f(309,377);
    glVertex2f(309,393);
    glVertex2f(308,393);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,377);   //w6 AB2 6th floor2
    glVertex2f(347,377);
    glVertex2f(347,393);
    glVertex2f(327,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,378);   //w6 AB2 6th floor2
    glVertex2f(346.5,378);
    glVertex2f(346.5,392);
    glVertex2f(327.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,377);   //w6 AB2 6th floor2
    glVertex2f(338,377);
    glVertex2f(338,393);
    glVertex2f(337,393);
    glEnd();


    ///5th floor......design

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,315);   //part 2 AB2 5th floor2.........
    glVertex2f(191,315);
    glVertex2f(191,345);
    glVertex2f(141,345);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,315);   //part 2 AB2 5th floor2
    glVertex2f(274,315);
    glVertex2f(274,345);
    glVertex2f(196,345);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,315);   //part 2 AB2 5th floor2
    glVertex2f(357,315);
    glVertex2f(357,345);
    glVertex2f(279,345);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(362,315);   //part 2 AB2 5th floor2
    glVertex2f(417,315);
    glVertex2f(417,345);
    glVertex2f(362,345);
    glEnd();

    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,310);   //d2 AB2 5th floor
    glVertex2f(206,310);
    glVertex2f(206,345);
    glVertex2f(196,345);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,320);   //d2 AB2 5th floor
    glVertex2f(202,320);
    glVertex2f(202,335);
    glVertex2f(201,335);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,310);   //d3 AB2 5th floor
    glVertex2f(289,310);
    glVertex2f(289,345);
    glVertex2f(279,345);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,320);   //d3 AB2 5th floor
    glVertex2f(285,320);
    glVertex2f(285,335);
    glVertex2f(284,335);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(362,310);   //d4 AB2 5th floor
    glVertex2f(372,310);
    glVertex2f(372,345);
    glVertex2f(362,345);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(367,320);   //d4 AB2 5th floor
    glVertex2f(368,320);
    glVertex2f(368,335);
    glVertex2f(367,335);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,322);   //w1 AB2 5th floor2
    glVertex2f(153,322);
    glVertex2f(153,338);
    glVertex2f(141,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,323);   //w1 AB2 5th floor2
    glVertex2f(152.5,323);
    glVertex2f(152.5,337);
    glVertex2f(141,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,322);   //w1 AB2 5th floor2
    glVertex2f(144,322);
    glVertex2f(144,338);
    glVertex2f(143,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,322);   //w2 AB2 5th floor2
    glVertex2f(183,322);
    glVertex2f(183,338);
    glVertex2f(163,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,323);   //w2 AB2 5th floor2
    glVertex2f(182.5,323);
    glVertex2f(182.5,337);
    glVertex2f(163.5,337);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,322);   //w2 AB2 5th floor2
    glVertex2f(174,322);
    glVertex2f(174,338);
    glVertex2f(173,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,322);   //w3 AB2 5th floor2
    glVertex2f(235,322);
    glVertex2f(235,338);
    glVertex2f(215,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,323);   //w3 AB2 5th floor2
    glVertex2f(234.5,323);
    glVertex2f(234.5,337);
    glVertex2f(215.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,323);   //w3 AB2 5th floor2
    glVertex2f(226,323);
    glVertex2f(226,338);
    glVertex2f(225,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,322);   //w4 AB2 5th floor2
    glVertex2f(265,322);
    glVertex2f(265,338);
    glVertex2f(245,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,323);   //w4 AB2 5th floor2
    glVertex2f(264.5,323);
    glVertex2f(264.5,337);
    glVertex2f(245.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,322);   //w4 AB2 5th floor2
    glVertex2f(256,322);
    glVertex2f(256,338);
    glVertex2f(255,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,322);   //w5 AB2 5th floor2
    glVertex2f(318,322);
    glVertex2f(318,338);
    glVertex2f(298,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,323);   //w5 AB2 5th floor2
    glVertex2f(317.5,323);
    glVertex2f(317.5,337);
    glVertex2f(298.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,322);   //w5 AB2 5th floor2
    glVertex2f(309,322);
    glVertex2f(309,338);
    glVertex2f(308,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,322);   //w6 AB2 5th floor2
    glVertex2f(347,322);
    glVertex2f(347,338);
    glVertex2f(327,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,323);   //w6 AB2 5th floor2
    glVertex2f(346.5,323);
    glVertex2f(346.5,337);
    glVertex2f(327.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,322);   //w6 AB2 5th floor2
    glVertex2f(338,322);
    glVertex2f(338,338);
    glVertex2f(337,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(382,322);   //w7 AB2 5th floor2
    glVertex2f(402,322);
    glVertex2f(402,338);
    glVertex2f(382,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(382.5,323);   //w7 AB2 5th floor2
    glVertex2f(401.5,323);
    glVertex2f(401.5,337);
    glVertex2f(382.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(392,322);   //w7 AB2 5th floor2
    glVertex2f(393,322);
    glVertex2f(393,338);
    glVertex2f(392,338);
    glEnd();



    ///....4TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,260);   //part 2 AB2 5th floor2.........
    glVertex2f(191,260);
    glVertex2f(191,290);
    glVertex2f(141,290);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,260);   //part 2 AB2 4th floor.......red
    glVertex2f(274,260);
    glVertex2f(274,290);
    glVertex2f(196,290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,260);   //part 2 AB2 4th floor.....red
    glVertex2f(357,260);
    glVertex2f(357,290);
    glVertex2f(279,290);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(362,260);   //part 2 AB2 4th floor.....red
    glVertex2f(457,260);
    glVertex2f(457,290);
    glVertex2f(362,290);
    glEnd();

    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,255);   //d2 AB2 4th floor
    glVertex2f(206,255);
    glVertex2f(206,290);
    glVertex2f(196,290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,265);   //d2 AB2 4th floor
    glVertex2f(202,265);
    glVertex2f(202,280);
    glVertex2f(201,280);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,255);   //d3 AB2 4th floor
    glVertex2f(289,255);
    glVertex2f(289,290);
    glVertex2f(279,290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,265);   //d3 AB2 4th floor
    glVertex2f(285,265);
    glVertex2f(285,280);
    glVertex2f(284,280);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(362,255);   //d4 AB2 4th floor
    glVertex2f(372,255);
    glVertex2f(372,290);
    glVertex2f(362,290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(367,265);   //d4 AB2 4th floor
    glVertex2f(368,265);
    glVertex2f(368,280);
    glVertex2f(367,280);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,267);   //w1 AB2 4th floor2
    glVertex2f(153,267);
    glVertex2f(153,283);
    glVertex2f(141,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,268);   //w1 AB2 4th floor2
    glVertex2f(152.5,268);
    glVertex2f(152.5,282);
    glVertex2f(141,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,267);   //w1 AB2 4th floor2
    glVertex2f(144,267);
    glVertex2f(144,283);
    glVertex2f(143,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,267);   //w2 AB2 4th floor2
    glVertex2f(183,267);
    glVertex2f(183,283);
    glVertex2f(163,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,268);   //w2 AB2 4th floor2
    glVertex2f(182.5,268);
    glVertex2f(182.5,282);
    glVertex2f(163.5,282);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,267);   //w2 AB2 4th floor2
    glVertex2f(174,267);
    glVertex2f(174,283);
    glVertex2f(173,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,267);   //w3 AB2 4th floor2
    glVertex2f(235,267);
    glVertex2f(235,283);
    glVertex2f(215,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,268);   //w3 AB2 4th floor2
    glVertex2f(234.5,268);
    glVertex2f(234.5,282);
    glVertex2f(215.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,267);   //w3 AB2 4th floor2
    glVertex2f(226,267);
    glVertex2f(226,283);
    glVertex2f(225,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,267);   //w4 AB2 4th floor2
    glVertex2f(265,267);
    glVertex2f(265,283);
    glVertex2f(245,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,268);   //w4 AB2 4th floor2
    glVertex2f(264.5,268);
    glVertex2f(264.5,282);
    glVertex2f(245.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,267);   //w4 AB2 4th floor2
    glVertex2f(256,267);
    glVertex2f(256,283);
    glVertex2f(255,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,267);   //w5 AB2 4th floor2
    glVertex2f(318,267);
    glVertex2f(318,283);
    glVertex2f(298,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,268);   //w5 AB2 4th floor2
    glVertex2f(317.5,268);
    glVertex2f(317.5,282);
    glVertex2f(298.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,267);   //w5 AB2 4th floor2
    glVertex2f(309,267);
    glVertex2f(309,283);
    glVertex2f(308,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,267);   //w6 AB2 4th floor2
    glVertex2f(347,267);
    glVertex2f(347,283);
    glVertex2f(327,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,268);   //w6 AB2 4th floor2
    glVertex2f(346.5,268);
    glVertex2f(346.5,282);
    glVertex2f(327.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,267);   //w6 AB2 4th floor2
    glVertex2f(338,267);
    glVertex2f(338,283);
    glVertex2f(337,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(382,267);   //w7 AB2 4th floor2
    glVertex2f(402,267);
    glVertex2f(402,283);
    glVertex2f(382,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(382.5,268);   //w7 AB2 4th floor2
    glVertex2f(401.5,268);
    glVertex2f(401.5,282);
    glVertex2f(382.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(392,267);   //w7 AB2 4th floor2
    glVertex2f(393,267);
    glVertex2f(393,283);
    glVertex2f(392,283);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(417,267);   //w8 AB2 4th floor2
    glVertex2f(437,267);
    glVertex2f(437,283);
    glVertex2f(417,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(417.5,268);   //w8 AB2 4th floor2
    glVertex2f(436.5,268);
    glVertex2f(436.5,282);
    glVertex2f(417.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(427,267);   //w8 AB2 4th floor2
    glVertex2f(427.5,267);
    glVertex2f(427.5,283);
    glVertex2f(427,283);
    glEnd();




    ///....3TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,205);   //part 2 AB2 3th floor2.........
    glVertex2f(191,205);
    glVertex2f(191,235);
    glVertex2f(141,235);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,205);   //part 2 AB2 3th floor.......red
    glVertex2f(274,205);
    glVertex2f(274,235);
    glVertex2f(196,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,205);   //part 2 AB2 3th floor.....red
    glVertex2f(357,205);
    glVertex2f(357,235);
    glVertex2f(279,235);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(362,205);   //part 2 AB2 3th floor.....red
    glVertex2f(440,205);
    glVertex2f(440,235);
    glVertex2f(362,235);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(445,205);   //part 2 AB2 3th floor.....red
    glVertex2f(487,205);
    glVertex2f(487,235);
    glVertex2f(445,235);
    glEnd();


    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,200);   //d2 AB2 3rd floor
    glVertex2f(206,200);
    glVertex2f(206,235);
    glVertex2f(196,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,210);   //d2 AB2 3rd floor
    glVertex2f(202,210);
    glVertex2f(202,225);
    glVertex2f(201,225);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,200);   //d3 AB2 3rd floor
    glVertex2f(289,200);
    glVertex2f(289,235);
    glVertex2f(279,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,210);   //d3 AB2 3rd floor
    glVertex2f(285,210);
    glVertex2f(285,225);
    glVertex2f(284,225);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(362,200);   //d3 AB2 3rd floor
    glVertex2f(372,200);
    glVertex2f(372,235);
    glVertex2f(362,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(367,210);   //d3 AB2 3rd floor
    glVertex2f(368,210);
    glVertex2f(368,225);
    glVertex2f(367,225);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(445,200);   //d4 AB2 3rd floor
    glVertex2f(455,200);
    glVertex2f(455,235);
    glVertex2f(445,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(450,210);   //d4 AB2 3rd floor
    glVertex2f(451,210);
    glVertex2f(451,225);
    glVertex2f(450,225);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,212);   //w1 AB2 3rd floor2
    glVertex2f(153,212);
    glVertex2f(153,228);
    glVertex2f(141,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,213);   //w1 AB2 3rd floor2
    glVertex2f(152.5,213);
    glVertex2f(152.5,227);
    glVertex2f(141,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,212);   //w1 AB2 3rd floor2
    glVertex2f(144,212);
    glVertex2f(144,228);
    glVertex2f(143,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,212);   //w2 AB2 3rd floor2
    glVertex2f(183,212);
    glVertex2f(183,228);
    glVertex2f(163,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,213);   //w2 AB2 3rd floor2
    glVertex2f(182.5,213);
    glVertex2f(182.5,227);
    glVertex2f(163.5,227);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,212);   //w2 AB2 3rd floor2
    glVertex2f(174,212);
    glVertex2f(174,228);
    glVertex2f(173,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,212);   //w3 AB2 3rd floor2
    glVertex2f(235,212);
    glVertex2f(235,228);
    glVertex2f(215,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,213);   //w3 AB2 3rd floor2
    glVertex2f(234.5,213);
    glVertex2f(234.5,227);
    glVertex2f(215.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,212);   //w3 AB2 3rd floor2
    glVertex2f(226,212);
    glVertex2f(226,228);
    glVertex2f(225,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,212);   //w4 AB2 3rd floor2
    glVertex2f(265,212);
    glVertex2f(265,228);
    glVertex2f(245,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,213);   //w4 AB2 3rd floor2
    glVertex2f(264.5,213);
    glVertex2f(264.5,227);
    glVertex2f(245.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,212);   //w4 AB2 3rd floor2
    glVertex2f(256,212);
    glVertex2f(256,228);
    glVertex2f(255,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,212);   //w5 AB2 3rd floor2
    glVertex2f(318,212);
    glVertex2f(318,228);
    glVertex2f(298,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,213);   //w5 AB2 3rd floor2
    glVertex2f(317.5,213);
    glVertex2f(317.5,227);
    glVertex2f(298.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,212);   //w5 AB2 3rd floor2
    glVertex2f(309,212);
    glVertex2f(309,227);
    glVertex2f(308,227);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,212);   //w6 AB2 3rd floor2
    glVertex2f(347,212);
    glVertex2f(347,228);
    glVertex2f(327,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,213);   //w6 AB2 3rd floor2
    glVertex2f(346.5,213);
    glVertex2f(346.5,227);
    glVertex2f(327.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,212);   //w6 AB2 3rd floor2
    glVertex2f(338,212);
    glVertex2f(338,228);
    glVertex2f(337,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(382,212);   //w7 AB2 3rd floor2
    glVertex2f(402,212);
    glVertex2f(402,228);
    glVertex2f(382,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(382.5,213);   //w7 AB2 3rd floor2
    glVertex2f(401.5,213);
    glVertex2f(401.5,227);
    glVertex2f(382.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(392,212);   //w7 AB2 3rd floor2
    glVertex2f(393,212);
    glVertex2f(393,228);
    glVertex2f(392,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(412,212);   //w8 AB2 3rd floor2
    glVertex2f(432,212);
    glVertex2f(432,228);
    glVertex2f(412,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(412.5,213);   //w8 AB2 3rd floor2
    glVertex2f(431.5,213);
    glVertex2f(431.5,227);
    glVertex2f(412.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(422,212);   //w8 AB2 3rd floor2
    glVertex2f(423,212);
    glVertex2f(423,227);
    glVertex2f(422,227);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(460,212);   //w9 AB2 3rd floor2
    glVertex2f(480,212);
    glVertex2f(480,228);
    glVertex2f(460,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(460.5,213);   //w9 AB2 3rd floor2
    glVertex2f(479.5,213);
    glVertex2f(479.5,227);
    glVertex2f(460.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(470,212);   //w9 AB2 3rd floor2
    glVertex2f(471,212);
    glVertex2f(471,227);
    glVertex2f(470,227);
    glEnd();




    ///....2nd floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,150);   //part 2 AB2 2nd floor2.........
    glVertex2f(191,150);
    glVertex2f(191,180);
    glVertex2f(141,180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,150);   //part 2 AB2 2nd floor.......red
    glVertex2f(274,150);
    glVertex2f(274,180);
    glVertex2f(196,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,150);   //part 2 AB2 2nd floor.....red
    glVertex2f(357,150);
    glVertex2f(357,180);
    glVertex2f(279,180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(362,150);   //part 2 AB2 2nd floor.....red
    glVertex2f(440,150);
    glVertex2f(440,180);
    glVertex2f(362,180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(445,150);   //part 2 AB2 2nd floor.....red
    glVertex2f(517,150);
    glVertex2f(517,180);
    glVertex2f(445,180);
    glEnd();

    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,145);   //d2 AB2 2nd floor
    glVertex2f(206,145);
    glVertex2f(206,180);
    glVertex2f(196,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,155);   //d2 AB2 2nd floor
    glVertex2f(202,155);
    glVertex2f(202,170);
    glVertex2f(201,170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,145);   //d3 AB2 2nd floor
    glVertex2f(289,145);
    glVertex2f(289,180);
    glVertex2f(279,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,155);   //d3 AB2 2nd floor
    glVertex2f(285,155);
    glVertex2f(285,170);
    glVertex2f(284,170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(362,145);   //d3 AB2 2nd floor
    glVertex2f(372,145);
    glVertex2f(372,180);
    glVertex2f(362,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(367,155);   //d3 AB2 2nd floor
    glVertex2f(368,155);
    glVertex2f(368,170);
    glVertex2f(367,170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(445,145);   //d3 AB2 2nd floor
    glVertex2f(455,145);
    glVertex2f(455,180);
    glVertex2f(445,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(450,155);   //d3 AB2 2nd floor
    glVertex2f(451,155);
    glVertex2f(451,170);
    glVertex2f(450,170);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,157);   //w1 AB2 2nd floor2
    glVertex2f(153,157);
    glVertex2f(153,173);
    glVertex2f(141,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,158);   //w1 AB2 2nd floor2
    glVertex2f(152.5,158);
    glVertex2f(152.5,172);
    glVertex2f(141,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,157);   //w1 AB2 2nd floor2
    glVertex2f(144,157);
    glVertex2f(144,173);
    glVertex2f(143,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,157);   //w2 AB2 2nd floor2
    glVertex2f(183,157);
    glVertex2f(183,173);
    glVertex2f(163,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,158);   //w2 AB2 2nd floor2
    glVertex2f(182.5,158);
    glVertex2f(182.5,172);
    glVertex2f(163.5,172);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,157);   //w2 AB2 2nd floor2
    glVertex2f(174,157);
    glVertex2f(174,173);
    glVertex2f(173,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,157);   //w3 AB2 2nd floor2
    glVertex2f(235,157);
    glVertex2f(235,173);
    glVertex2f(215,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,158);   //w3 AB2 2nd floor2
    glVertex2f(234.5,158);
    glVertex2f(234.5,172);
    glVertex2f(215.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,157);   //w3 AB2 2nd floor2
    glVertex2f(226,157);
    glVertex2f(226,173);
    glVertex2f(225,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,157);   //w4 AB2 2nd floor2
    glVertex2f(265,157);
    glVertex2f(265,173);
    glVertex2f(245,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,158);   //w4 AB2 2nd floor2
    glVertex2f(264.5,158);
    glVertex2f(264.5,172);
    glVertex2f(245.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,157);   //w4 AB2 2nd floor2
    glVertex2f(256,157);
    glVertex2f(256,173);
    glVertex2f(255,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,157);   //w5 AB2 2nd floor2
    glVertex2f(318,157);
    glVertex2f(318,173);
    glVertex2f(298,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,158);   //w5 AB2 2nd floor2
    glVertex2f(317.5,158);
    glVertex2f(317.5,172);
    glVertex2f(298.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,157);   //w5 AB2 2nd floor2
    glVertex2f(309,157);
    glVertex2f(309,173);
    glVertex2f(308,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,157);   //w6 AB2 2nd floor2
    glVertex2f(347,157);
    glVertex2f(347,173);
    glVertex2f(327,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,158);   //w6 AB2 2nd floor2
    glVertex2f(346.5,158);
    glVertex2f(346.5,172);
    glVertex2f(327.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,157);   //w6 AB2 2nd floor2
    glVertex2f(338,157);
    glVertex2f(338,173);
    glVertex2f(337,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(382,157);   //w7 AB2 2nd floor2
    glVertex2f(402,157);
    glVertex2f(402,173);
    glVertex2f(382,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(382.5,158);   //w7 AB2 2nd floor2
    glVertex2f(401.5,158);
    glVertex2f(401.5,172);
    glVertex2f(382.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(392,157);   //w7 AB2 2nd floor2
    glVertex2f(393,157);
    glVertex2f(393,173);
    glVertex2f(392,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(412,157);   //w8 AB2 2nd floor2
    glVertex2f(432,157);
    glVertex2f(432,173);
    glVertex2f(412,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(412.5,158);   //w8 AB2 2nd floor2
    glVertex2f(431.5,158);
    glVertex2f(431.5,172);
    glVertex2f(412.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(422,157);   //w8 AB2 2nd floor2
    glVertex2f(423,157);
    glVertex2f(423,173);
    glVertex2f(422,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(460,157);   //w9 AB2 2nd floor2
    glVertex2f(480,157);
    glVertex2f(480,173);
    glVertex2f(460,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(460.5,158);   //w9 AB2 2nd floor2
    glVertex2f(479.5,158);
    glVertex2f(479.5,172);
    glVertex2f(460.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(470,157);   //w9 AB2 2nd floor2
    glVertex2f(471,157);
    glVertex2f(471,173);
    glVertex2f(470,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(490,157);   //w10 AB2 2nd floor2
    glVertex2f(510,157);
    glVertex2f(510,173);
    glVertex2f(490,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(490.5,158);   //w10 AB2 2nd floor2
    glVertex2f(509.5,158);
    glVertex2f(509.5,172);
    glVertex2f(490.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(500,157);   //w10 AB2 2nd floor2
    glVertex2f(501,157);
    glVertex2f(501,173);
    glVertex2f(500,173);
    glEnd();


    ///....1st floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,95);   //part 2 AB2 1st floor red.........
    glVertex2f(191,95);
    glVertex2f(191,125);
    glVertex2f(141,125);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,95);   //part 2 AB2 1st floor.......red
    glVertex2f(274,95);
    glVertex2f(274,125);
    glVertex2f(196,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(279,95);   //part 2 AB2 1st floor.....red
    glVertex2f(357,95);
    glVertex2f(357,125);
    glVertex2f(279,125);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(362,95);   //part 2 AB2 1st floor.....red
    glVertex2f(440,95);
    glVertex2f(440,125);
    glVertex2f(362,125);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(445,95);   //part 2 AB2 1st floor.....red
    glVertex2f(542,95);
    glVertex2f(542,125);
    glVertex2f(445,125);
    glEnd();






    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,90);   //d2 AB2 1st floor
    glVertex2f(206,90);
    glVertex2f(206,125);
    glVertex2f(196,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,100);   //d2 AB2 1st floor
    glVertex2f(202,100);
    glVertex2f(202,115);
    glVertex2f(201,115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(279,90);   //d3 AB2 1st floor
    glVertex2f(289,90);
    glVertex2f(289,125);
    glVertex2f(279,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(284,100);   //d3 AB2 1st floor
    glVertex2f(285,100);
    glVertex2f(285,115);
    glVertex2f(284,115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(362,90);   //d3 AB2 1st floor
    glVertex2f(372,90);
    glVertex2f(372,125);
    glVertex2f(362,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(367,100);   //d3 AB2 1st floor
    glVertex2f(368,100);
    glVertex2f(368,115);
    glVertex2f(367,115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(445,90);   //d3 AB2 1st floor
    glVertex2f(455,90);
    glVertex2f(455,125);
    glVertex2f(445,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(450,100);   //d3 AB2 1st floor
    glVertex2f(451,100);
    glVertex2f(451,115);
    glVertex2f(450,115);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,102);   //w1 AB2 1st floor2
    glVertex2f(153,102);
    glVertex2f(153,118);
    glVertex2f(141,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,103);   //w1 AB2 1st floor2
    glVertex2f(152.5,103);
    glVertex2f(152.5,117);
    glVertex2f(141,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,102);   //w1 AB2 1st floor2
    glVertex2f(144,102);
    glVertex2f(144,118);
    glVertex2f(143,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,102);   //w2 AB2 1st floor2
    glVertex2f(183,102);
    glVertex2f(183,118);
    glVertex2f(163,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,103);   //w2 AB2 1st floor2
    glVertex2f(182.5,103);
    glVertex2f(182.5,117);
    glVertex2f(163.5,117);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,102);   //w2 AB2 1st floor2
    glVertex2f(174,102);
    glVertex2f(174,118);
    glVertex2f(173,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,102);   //w3 AB2 1st floor2
    glVertex2f(235,102);
    glVertex2f(235,118);
    glVertex2f(215,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,103);   //w3 AB2 1st floor2
    glVertex2f(234.5,103);
    glVertex2f(234.5,117);
    glVertex2f(215.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,102);   //w3 AB2 1st floor2
    glVertex2f(226,102);
    glVertex2f(226,118);
    glVertex2f(225,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,102);   //w4 AB2 1st floor2
    glVertex2f(265,102);
    glVertex2f(265,118);
    glVertex2f(245,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,103);   //w4 AB2 1st floor2
    glVertex2f(264.5,103);
    glVertex2f(264.5,117);
    glVertex2f(245.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,102);   //w4 AB2 1st floor2
    glVertex2f(256,102);
    glVertex2f(256,118);
    glVertex2f(255,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(298,102);   //w5 AB2 1st floor2
    glVertex2f(318,102);
    glVertex2f(318,118);
    glVertex2f(298,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(298.5,103);   //w5 AB2 1st floor2
    glVertex2f(317.5,103);
    glVertex2f(317.5,117);
    glVertex2f(298.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(308,102);   //w5 AB2 1st floor2
    glVertex2f(309,102);
    glVertex2f(309,118);
    glVertex2f(308,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(327,102);   //w6 AB2 1st floor2
    glVertex2f(347,102);
    glVertex2f(347,118);
    glVertex2f(327,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(327.5,103);   //w6 AB2 1st floor2
    glVertex2f(346.5,103);
    glVertex2f(346.5,117);
    glVertex2f(327.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(337,102);   //w6 AB2 1st floor2
    glVertex2f(338,102);
    glVertex2f(338,118);
    glVertex2f(337,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(382,102);   //w7 AB2 1st floor2
    glVertex2f(402,102);
    glVertex2f(402,118);
    glVertex2f(382,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(382.5,103);   //w7 AB2 1st floor2
    glVertex2f(401.5,103);
    glVertex2f(401.5,117);
    glVertex2f(382.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(392,102);   //w7 AB2 1st floor2
    glVertex2f(393,102);
    glVertex2f(393,118);
    glVertex2f(392,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(412,102);   //w8 AB2 1st floor2
    glVertex2f(432,102);
    glVertex2f(432,118);
    glVertex2f(412,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(412.5,103);   //w8 AB2 1st floor2
    glVertex2f(431.5,103);
    glVertex2f(431.5,117);
    glVertex2f(412.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(422,102);   //w8 AB2 1st floor2
    glVertex2f(423,102);
    glVertex2f(423,117);
    glVertex2f(422,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(460,102);   //w9 AB2 3rd floor2
    glVertex2f(480,102);
    glVertex2f(480,118);
    glVertex2f(460,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(460.5,103);   //w9 AB2 3rd floor2
    glVertex2f(479.5,103);
    glVertex2f(479.5,117);
    glVertex2f(460.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(470,102);   //w9 AB2 3rd floor2
    glVertex2f(471,102);
    glVertex2f(471,118);
    glVertex2f(470,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(490,102);   //w10 AB2 3rd floor2
    glVertex2f(510,102);
    glVertex2f(510,118);
    glVertex2f(490,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(490.5,103);   //w10 AB2 3rd floor2
    glVertex2f(509.5,103);
    glVertex2f(509.5,117);
    glVertex2f(490.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(500,102);   //w10 AB2 3rd floor2
    glVertex2f(501,102);
    glVertex2f(501,118);
    glVertex2f(500,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(518,102);   //w11 AB2 3rd floor2
    glVertex2f(538,102);
    glVertex2f(538,118);
    glVertex2f(518,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(518.5,103);   //w11 AB2 3rd floor2
    glVertex2f(537.5,103);
    glVertex2f(537.5,117);
    glVertex2f(518.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(527,102);   //w11 AB2 3rd floor2
    glVertex2f(528,102);
    glVertex2f(528,118);
    glVertex2f(527,118);
    glEnd();


    //Mosque........................

    glBegin(GL_QUADS);
    glColor3ub(200, 200, 200);
    glVertex2f(565,90);
    glVertex2f(620,90);
    glVertex2f(655,270);
    glVertex2f(530,270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(223,231,232);
    glVertex2f(567.5,90);
    glVertex2f(617,90);
    glVertex2f(648,250);
    glVertex2f(538,250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(13, 13, 13);
    glVertex2f(527,260);
    glVertex2f(658,260);
    glVertex2f(658,275);
    glVertex2f(527,275);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(527.5,261);
    glVertex2f(657.5,261);
    glVertex2f(657.5,274);
    glVertex2f(527.5,274);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 0, 0);          // red part inter 1
    glVertex2f(570,90);
    glVertex2f(614,90);
    glVertex2f(614,180);
    glVertex2f(570,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(241,245,245);        //white part inter -2
    glVertex2f(586,90);
    glVertex2f(598,90);
    glVertex2f(598,120);
    glVertex2f(586,120);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);       //blue part (Inter 3)
    glColor3ub(0, 77, 153);
    glVertex2f(588,90);
    glVertex2f(596,90);
    glVertex2f(596,110);
    glVertex2f(592,115);
    glVertex2f(588,110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(38, 77, 115);          // upper glass part
    glVertex2f(550,220);
    glVertex2f(635,220);
    glVertex2f(635,240);
    glVertex2f(550,240);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(420,310);   //siri 5th floor2
    glVertex2f(440,310);
    glVertex2f(440,340);
    glVertex2f(420,340);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 239, 255);
    glVertex2f(420,310);   // AB2 5th floor2
    glVertex2f(437,310);
    glVertex2f(437,330);
    glVertex2f(420,330);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(420,310);   //part 2 AB2 5th floor2
    glVertex2f(437,310);
    glVertex2f(437,320);
    glVertex2f(420,320);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(460,255);   //siri 4th floor2
    glVertex2f(480,255);
    glVertex2f(480,285);
    glVertex2f(460,285);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 43);
    glVertex2f(460,255);   //siri 4th floor2
    glVertex2f(477,255);
    glVertex2f(477,275);
    glVertex2f(460,275);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(460,255);   //siri 4th floor2
    glVertex2f(477,255);
    glVertex2f(477,265);
    glVertex2f(460,265);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(490,200);   //siri 3th floor2
    glVertex2f(510,200);
    glVertex2f(510,230);
    glVertex2f(490,230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 43);
    glVertex2f(490,200);   //siri 3th floor2
    glVertex2f(507,200);
    glVertex2f(507,220);
    glVertex2f(490,220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(490,200);   //siri 3th floor2
    glVertex2f(507,200);
    glVertex2f(507,210);
    glVertex2f(490,210);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(520,145);   //siri 2th floor2
    glVertex2f(540,145);
    glVertex2f(540,175);
    glVertex2f(520,175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 43);
    glVertex2f(520,145);   //siri 2th floor2
    glVertex2f(537,145);
    glVertex2f(537,165);
    glVertex2f(520,165);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(520,145);   //siri 2th floor2
    glVertex2f(537,145);
    glVertex2f(537,155);
    glVertex2f(520,155);
    glEnd();

    glColor3ub(64, 64, 64);
    glRasterPos2i(285,780);

    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'R');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'J');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'C');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'B');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Y');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'A');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'P');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'U');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'R');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'B');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,' ');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'R');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'O');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'Y');


    glColor3ub(0, 128, 43);
    circle(8,22,0,150);
    glColor3ub(0, 128, 43);
    circle(8,22,10,170);
    glColor3ub(0, 128, 43);
    circle(8,22,13,140);
    glColor3ub(0, 128, 43);
    circle(7,25,22,150);
    glColor3ub(0, 128, 43);
    circle(8,22,30,150);
    glColor3ub(0, 128, 43);
    circle(10,40,0,250);






    glColor3ub(0, 128, 43);
    circle(9,22,30,295);
    glColor3ub(0, 128, 43);
    circle(8,15,30,293);



    glColor3ub(0, 128, 43);
    circle(9,22,45,285);
    glColor3ub(0, 128, 43);
    circle(9,22,45,280);
    glColor3ub(0, 128, 43);
    circle(8,15,45,275);

    glColor3ub(0, 128, 43);
    circle(9,22,55,235);
    glColor3ub(0, 128, 43);
    circle(9,32,50,255);



    glColor3ub(0, 128, 43);
    circle(9,22,59,225);
    glColor3ub(0, 128, 43);
    circle(9,22,56,255);
    glColor3ub(0, 128, 43);
    circle(9,22,63,195);
    glColor3ub(0, 128, 43);
    circle(9,22,50,180);
    glColor3ub(10, 128, 43);
    circle(9,22,58,165);
    glColor3ub(0, 128, 43);
    circle(9,22,49,150);
    glColor3ub(0, 128, 43);
    circle(9,22,38,140);


    glColor3ub(0, 77, 26);
    circle(10,20,55,190);
    glColor3ub(0, 128, 43);
    circle(9.5,19,55,190);


    glColor3ub(0, 77, 26);
    circle(10,20,55,205);
    glColor3ub(0, 128, 43);
    circle(9.5,20,55,205);


    glColor3ub(0, 77, 26);
    circle(10,20,50,218);
    glColor3ub(0, 128, 43);
    circle(9.5,20,50,218);


    glColor3ub(0, 128, 43);
    circle(10,20,27,130);


    glColor3ub(0, 128, 43);      //...fullfill
    circle(35,70,20,200);
    glColor3ub(0, 128, 43);      //...fullfill
    circle(15,30,30,255);


    glColor3ub(0, 77, 26);
    circle(10,20,42,225);
    glColor3ub(0, 128, 43);
    circle(9.5,20,42,224);


    glColor3ub(0, 77, 26);
    circle(10,20,30,225);
    glColor3ub(0, 128, 43);
    circle(10,20,30,224);


    glColor3ub(0, 77, 26);
    circle(10,18,42,263);
    glColor3ub(0, 128, 43);
    circle(10,18,42,262);


    glColor3ub(0, 77, 26);
    circle(10,20,30,180);
    glColor3ub(0, 128, 43);
    circle(10,20,30,179);

    glColor3ub(0, 77, 26);
    circle(10,20,20,180);
    glColor3ub(0, 128, 43);
    circle(10,20,20,179);

    glColor3ub(0, 77, 26);
    circle(10,20,40,155);
    glColor3ub(0, 128, 43);
    circle(10,20,40,156);


    glColor3ub(0, 128, 43);
    circle(9,22,20,280);
    glColor3ub(0, 77, 26);
    circle(9,21,20,270);
    glColor3ub(0, 128, 43);
    circle(9,21,20,269);


    glColor3ub(0, 128, 43);
    circle(9,22,10,255);
    glColor3ub(0, 77, 26);
    circle(9,20,10,245);
    glColor3ub(0, 128, 43);
    circle(9,20,10.5,244);


    ///........Tree........D-1........///
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139,99,47);
    glVertex2f(15,90);
    glVertex2f(22,90);
    glVertex2f(21,100);
    glVertex2f(20,110);
    glVertex2f(18,120);
    glVertex2f(16,130);
    glVertex2f(17,140);
    glVertex2f(18,145);
    glVertex2f(20,150);
    glVertex2f(22,150);
    glVertex2f(21,147);
    glVertex2f(20,145);
    glVertex2f(18,140);
    glVertex2f(16,130);
    glVertex2f(13,120);
    glVertex2f(16,130);
    glVertex2f(18,140);
    glVertex2f(20,145);
    glVertex2f(22,150);
    glVertex2f(22,160);
    glVertex2f(18,150);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///........Tree........D-2.......///
    glColor3ub(139,99,47);
    glVertex2f(15,125);
    glVertex2f(19,130);
    glVertex2f(14,140);
    glVertex2f(14,150);
    glVertex2f(13,160);
    glVertex2f(10,170);
    glVertex2f(12,170);
    glVertex2f(12,160);
    glVertex2f(11,150);
    glVertex2f(11,140);


    glEnd();

    glBegin(GL_TRIANGLE_FAN);   ///tree...................D-3 p2  ///
    glColor3ub(139,99,47);
    glVertex2f(31,140);
    glVertex2f(29,140);
    glVertex2f(28,120);
    glVertex2f(25,120);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree..................D-3 p1   ///
    glColor3ub(139,99,47);
    glVertex2f(16,100);
    glVertex2f(21,100);
    glVertex2f(24.5,120);
    glVertex2f(28,120);
    glEnd();




    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........1   ///
    glColor3ub(139,99,47);
    glVertex2f(670,90);
    glVertex2f(675,90);
    glVertex2f(675,120);
    glVertex2f(670,120);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///triangle tree 1.........beside mosque........1   ///
    glColor3ub(0,99,47);
    glVertex2f(660,120);
    glVertex2f(685,120);
    glVertex2f(672.5,180);
    glVertex2f(672.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(661,135);
    glVertex2f(684,135);
    glVertex2f(672.5,190);
    glVertex2f(672.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(662,150);
    glVertex2f(683,150);
    glVertex2f(672.5,180);
    glVertex2f(672.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(663,160);
    glVertex2f(682,160);
    glVertex2f(672.5,190);
    glVertex2f(672.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(664,170);
    glVertex2f(681,170);
    glVertex2f(672.5,200);
    glVertex2f(672.5,200);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(665,180);
    glVertex2f(680,180);
    glVertex2f(672.5,210);
    glVertex2f(672.5,210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(666,190);
    glVertex2f(679,190);
    glVertex2f(672.5,260);
    glVertex2f(672.5,260);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(666,200);
    glVertex2f(679,200);
    glVertex2f(672.5,270);
    glVertex2f(672.5,270);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........2   ///
    glColor3ub(139,99,47);
    glVertex2f(650,90);
    glVertex2f(655,90);
    glVertex2f(655,110);
    glVertex2f(650,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(640,110);
    glVertex2f(665,110);
    glVertex2f(652.5,140);
    glVertex2f(652.5,140);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(641,120);
    glVertex2f(664,120);
    glVertex2f(652.5,160);
    glVertex2f(652.5,160);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(642,130);
    glVertex2f(663,130);
    glVertex2f(652.5,180);
    glVertex2f(652.5,180);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(642.5,140);
    glVertex2f(662.5,140);
    glVertex2f(652.5,185);
    glVertex2f(652.5,185);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643,150);
    glVertex2f(662,150);
    glVertex2f(652.5,195);
    glVertex2f(652.5,195);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643.5,160);
    glVertex2f(661.5,160);
    glVertex2f(652.5,210);
    glVertex2f(652.5,210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644,170);
    glVertex2f(661,170);
    glVertex2f(652.5,230);
    glVertex2f(652.5,230);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644.5,180);
    glVertex2f(660.5,180);
    glVertex2f(652.5,250);
    glVertex2f(652.5,250);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........3   ///
    glColor3ub(139,99,47);
    glVertex2f(680,90);
    glVertex2f(685,90);
    glVertex2f(685,100);
    glVertex2f(680,100);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(675,100);
    glVertex2f(690,100);
    glVertex2f(682.5,130);
    glVertex2f(682.5,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(676,110);
    glVertex2f(689,110);
    glVertex2f(682.5,140);
    glVertex2f(682.5,140);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(677,122);
    glVertex2f(688,122);
    glVertex2f(682.5,155);
    glVertex2f(682.5,155);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........4   ///
    glColor3ub(139,99,47);
    glVertex2f(690,90);
    glVertex2f(695,90);
    glVertex2f(695,105);
    glVertex2f(690,105);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(685,105);
    glVertex2f(700,105);
    glVertex2f(692.5,135);
    glVertex2f(692.5,135);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(686,115);
    glVertex2f(699,115);
    glVertex2f(692.5,145);
    glVertex2f(692.5,145);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(687,127);
    glVertex2f(698,127);
    glVertex2f(692.5,165);
    glVertex2f(692.5,165);
    glEnd();



    glColor3ub(0, 153, 51);      ///....tree.........beside mosque........5 ///
    circle(3,6,630,100);
    glColor3ub(0, 153, 51);
    circle(5,12,625,110);
    glColor3ub(0, 153, 51);
    circle(5,12,635,110);
    glColor3ub(0, 153, 51);
    circle(5,12,640,105);
    glColor3ub(0, 153, 51);
    circle(5,12,620,120);


    glColor3ub(0, 102, 00);
    circle(5,12,625,122);
    glColor3ub(0, 153, 51);
    circle(5,12,626,122);
    glColor3ub(0, 153, 51);
    circle(5,12,630,140);
    glColor3ub(0, 153, 51);
    circle(4,10,625,135);
    glColor3ub(0, 102, 0);
    circle(4,10,627,133);

    glColor3ub(0, 153, 51);
    circle(4,10,628,132);

    glColor3ub(0, 153, 51);
    circle(5,12,640,130);
    glColor3ub(0, 153, 51);
    circle(5,12,635,130);
    glColor3ub(0, 102, 0);
    circle(5,12,634,125);
    glColor3ub(0, 153, 51);
    circle(5,12,633,124);
    glColor3ub(0, 153, 51);
    circle(5,12,645,120);
    glColor3ub(0, 102, 0);
    circle(5,12,640,115);
    glColor3ub(0, 153, 51);
    circle(5,12,639,115);
    glColor3ub(0, 153, 51);
    circle(5,12,630,118);



    glColor3ub(255, 255, 255);         ///Full..........mosque.........comp.
    circle(1,2,630,118);
    glColor3ub(255, 255, 255);
    circle(1,2,630,138);
    glColor3ub(255, 255, 255);
    circle(1,2,640,138);
    glColor3ub(255, 255, 255);
    circle(1,2,635,127);
    glColor3ub(255, 255, 255);
    circle(1,2,619,118);
    glColor3ub(255, 255, 255);
    circle(1,2.5,625,133);
    glColor3ub(255, 255, 255);
    circle(1,1.5,624,109);
    glColor3ub(255, 255, 255);
    circle(1,2.5,640,105);
    glColor3ub(255, 255, 255);
    circle(1,3,646,118);
    glColor3ub(255, 255, 255);
    circle(1,3,640,120);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........5   ///
    glColor3ub(171, 122, 59);
    glVertex2f(635,90);
    glVertex2f(639,90);
    glVertex2f(636,100);
    glVertex2f(629,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........5   ///
    glColor3ub(171, 122, 59);
    glVertex2f(635,90);
    glVertex2f(638,90);
    glVertex2f(634,100);
    glVertex2f(625,110);
    glEnd();



    glColor3ub(0, 153, 51);      ///....tree.........beside mosque........6 ///
    circle(3,6,555,100);
    glColor3ub(0, 153, 51);
    circle(5,12,550,110);
    glColor3ub(0, 153, 51);
    circle(5,12,560,110);
    glColor3ub(0, 153, 51);
    circle(5,12,565,105);
    glColor3ub(0, 153, 51);
    circle(5,12,545,120);


    glColor3ub(0, 102, 00);
    circle(5,12,550,122);
    glColor3ub(0, 153, 51);
    circle(5,12,551,122);
    glColor3ub(0, 153, 51);
    circle(5,12,555,140);
    glColor3ub(0, 153, 51);
    circle(4,10,550,135);
    glColor3ub(0, 102, 0);
    circle(4,10,552,133);

    glColor3ub(0, 153, 51);
    circle(4,10,553,132);

    glColor3ub(0, 153, 51);
    circle(5,12,565,130);
    glColor3ub(0, 153, 51);
    circle(5,12,560,130);
    glColor3ub(0, 102, 0);
    circle(5,12,559,125);
    glColor3ub(0, 153, 51);
    circle(5,12,558,124);
    glColor3ub(0, 153, 51);
    circle(5,12,570,120);
    glColor3ub(0, 102, 0);
    circle(5,12,565,115);
    glColor3ub(0, 153, 51);
    circle(5,12,564,115);
    glColor3ub(0, 153, 51);
    circle(5,12,555,118);
    glColor3ub(0, 153, 51);
    circle(5,12,567,140);



    glColor3ub(255, 255, 255);         ///Full..........mosque.........comp.
    circle(1,2,555,118);
    glColor3ub(255, 255, 255);
    circle(1,2,555,138);
    glColor3ub(255, 255, 255);
    circle(1,2,565,138);
    glColor3ub(255, 255, 255);
    circle(1,2,560,127);
    glColor3ub(255, 255, 255);
    circle(1,2,544,118);
    glColor3ub(255, 255, 255);
    circle(1,2.5,550,133);
    glColor3ub(255, 255, 255);
    circle(1,1.5,551,109);
    glColor3ub(255, 255, 255);
    circle(1,2.5,565,105);
    glColor3ub(255, 255, 255);
    circle(1,3,570,118);
    glColor3ub(255, 255, 255);
    circle(1,3,565,120);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........6   ///
    glColor3ub(171, 122, 59);
    glVertex2f(560,90);
    glVertex2f(563,90);
    glVertex2f(562,100);
    glVertex2f(557,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........6   ///
    glColor3ub(171, 122, 59);
    glVertex2f(560,90);
    glVertex2f(563,90);
    glVertex2f(559,100);
    glVertex2f(553,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside mosque........6   ///
    glColor3ub(171, 122, 59);
    glVertex2f(559,90);
    glVertex2f(563,90);
    glVertex2f(564,110);
    glVertex2f(567,140);
    glEnd();




    glColor3ub(254, 183, 77);    ///.........S U N.....................///
    circle(18,36,625,705);
    glColor3ub(254, 194, 103);
    circle(16.5,33,625,705);
    glColor3ub(254, 204, 128);
    circle(14.5,30,625,705);
    glColor3ub(254, 204, 128);
    circle(12.5,27,625,705);

    glutPostRedisplay();
    glutSwapBuffers();



    glColor3ub(232,241,255);        ///....Megh.......1 covering sun....///
    circle(13,20,600,665);
    glColor3ub(252,254,255);
    circle(11,18,600,665);

    glColor3ub(232,241,255);
    circle(10,20,610,675);
    glColor3ub(252,254,255);
    circle(10,20,612,672);

    glColor3ub(232,241,255);
    circle(13,20,610,655);

    glColor3ub(221,229,247);
    circle(9,20,620,680);
    glColor3ub(252,254,255);
    circle(8,18,620,679);

    glColor3ub(232,241,255);
    circle(9,20,620,650);
    glColor3ub(252,254,255);
    circle(8,18,620,652);

    glColor3ub(221,229,247);
    circle(9,20,630,685);
    glColor3ub(252,254,255);
    circle(8,18,630,683);

    glColor3ub(232,241,255);
    circle(9,20,625,655);
    glColor3ub(252,254,255);
    circle(8,18,635,657);

    glColor3ub(232,241,255);
    circle(9,20,640,675);

    glColor3ub(221,229,247);
    circle(8,18,645,665);
    glColor3ub(252,254,255);
    circle(8,18,643,663);
    glColor3ub(252,254,255);
    circle(18,18,620,664);
    glColor3ub(252,254,255);
    circle(18,25,617,665);




    glColor3ub(232,241,255);        ///....Megh.......2.....///
    circle(13,20,p+100,745);
    glColor3ub(252,254,255);
    circle(11,18,p+100,745);

    glColor3ub(232,241,255);
    circle(10,20,p+110,755);
    glColor3ub(252,254,255);
    circle(10,20,p+112,762);

    glColor3ub(232,241,255);
    circle(13,20,p+110,735);

    glColor3ub(221,229,247);
    circle(9,20,p+120,750);
    glColor3ub(252,254,255);
    circle(8,18,p+120,759);

    glColor3ub(232,241,255);
    circle(9,20,p+120,756);
    glColor3ub(252,254,255);
    circle(8,18,p+120,752);

    glColor3ub(232,241,255);
    circle(9,20,p+130,765);
    glColor3ub(252,254,255);
    circle(8,18,p+130,761);

    glColor3ub(232,241,255);
    circle(9,20,p+125,745);
    glColor3ub(252,254,255);
    circle(8,18,p+135,747);

    glColor3ub(232,241,255);
    circle(9,20,p+140,755);

    glColor3ub(221,229,247);
    circle(8,18,p+143,745);
    glColor3ub(252,254,255);
    circle(8,18,p+140,743);
    glColor3ub(173,197,224);
    circle(8,18,p+130,733);
    glColor3ub(252,254,255);
    circle(8,18,p+130,738);
    glColor3ub(173,197,224);
    circle(8,18,p+120,723);
    glColor3ub(252,254,255);
    circle(8,18,p+120,728);


    glColor3ub(173,197,224);
    circle(23,9,p+155,735);
    glColor3ub(252,254,255);
    circle(21,7,p+155,734);
    glColor3ub(252,254,255);
    circle(23,9,p+145,744);
    glColor3ub(173,197,224);
    circle(21,10,p+140,720);
    glColor3ub(252,254,255);
    circle(21,11,p+138,723);


    glColor3ub(252,254,255);
    circle(18,18,p+110,744);
    glColor3ub(252,254,255);
    circle(18,25,p+120,745);

    glColor3ub(173,197,224);
    circle(10,20,p+135,715);
    glColor3ub(252,254,255);
    circle(10,20,p+135,719);



    glColor3ub(173,197,224);        ///....Megh.......3.....///
    circle(9,15,p+20,685);
    glColor3ub(252,254,255);
    circle(6,14,p+21,685);

    glColor3ub(232,241,255);
    circle(7,16,p+30,695);
    glColor3ub(252,254,255);
    circle(7,14,p+32,692);

    glColor3ub(252,254,255);
    circle(12,16,p+28,680);

    glColor3ub(221,229,247);
    circle(10,15,p+45,690);
    glColor3ub(252,254,255);
    circle(9,13,p+43,685);
    glColor3ub(252,254,255);
    circle(15,18,p+48,670);

    glColor3ub(173,197,224);
    circle(6,14,p+30,680);
    glColor3ub(252,254,255);
    circle(6,13,p+30,677);

    glColor3ub(173,197,224);
    circle(6,14,p+38,668);
    glColor3ub(252,254,255);
    circle(6,13,p+36,667);


    glColor3ub(252,254,255);
    circle(11,15,p+29,668);


    if(p<= 800)
        p = p + 0.03;
    else
        p = -10;

    glutPostRedisplay();
    glutSwapBuffers();


    ///..........B U S...........

    if(j<= 800)
        j = j + 0.4;
    else
        j = -250;

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(j+90,98);  //bus...................
    glVertex2f(j+95,98);
    glVertex2f(j+95,100);
    glVertex2f(j+90,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(j+94,89);   // bus font glass
    glVertex2f(j+96,89);
    glVertex2f(j+96,100);
    glVertex2f(j+94,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2f(j+10,80);  //.....bus
    glVertex2f(j+90,80);
    glVertex2f(j+90,105);
    glVertex2f(j+10,105);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2f(j+10,55);  //top..........lowerpart
    glVertex2f(j+92,55);
    glVertex2f(j+92,80);
    glVertex2f(j+10,80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(j+11,81);  //top..........
    glVertex2f(j+89,81);
    glVertex2f(j+89,102);
    glVertex2f(j+11,102);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+12,85);  //window..........
    glVertex2f(j+20,85);
    glVertex2f(j+20,100);
    glVertex2f(j+12,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+22,85);  //window..........
    glVertex2f(j+30,85);
    glVertex2f(j+30,100);
    glVertex2f(j+22,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+32,85);  //window..........
    glVertex2f(j+40,85);
    glVertex2f(j+40,100);
    glVertex2f(j+32,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+42,85);  //window..........
    glVertex2f(j+50,85);
    glVertex2f(j+50,100);
    glVertex2f(j+42,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+52,85);  //window..........
    glVertex2f(j+60,85);
    glVertex2f(j+60,100);
    glVertex2f(j+52,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 247, 255);
    glVertex2f(j+62,55);  //..door..........
    glVertex2f(j+70,55);
    glVertex2f(j+70,95);
    glVertex2f(j+62,95);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+72,85);  //window..........
    glVertex2f(j+80,85);
    glVertex2f(j+80,100);
    glVertex2f(j+72,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+82,85);  //window..........
    glVertex2f(j+88,85);
    glVertex2f(j+88,100);
    glVertex2f(j+82,100);
    glEnd();

    glColor3ub(255, 255, 204);          //....chaka....back
    circle(4,8,j+45,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+55,75);
    glColor3ub(255, 255, 204);
    circle(3,6,j+15,75);
    glColor3ub(255, 255, 204);
    circle(2,4,j+35,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+75,75);


    glColor3ub(0,0,0);          //....chaka....back
    circle(5,10,j+25,55);
    glColor3ub(255,255,255);
    circle(3,6,j+25,55);

    glColor3ub(0,0,0);
    circle(5,10,j+78,55);
    glColor3ub(255,255,255);
    circle(3,6,j+78,55);

    glColor3ub(0, 51, 204);
    glRasterPos2i(j+43,65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'D');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'I');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'U');

    glFlush();
}






int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// giving window size in X- and Y- direction
    glutInitWindowSize(1450, 750);
    glutInitWindowPosition(100, 0);
// Giving name to window
    glutCreateWindow("Daffodil International University. AB-2");
    myInit();
    glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
    glutMainLoop();
}
