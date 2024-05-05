#include"BringFrontAction.h"
#include "..\ApplicationManager.h"
#include "..\GUI\Output.h"

BringFrontAction::BringFrontAction(ApplicationManager* pApp) :Action(pApp)
{}
void BringFrontAction::Execute()
{
	Output* pOut = pManager->GetOutput();
	ReadActionParameters();
	if (SelectedIndex == -1)
		pOut->PrintMessage("please select a figure first");
	else
		pManager->BringFigFront(SelectedIndex);


}

void BringFrontAction::ReadActionParameters()
{
	Point P1;
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->PrintMessage("New Rectangle: Click at first corner");

	//Read 1st corner and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);
	SelectedIndex = pManager->GetSelectedFigureIndex();
}