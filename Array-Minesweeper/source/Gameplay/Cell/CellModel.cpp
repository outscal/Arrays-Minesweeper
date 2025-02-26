#include "../../header/Gameplay/Cell/CellModel.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Gameplay/Board/BoardModel.h"
using namespace Global;

namespace Gameplay
{
	namespace Cell
	{
		
		CellModel::CellModel()
		{
			tile_size = CalculateCellSize();
		}

		CellModel::~CellModel()
		{
		}

		void CellModel::initialize()
		{
		}

		void CellModel::update()
		{
		}

		void CellModel::render()
		{
		}

		float CellModel::getCellSize()
		{
			return tile_size;
		}

		void CellModel::destroy()
		{

		}

		float CellModel::CalculateCellSize()
		{
			float board_width = ServiceLocator::getInstance()->getBoardService()->getBoardWidth();
			float cell_width = board_width / Board::BoardModel::number_of_columns;
			return cell_width;
		}

	}
}