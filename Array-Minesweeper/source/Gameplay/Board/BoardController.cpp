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
			createBoard();
			
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::initialize()
		{
			board_view->initialize();
			cell_controller->initialize();
		}

		void BoardController::update()
		{
			board_view->update();
			cell_controller->update();
		}

		void BoardController::render()
		{
			board_view->render();
			cell_controller->render();
			
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

		void BoardController::createBoard()
		{
			cell_controller = new CellController();
		}

		void BoardController::destroy()
		{
			delete(board_model);
			delete(board_view);
			delete(cell_controller);
		}
	}
}