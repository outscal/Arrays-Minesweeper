#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Board/BoardModel.h"


namespace Gameplay
{
	namespace Board
	{
		
		BoardController::BoardController()
		{
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::initialize()
		{
		}

		void BoardController::update()
		{
		}

		void BoardController::render()
		{
		}

		void BoardController::reset()
		{
			board_model->reset();
		}

		void BoardController::destroy()
		{
			delete(board_model);
			delete(board_view);
		}
	}
}