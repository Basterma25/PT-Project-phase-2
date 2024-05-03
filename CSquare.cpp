#include "CSquare.h"

CSquare::CSquare(Point P1, int sl, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	center = P1;
	sidelength = sl;
}

void CSquare::Draw(Output* pOut) const
{
	//call function DrawSqr to draw a square on the screen
	pOut->DrawSqr(center, sidelength, FigGfxInfo, Selected);
}
