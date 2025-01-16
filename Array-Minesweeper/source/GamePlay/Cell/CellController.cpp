#include"../../header/GamePlay/Cell/CellController.h"
#include"../../header/GamePlay/Cell/CellView.h"
#include"../../header/GamePlay/Cell/CellModel.h"

namespace Gameplay
{
	namespace Cell
	{
		void CellController::destroy()
		{
			delete(cellView);
			delete(cellModel);
		}
		CellController::CellController()
		{
			cellView = new CellView(this);
			cellModel = new CellModel();
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
		void CellController::reset()
		{
			cellModel->reset();
		}
		CellValue CellController::GetCellValue()
		{
			return cellModel->GetCellValue();
		}
		CellState CellController::GetCellState()
		{
			return cellModel->GetCellState();
		}
		sf::Vector2i CellController::GetCellPosition()
		{
			return cellModel->GetPosition();
		}
	}
}
