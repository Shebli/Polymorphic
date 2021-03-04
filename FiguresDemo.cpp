/* =====================================================================================================================
 * FiguresDemo.cpp
 * ---------------------------------------------------------------------------------------------------------------------
 * Demo program for Figures library.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#include "Point.h"
#include "Rectangle.h"
#include <unistd.h>
#include <ncurses.h>

/**
 * Takes any figure and animates it on the screen.
 */
void animate(Figure& figure)
{
	figure.place(10, 5);
	for (int i=0; i < 5; ++i)
	{
		figure.draw();
		refresh();
		sleep(1);
		figure.erase();
		figure.move(DIR_RIGHT);
		figure.move(DIR_RIGHT);
		figure.move(DIR_DOWN);
	}
}

int main(int argc, char* argv[])
{
	initscr();
	noecho();
	curs_set(0);

	Rectangle rect(4,10);
	Point point;

	animate(point);
	animate(rect);

	printw("Hit any key... ");
	curs_set(2);
	getch();
	endwin();
	return 0;
}
