/* =====================================================================================================================
 * Figure.h
 * ---------------------------------------------------------------------------------------------------------------------
 * Defines an abstract figure.
 * @author Shebli Anvar
 * =====================================================================================================================
 */

#ifndef Figure_h_INCLUDED

#include <ncurses.h>

enum Direction { DIR_RIGHT, DIR_LEFT, DIR_UP, DIR_DOWN };

class Figure
{
public:
	static const char DEFAULT_GLYPH = '*';
public:
	Figure();
	int row() const { return m_row; }
	int col() const { return m_col; }
	bool move(Direction dir);
	void place(int row, int col);
	virtual void draw(char glyphChar = DEFAULT_GLYPH) const = 0;
	void erase() const;

protected:
	virtual void normalize();
	static void normalize(int& row, int& col);

private:
	int m_row;
	int m_col;
};

#define Figure_h_INCLUDED
#endif
