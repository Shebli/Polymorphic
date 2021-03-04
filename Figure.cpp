/* =====================================================================================================================
 * Figure.cpp
 * ---------------------------------------------------------------------------------------------------------------------
 * Implements features that are common to all figures.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#include "Figure.h"

Figure::Figure() : m_row(0), m_col(0)
{
}

bool Figure::move(Direction dir)
{
	bool didCrossBorder = false;
	switch(dir)
	{
	case DIR_RIGHT:
		m_col += 1;
		if (m_col >=COLS)
		{
			m_col = 0;
			didCrossBorder = true;
		}
		break;

	case DIR_LEFT:
		m_col -= 1;
		if (m_col < 0)
		{
			m_col += COLS;
			didCrossBorder = true;
		}
		break;

	case DIR_UP:
		m_row -= 1;
		if (m_row < 0)
		{
			m_row += LINES;
			didCrossBorder = true;
		}
		break;

	case DIR_DOWN:
		m_row += 1;
		if (m_row >= LINES)
		{
			m_row = 0;
			didCrossBorder = true;
		}
		break;
	}
	return didCrossBorder;
}

void Figure::place(int row, int col)
{
	m_row = row;
	m_col = col;
	normalize(m_row, m_col);
}

void Figure::erase() const
{
	draw(' ');
}

void Figure::normalize()
{
	normalize(m_row, m_col);
}

void Figure::normalize(int& row, int& col)
{
	while (row < 0)
		row += LINES;

	while (row >= LINES)
		row -= LINES;

	while (col < 0)
		col += COLS;

	while (col >= COLS)
		col -= COLS;
}
