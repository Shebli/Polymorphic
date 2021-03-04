/* =====================================================================================================================
 * Point.h
 * ---------------------------------------------------------------------------------------------------------------------
 * Defines a point as a specialized figure.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#ifndef Point_h_INCLUDED

#include "Figure.h"

class Point : public Figure
{
public:
	Point(int row = 0, int col = 0);
	void draw(char glyphChar = DEFAULT_GLYPH) const override;
};

#define Point_h_INCLUDED
#endif
