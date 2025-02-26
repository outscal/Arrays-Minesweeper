#pragma once
#include "../../header/Gameplay/Cell/CellController.h"

using namespace Gameplay::Cell;

namespace Gameplay
{
	namespace Board
	{
		class BoardView;
		class BoardModel;
		class BoardController
		{
		private:
			BoardView* board_view;
			BoardModel* board_model;
			CellController* cell_controller;
			
			void createBoard();
			void destroy();

		public:


			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();

			float getBoardWidth();
			float getBoardHeight();
			void reset();
		};
	}
}