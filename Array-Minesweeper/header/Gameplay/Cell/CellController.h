#pragma once
namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellController
		{
		protected:
			CellView* cell_view;

			void destroy();

		public:
			CellController();
			~CellController();

			void initialize(float cell_width, float cell_height);
			void update();
			void render();
			void reset();

	    };
	}
}