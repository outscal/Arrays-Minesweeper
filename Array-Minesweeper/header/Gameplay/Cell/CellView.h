#include "../../header/UI/UIElement/ButtonView.h"

using namespace UI::UIElement;

namespace Gameplay
{
	namespace Cell
	{
		class CellController;

		class CellView
		{
		private :
			CellController* cell_controller;
			ButtonView* cell_button;


			float cell_size = 32;
			int slice_count = 12;

			void destroy();
			
		public:
			CellView(CellController* controller);
			~CellView();

			void initialize();
			void update();
			void render();


			void initializeCellButton();
			void SetCellTexture();
		};
	}
}