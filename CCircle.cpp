#include "CCircle.h"

CCircle::CCircle(Point P1, Point P2, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	Center = P1;
	OnCircle = P2;
	Radius = sqrt(pow((P1.x - P2.x), 2) + pow((P1.y - P2.y), 2));
	ID = 200 + (newID++);
}

void CCircle::Draw(Output* pOut) const
{
	//Call Output::DrawCirc to draw a circle on the screen	
	pOut->DrawCirc(Center, OnCircle, FigGfxInfo, Selected);
}
