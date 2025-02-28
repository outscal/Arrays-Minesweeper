#include <SFML/Graphics.hpp>

using namespace sf;

namespace Gameplay
{
	namespace Cell
	{
		enum class CellState
		{
			HIDDEN,
			OPEN,
			FLAGGED
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
			MINE
		};

		class CellModel
		{
		private:
			CellValue cell_value;
			CellState cell_state;
			Vector2f cell_position;

			int cell_index;
			void destroy();

		public:
			CellModel(int index);
			~CellModel();

			void initialize();
			void update();
			void render();
			void reset();

			CellValue getCellValue();
			void setCellValue(CellValue value);

			CellState getCellState();
			void setCellState(CellState state);

			Vector2f getCellPosition();
			void setCellPosition(Vector2f gridPosition);
			int getCellIndex();
		};

	}
}