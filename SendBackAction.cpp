#include"SendBackAction.h"
#include "..\ApplicationManager.h"
#include "..\GUI\input.h"
#include "..\GUI\Output.h"

SendBackAction::SendBackAction(ApplicationManager* pApp):Action(pApp)
{}
void SendBackAction::Execute()
{
	Output* pOut = pManager->GetOutput();
	int SelectedIndex = pManager->GetSelectedFigureIndex();
	if (SelectedIndex == -1)
		pOut->PrintMessage("please select a figure first");
	else
		pManager->SendFigBack(SelectedIndex);


}
