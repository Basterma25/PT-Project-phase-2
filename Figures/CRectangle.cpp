#include "CRectangle.h"

CRectangle::CRectangle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner3 = P2;
	Corner2.x = Corner3.x; Corner2.y = Corner1.y;
	Corner4.x = Corner1.x; Corner4.y = Corner3.y;
	ID = 100 + (newID++);
}
	

void CRectangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawRect(Corner1, Corner3, FigGfxInfo, Selected);
}