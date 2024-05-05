#pragma once
#ifndef CHEX_H
#define CHEX_H

#include "CFigure.h"

class CHexagon : public CFigure
{
private:
	Point center;
	                /********************************************************************
					//corners are arranged clock-wise starting from the top left corner// 
				   *********************************************************************/
	Point P1;
	Point P2;  
	Point P3; 
	Point P4;
	Point P5;
	Point P6;
	int sidelength;
public:
	CHexagon(Point, int, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};

#endif