#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Board/BoardModel.h"


namespace Gameplay
{
	namespace Board
	{
		
		BoardController::BoardController()
		{
			board_model = new BoardModel();
			board_view = new BoardView(this);
			
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::initialize()
		{
			board_view->initialize();
		}

		void BoardController::update()
		{
			board_view->update();
		}

		void BoardController::render()
		{
			board_view->render();
		}

		float BoardController::getBoardWidth()
		{
			return board_view->getBoardWidth();
		}

		float BoardController::getBoardHeight()
		{
			return board_view->getBoardHeight();
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