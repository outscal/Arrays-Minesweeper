#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Board/BoardModel.h"
#include "../../header/Global/ServiceLocator.h"

#include <iostream>
using namespace std;

using namespace Global;

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
			float width = board_view->CalculateCellWidth();
			float height = board_view->CalculateCellHeight();
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
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cells[i][j]->render();
				}
			}
		}

		void BoardController::updateBoard()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cells[i][j]->update();
				}
			}
		}

		void BoardController::initializeBoard(float width, float height)
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cells[i][j]->initialize(width,height);
				}
			}
		}

		

		int BoardController::getMineCount()
		{
			return number_of_mines>=0? number_of_mines:0;
		}

		void BoardController::openCell(Vector2i position)
		{

			if (cells[position.x][position.y]->canOpenCell())
			{
				cells[position.x][position.y]->openCell();
			}
		}

		void BoardController::flagCell(Vector2i position)
		{
			switch (cells[position.x][position.y]->getCellState())
			{
			case CellState::FLAGGED:
				ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::BUTTON_CLICK);
				(number_of_mines<0)?number_of_mines=1:number_of_mines++;
				break;
			case CellState::HIDDEN:
				ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::BUTTON_CLICK);
				if (number_of_mines >= 0)
				{

					number_of_mines--;
				}
				break;
			}
			if (number_of_mines >= 0)
			{
				cells[position.x][position.y]->flagCell();
			}
		}


		void BoardController::processCellInput(CellController* cell_controller, ButtonType button_type)
		{
			switch (button_type)
			{
			case ButtonType::LEFT_MOUSE_BUTTON:
				openCell(cell_controller->getCellIndex());
				break;

			case ButtonType::RIGHT_MOUSE_BUTTON:
				flagCell(cell_controller->getCellIndex());
				break;
			}
		}

		void BoardController::reset()
		{

			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cells[i][j]->reset();
				}
			}

			number_of_mines = BoardModel::number_of_mines;
		}

		

		void BoardController::createBoard()
		{


			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cells[i][j] =new CellController(i,j);
				}
			}
		}

		void BoardController::deleteBoard()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					delete(cells[i][j]);
				}
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