#include "CSquare.h"

CSquare::CSquare(Point P1, int sl, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	center = P1;
	sidelength = sl;
	Corner1.x = center.x - (sidelength / 2); Corner1.y = center.y - (sidelength / 2);
	Corner2.x = center.x + (sidelength / 2); Corner2.y = center.y - (sidelength / 2);
	Corner3.x = center.x - (sidelength / 2); Corner3.y = center.y + (sidelength / 2);
	Corner4.x = center.x + (sidelength / 2); Corner4.y = center.y + (sidelength / 2);
}

void CSquare::Draw(Output* pOut) const
{
	//call function DrawSqr to draw a square on the screen
	pOut->DrawSqr(center, sidelength, FigGfxInfo, Selected);
}
