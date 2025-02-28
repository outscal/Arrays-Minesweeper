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
			setCloumRowCount();
			createBoard();
			
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::initialize()
		{
			board_view->initialize();
			float width = board_view->getBoardWidth();
			float height = board_view->getBoardHeight();
			initializeBoard(width, height);
		}

		void BoardController::update()
		{
			board_view->update();
			updateBoard();
		}

		void BoardController::render()
		{
			board_view->render();
			renderBoard();
			
		}

		void BoardController::renderBoard()
		{
			for (int i = 0; i < number_of_columns; i++)
			{
				cells[i]->render();
			}
		}

		void BoardController::updateBoard()
		{
			for (int i = 0; i < number_of_columns; i++)
			{
				cells[i]->update();
			}
		}

		void BoardController::initializeBoard(float width, float height)
		{
			for (int i = 0; i < number_of_columns; i++)
			{
				cells[i]->initialize(width,height);
			}
		}

		

		void BoardController::reset()
		{
			//board_model->reset();

			for (int i = 0; i < number_of_columns; i++)
			{
				cells[i]->reset();
			}

		}

		

		void BoardController::createBoard()
		{


			for (int i = 0; i < number_of_columns; i++)
			{
				cells[i] = new CellController(i);
			}
		}

		void BoardController::deleteBoard()
		{
			for (int i = 0; number_of_columns; i++)
			{
				delete(cells[i]);
			}
		}


		void BoardController::setCloumRowCount()
		{
			number_of_columns = BoardModel::number_of_columns;
			number_of_rows = BoardModel::number_of_rows;
		}

		void BoardController::destroy()
		{
			delete(board_model);
			delete(board_view);
			deleteBoard();
		}
	}
}