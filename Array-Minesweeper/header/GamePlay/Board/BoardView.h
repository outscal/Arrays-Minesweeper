#pragma once
#include"../../header/UI/UIElement/ImageView.h"
using namespace UI::UIElement;
namespace Gameplay
{
	namespace Board
	{


		class BoardController;
		class BoardView {
		private:
			BoardController* board_controller;
			ImageView* board_Image;
		public:
			BoardView(BoardController* controller);
			~BoardView();
			void CreateImage();
			void CreateSetUpImages();
			
		};
	}
}