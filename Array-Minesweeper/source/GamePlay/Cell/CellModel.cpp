#include"../../header/GamePlay/Cell/CellModel.h"


namespace Gameplay
{
	namespace Cell
	{
        using namespace sf;
        CellModel::CellModel(int index)
        {
            this->cellIndex = index;
        }
        CellState CellModel::GetCellState()
        {
            return cellState;
        }
        void CellModel::SetCellState(CellState state)
        {
            cellState = state;
        }
        CellValue CellModel::GetCellValue()
        {
            return cellValue;
        }
        void CellModel::SetCellValue(CellValue value)
        {
            cellValue = value;
        }
        sf::Vector2i CellModel::GetPosition()
        {
            return position;
        }
        void CellModel::SetCellPosition(sf::Vector2i gridPosition)
        {
            position = gridPosition;
        }
        void CellModel::reset()
        {
           cellState = CellState::HIDDEN;
           cellValue = CellValue::EMPTY;
        }
        int CellModel::GetCellIndex()
        {
            return cellIndex;
        }
        CellModel::~CellModel()
        {
        }
    }
}