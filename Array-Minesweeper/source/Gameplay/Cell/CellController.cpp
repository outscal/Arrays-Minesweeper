#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Gameplay/Cell/CellView.h"

namespace Gameplay
{
	namespace Cell
	{
		
		CellController::CellController()
		{
			cell_model = new CellModel();
			cell_view = new CellView(this);
		}
		CellController::~CellController()
		{
			destroy();
		}

		void CellController::initialize()
		{
			cell_view->initialize();
		}

		void CellController::update()
		{
			cell_view->update();
		}

		void CellController::render()
		{
			cell_view->render();
		}

		void CellController::setCellValue(CellValue value)
		{
			cell_model->setCellValue(value);
		}

		CellValue CellController::getCellValue()
		{
			return cell_model->getCellValue();
		}

		void CellController::setCellState(CellState state)
		{
			cell_model->setCellState(state);
		}

		CellState CellController::getCellState()
		{
			return cell_model->getCellState();
		}

		void CellController::SetCellPosition(Vector2f position)
		{
			cell_model->setCellPosition(position);
		}

		Vector2f CellController::getCellPosition()
		{
			return cell_model->getCellPosition();
		}

		void CellController::reset()
		{
			cell_model->reset();
		}

		

		void CellController::destroy()
		{
			delete(cell_model);
			delete(cell_view);
		}

	}
}