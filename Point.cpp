/* =====================================================================================================================
 * Point.cpp
 * ---------------------------------------------------------------------------------------------------------------------
 * Implements a point as a specialized figure.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#include "Point.h"
#include <ncurses.h>

Point::Point(int row, int col)
{
	place(row, col);
}

void Point::draw(char glyphChar) const
{
	mvaddch(row(), col(), glyphChar);
}
