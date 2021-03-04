/* =====================================================================================================================
 * Rectangle.cpp
 * ---------------------------------------------------------------------------------------------------------------------
 * Implements rectangle class as a specialized figure.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle(int height, int width) : m_height(height), m_width(width)
{
}

void Rectangle::draw(char glyphChar) const
{
	Point point;
	point.place(row(), col());

	for (auto i=0; i < height()-1; ++i)
	{
		point.draw(glyphChar);
		point.move(DIR_DOWN);
	}
	for (auto i=0; i < width()-1; ++i)
	{
		point.draw(glyphChar);
		point.move(DIR_RIGHT);
	}
	for (auto i=0; i < height()-1; ++i)
	{
		point.draw(glyphChar);
		point.move(DIR_UP);
	}
	for (auto i=0; i < width()-1; ++i)
	{
		point.draw(glyphChar);
		point.move(DIR_LEFT);
	}
}

void Rectangle::normalize()
{
	Figure::normalize();
	Figure::normalize(m_height, m_width);
	if (m_height < 2)
		m_height = 2;
	if (m_width < 2)
		m_width = 2;
}
