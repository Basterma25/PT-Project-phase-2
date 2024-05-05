#include "CHexagon.h"

CHexagon::CHexagon(Point P, int sl, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	center = P;
	sidelength = sl;
	P3.x = center.x + sidelength;  P3.y = center.y;
	P4.x = center.x + 0.5 * sidelength; P4.y = center.y + (sidelength * (sqrt(3) / 2));
	P5.x = center.x - 0.5 * sidelength; P5.y = center.y + (sidelength * (sqrt(3) / 2));
	P6.x = center.x - sidelength;  P6.y = center.y;
	P2.x = center.x + 0.5 * sidelength; P2.y = center.y - (sidelength * (sqrt(3) / 2));
	P1.x = center.x - 0.5 * sidelength; P1.y = center.y - (sidelength * (sqrt(3) / 2));
	ID = 300 + (newID++);
}

void CHexagon::Draw(Output* pOut) const
{
	//call function Draw_Hex to draw a hexagon on the screen
	pOut->draw_Hex(center, FigGfxInfo, Selected, sidelength);
}
