#include "../../header/Gameplay/Cell/CellModel.h"

namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellModel;

		class CellController
		{
		private:
			CellModel* cell_model;
			CellView* cell_view;

			void destroy();

		public:
			CellController(int index);
			~CellController();

			void initialize(float width,float hight);
			void update();
			void render();

			void setCellValue(CellValue value);
			CellValue getCellValue();

			void setCellState(CellState state);
			CellState getCellState();

			void SetCellPosition(Vector2f position);
			Vector2f getCellPosition();

			void reset();
			int getCellIndex();


		};
	
	}
}