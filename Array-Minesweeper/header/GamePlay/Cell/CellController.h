#pragma once
#include"SFML/Graphics.hpp"
namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellModel;
		enum class CellState;
		enum class CellValue;
		class CellController {
		private:
			CellView* cellView;
			CellModel* cellModel;
			void destroy();
		public:
			CellController();
			~CellController();

			void initialize(float cellWidth,float cellHeight);
			void update();
			void render();
			void reset();
			CellValue GetCellValue();
			CellState GetCellState();
			sf::Vector2i GetCellPosition();
		};
	}
}