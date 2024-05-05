#ifndef CSQUARE_H
#define CSQUARE_H

#include "CFigure.h"

class CSquare : public CFigure
{
private:
	Point center;
	Point Corner1; //top left corner
	Point Corner2; //top right corner
	Point Corner3; //bottom right corner
	Point Corner4; //bottom left corner
	int sidelength;
public:
	CSquare(Point, int, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};

#endif