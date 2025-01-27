#include"../../header/GamePlay/Board/BoardController.h"

namespace Gameplay
{
	
	namespace Board
	{
		using namespace Gameplay::Cell;
		void BoardController::CreateBoards()
		{
			for (int i = 0; i < NumberOFColums; i++) {
				cells[i] = new CellController(i);
			}
		}
		void BoardController::DeleteBoard()
		{
			for (int i = 0; i < NumberOFColums; i++) {
				delete(cells[i]);
			}
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
			for (int i = 0; i < NumberOFColums; i++) {
				cells[i]->update();
			}
		}
		void BoardController::Render()
		{
			boardView->render();
			for (int i = 0; i < NumberOFColums; i++) {
				cells[i]->render();
			}
		}
		void BoardController::Reset()
		{
			for (int i = 0; i < NumberOFColums; i++) {
				cells[i]->reset();
			}
		}
		void BoardController::intializeCell()
		{
			float cellWidth = boardView->GetCellWidth();
			float cellHeight = boardView->GetCellHeight();
			for (int i = 0; i < NumberOFColums; i++) {
				cells[i]->initialize(cellWidth, cellHeight);
			}
		}
		BoardController::~BoardController()
		{
			Destroy();
		}
	}
}