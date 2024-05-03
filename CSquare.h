#ifndef CSQUARE_H
#define CSQUARE_H

#include "CFigure.h"

class CSquare : public CFigure
{
private:
	Point center;
	int sidelength;
public:
	CSquare(Point, int, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};

#endif