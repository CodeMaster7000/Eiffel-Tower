#include <conio.h> 
#include <graphics.h> 
#include <stdio.h> 

void main() 
{ 
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, "C:\\turboc3\\bgi"); 
	int a = 390, b = 390, c = 700; 

	line(300, 1000, 450, 1000); 
	line(300, 1000, 480, 940); 
	line(450, 1000, 330, 940); 
	line(330, 940, 480, 940); 
	line(330, 940, 510, 880); 
	line(480, 940, 360, 880); 
	line(360, 880, 510, 880); 
	line(360, 880, 540, 820); 
	line(390, 820, 510, 880); 
	line(390, 820, 540, 820); 
	line(300, 1000, 390, 820); 
	line(450, 1000, 540, 820); 
	line(390, 820, 810, 820); 
	ellipse(600, 900, 15, 165, 90, 80); 
	line(750, 1000, 900, 1000); 
	line(750, 1000, 870, 940); 
	line(720, 940, 900, 1000); 
	line(720, 940, 870, 940); 
	line(720, 940, 840, 880); 
	line(870, 940, 690, 880); 
	line(690, 880, 840, 880); 
	line(690, 880, 810, 820); 
	line(840, 880, 660, 820); 
	line(660, 820, 810, 820); 
	line(750, 1000, 660, 820); 
	line(900, 1000, 810, 820); 
	rectangle(390, 800, 810, 820); 
	rectangle(380, 780, 820, 800); 
	rectangle(390, 760, 810, 780); 

	while (a <= 790) { 
		line(a, 820, a + 10, 800); 
		line(a + 10, 800, a + 20, 820); 
		a = a + 20; 
	} 

	while (b <= 810) { 
		line(b, 760, b, 780); 
		b = b + 20; 
	} 

	line(410, 760, 530, 760); 
	line(410, 760, 560, 700); 
	line(530, 760, 440, 700); 
	line(440, 700, 560, 700); 
	line(440, 700, 590, 640); 
	line(560, 700, 470, 640); 
	line(470, 640, 590, 640); 
	line(410, 760, 470, 640); 
	line(540, 760, 590, 640); 
	line(670, 760, 790, 760); 
	line(670, 760, 760, 700); 
	line(790, 760, 640, 700); 
	line(640, 700, 760, 700); 
	line(640, 700, 730, 640); 
	line(760, 700, 610, 640); 
	line(610, 640, 730, 640); 
	line(670, 760, 610, 640); 
	line(790, 760, 730, 640); 
	line(470, 640, 730, 640); 
	rectangle(460, 620, 740, 640); 
	rectangle(470, 600, 730, 620); 

	b = 470; 

	while (b <= 730) { 
		line(b, 600, b, 620); 
		b = b + 10; 
	} 
	a = 600; 
	b = 500; 
	line(600, 600, 600, 140); 
	while (b >= 240) { 
		if (b == c) 
			break; 
		else { 
			line(b, a, c, a); 
			line(b, a, c - 10, a - 40); 
			line(b + 10, a - 40, c, a); 
			a = a - 40; 
			b = b + 10; 
			c = c - 10; 
		} 
	} 
	line(500, 600, 590, 240); 
	line(700, 600, 610, 240); 
	rectangle(590, 200, 610, 240); 
	getch(); 
	closegraph(); 
}
