#ifndef CRECT_H
#define CRECT_H

#include "CFigure.h"

class CRectangle : public CFigure
{
private:
	Point Corner1; //top left corner
	Point Corner2; //top right corner
	Point Corner3; //bottom right corner
	Point Corner4; //bottom left corner
public:
	CRectangle(Point , Point, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
};

#endif