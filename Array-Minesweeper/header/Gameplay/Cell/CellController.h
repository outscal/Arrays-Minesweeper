#pragma once

namespace Gameplay
{
	namespace Cell
	{
		class CellModel;
		class CellView;
		class CellController
		{
		private:

			CellModel* cell_model;
			CellView* cell_view;

			void destroy();

		public:
			CellController();
			~CellController();

			void initialize();
			void update();
			void render();

			float GetCellSize();
		};
	}
}