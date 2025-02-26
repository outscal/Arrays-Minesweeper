#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Board/BoardController.h"


namespace Gameplay
{
	namespace Board
	{
		
		BoardView::BoardView(BoardController* controller)
		{
			board_controller = controller;
		}

		BoardView::~BoardView()
		{
			destroy();
		}

		void BoardView::initialize()
		{
		}

		void BoardView::update()
		{
		}

		void BoardView::render()
		{
		}

		void BoardView::destroy()
		{
		}
	}
}