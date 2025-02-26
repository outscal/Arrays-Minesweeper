#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Gameplay/Cell/CellModel.h"
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


		float CellController::GetCellSize()
		{
			return cell_model->getCellSize();
		}

		void CellController::destroy()
		{
			delete(cell_model);
			delete(cell_view);
		}

	}
}