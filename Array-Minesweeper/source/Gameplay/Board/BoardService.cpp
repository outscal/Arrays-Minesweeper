
#include "../../header/Gameplay/Board/BoardService.h"
#include "../../header/Gameplay/Board/BoardController.h"


namespace Gameplay
{
	namespace Board
	{
		
		BoardService::BoardService()
		{
			board_controller = new BoardController();
		}
		BoardService::~BoardService()
		{
			destroy();
		}

		void BoardService::initialize()
		{
			board_controller->initialize();
		}

		void BoardService::update()
		{
			board_controller->update();
		}

		void BoardService::render()
		{
			board_controller->render();
		}

		

		int BoardService::getNumberOfMines()
		{
			return board_controller->getMineCount();
		}

		void BoardService::resetBoard()
		{
			board_controller->reset();
		}

		void BoardService::processCellInput(Cell::CellController* cell_controller, ButtonType button_type)
		{


			board_controller->processCellInput(cell_controller, button_type);
		}

		void BoardService::destroy()
		{
			delete(board_controller);
		}

	}

}