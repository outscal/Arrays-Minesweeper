#include "../../header/Gameplay/Board/BoardService.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;
		using namespace UI;
		using namespace UI::UIElement;

		Gameplay::Board::BoardService::BoardService()
		{
			board_controller = nullptr;
		}

		Gameplay::Board::BoardService::~BoardService()
		{
			destroy();
		}

		void Gameplay::Board::BoardService::initialize()
		{
			board_controller = new BoardController();
			board_controller->initialize();
		}

		void Gameplay::Board::BoardService::update()
		{
			board_controller->update();
		}

		void Gameplay::Board::BoardService::render()
		{
			board_controller->render();
		}

		void Gameplay::Board::BoardService::processCellInput(CellController* cell_controller, ButtonType button_type)
		{
			board_controller->processCellInput(cell_controller, button_type);
		}

		BoardState Gameplay::Board::BoardService::getBoardState()
		{
			return board_controller->getBoardState();
		}

		void Gameplay::Board::BoardService::setBoardState(BoardState state)
		{
			board_controller->setBoardState(state);
		}

		void Gameplay::Board::BoardService::resetBoard()
		{
			board_controller->reset();
		}

		int Gameplay::Board::BoardService::getMinesCount()
		{
			return board_controller->getMinesCount();
		}

		void Gameplay::Board::BoardService::destroy()
		{
			delete(board_controller);
		}


	}
}