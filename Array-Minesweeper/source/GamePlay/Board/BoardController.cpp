#include"../../header/GamePlay/Board/BoardController.h"

namespace Gameplay
{
	
	namespace Board
	{
		using namespace Gameplay::Cell;
		void BoardController::CreateBoards()
		{
			cell = new CellController();
		}
		void BoardController::DeleteBoard()
		{
			delete(cell);
		}
		void BoardController::Destroy()
		{
			DeleteBoard();
			delete(boardView);
		}
		void BoardController::resetBoard()
		{
		}
		BoardController::BoardController()
		{
			boardView = new BoardView(this);
			CreateBoards();
		}
		void BoardController::initialize()
		{
			intializeCell();
			boardView->initialize();
			
		}
		void BoardController::Update()
		{
			boardView->update();
			cell->update();
		}
		void BoardController::Render()
		{
			boardView->render();
			cell->render();
		}
		void BoardController::Reset()
		{
			cell->reset();
		}
		void BoardController::intializeCell()
		{
			float cellWidth = boardView->GetCellWidth();
			float cellHeight = boardView->GetCellHeight();
			cell->initialize(cellWidth,cellHeight);
		}
		BoardController::~BoardController()
		{
			Destroy();
		}
	}
}