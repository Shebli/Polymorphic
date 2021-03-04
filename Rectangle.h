/* =====================================================================================================================
 * Rectangle.h
 * ---------------------------------------------------------------------------------------------------------------------
 * Defines rectangle class as a specialized figure.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#ifndef Rectangle_h_INCLUDED
#define Rectangle_h_INCLUDED

#include "Figure.h"


class Rectangle : public Figure
{
public:
	Rectangle(int height=2, int width=2);
	int height() const { return m_height; }
	int width() const { return m_width; }
	void draw(char glyphChar = DEFAULT_GLYPH) const override;

protected:
	virtual void normalize() override;

private:
	int m_height;
	int m_width;
};

#endif
