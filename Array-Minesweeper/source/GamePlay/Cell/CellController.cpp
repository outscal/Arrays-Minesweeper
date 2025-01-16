#include"../../header/GamePlay/Cell/CellController.h"
#include"../../header/GamePlay/Cell/CellView.h"

namespace Gameplay
{
	namespace Cell
	{
		void CellController::destroy()
		{
			delete(cellView);
		}
		CellController::CellController()
		{
			cellView = new CellView(this);
		}
		CellController::~CellController()
		{
			destroy();
		}
		void CellController::initialize()
		{

			cellView->Intialize(32,32);
		}
		void CellController::update()
		{
			cellView->Update();
		}
		void CellController::render()
		{
			cellView->Render();
		}
	}
}
