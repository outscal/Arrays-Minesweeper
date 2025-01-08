#pragma once
#include<SFML/Graphics.hpp>
#include "../../header/UI/UIElement/ButtonView.h"
using namespace sf;
namespace Gameplay
{
	namespace Cell
	{

		class CellController;
		class CellView
		{
		protected:
			UI::UIElement::ButtonView* cell_button;
			CellController* cell_controller;
			const int tile_size = 32;
			void initializeButtonImage(float width, float height);

		public:
			CellView(CellController* controller);
			~CellView();
			void initialize(float width, float height);
			void update();
			void render();
		};
	}
}