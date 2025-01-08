#include"../../header/GamePlay/Board/BoardView.h"
#include"../../header/GamePlay/Board/BoardController.h"
namespace Gameplay
{
	namespace Board
	{
		BoardView::BoardView(BoardController* controller)
		{
			board_controller = controller;
			board_Image = new ImageView();

		}
		BoardView::~BoardView()
		{
		}
		void BoardView::CreateImage()
		{
		}
		void BoardView::CreateSetUpImages()
		{
		}
	}
}