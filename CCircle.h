#pragma once
#ifndef CCIRC_H
#define CCIRC_H

#include "CFigure.h"

class CCircle : public CFigure
{
private:
	Point Center;
	Point OnCircle;
	int Radius;
public:
	CCircle(Point center, Point oncircle, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};

#endif