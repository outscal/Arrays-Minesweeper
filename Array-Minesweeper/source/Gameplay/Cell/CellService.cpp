#include "../../header/Gameplay/Cell/CellService.h"
#include "../../header/Gameplay/Cell/CellController.h"

namespace Gameplay
{
	namespace Cell
	{
		
		CellService::CellService()
		{
			cell_controller = new CellController();
		}

		CellService::~CellService()
		{
			destroy();
		}

		void CellService::initialize()
		{
			cell_controller->initialize();
		}

		void CellService::update()
		{
			cell_controller->update();
		}

		void CellService::render()
		{
			cell_controller->render();
		}

		void CellService::destroy()
		{
			delete(cell_controller);
		}
	}
}