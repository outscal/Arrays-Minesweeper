#pragma once
#include"SFML/Graphics.hpp"
namespace Gameplay
{
	namespace Cell{
	
        enum class CellState {

            HIDDEN,
            OPEN,
            FLAGGED,
        };

    enum class CellValue
    {
        EMPTY,
        ONE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        MINE,
    };
    class CellModel {

    private:
        CellState cellState;
        CellValue cellValue;
        sf::Vector2i position;
    public:
        CellModel(int index);
        int cellIndex;
        CellState GetCellState();
        void SetCellState(CellState state);
        CellValue GetCellValue();
        void SetCellValue(CellValue value);
        sf::Vector2i GetPosition();
        void SetCellPosition(sf::Vector2i gridPosition);
        void reset();
        int GetCellIndex();
     
    };
		
	}
}
