#pragma once
#include "../../header/UI/UIElement/ButtonView.h"
using namespace UI::UIElement;

namespace Gameplay
{
	namespace Cell
	{

		class CellController;
		class CellView
		{
		private:

			CellController* cell_controller;
			ButtonView* cell_button;

			float cell_size =32*3;


			void createCellButton();
			void initializeCellButtons();
			void destroy();
			void SetCellSize();

		public:
			CellView(CellController* controller);
			~CellView();

			void initialize();
			void update();
			void render();

			
		};
	}
}