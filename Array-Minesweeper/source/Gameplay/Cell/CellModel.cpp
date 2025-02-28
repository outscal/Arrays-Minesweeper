#include "../../header/Gameplay/Cell/CellModel.h"

namespace Gameplay
{
	namespace Cell
	{
		
		CellModel::CellModel(int index)
		{
			cell_index = index;
			reset();
		}
		CellModel::~CellModel()
		{
			destroy();
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
		void CellModel::reset()
		{
			cell_value = CellValue::EMPTY;
			cell_state = CellState::HIDDEN;
		}
		CellValue CellModel::getCellValue()
		{
			return cell_value;
		}
		void CellModel::setCellValue(CellValue value)
		{
			cell_value = value;
		}
		CellState CellModel::getCellState()
		{
			return cell_state;
		}
		void CellModel::setCellState(CellState state)
		{
			cell_state = state;
		}
		Vector2f CellModel::getCellPosition()
		{
			return cell_position;
		}
		void CellModel::setCellPosition(Vector2f gridPosition)
		{
			cell_position = gridPosition;
		}
		int CellModel::getCellIndex()
		{
			return cell_index;
		}
		void CellModel::destroy()
		{
		}
	}
}