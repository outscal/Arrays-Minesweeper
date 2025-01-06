#pragma once
#include"../../header/GamePlay/Board/CellController.h"
#include"SFML/Graphics.hpp"
namespace Gameplay
{
	namespace Board
	{
		class BoardController {
		private:
			static const int NumberOfRows = 9;
			static const int NumberOFColums = 9;
			static const int NumberOFMines = 8;


			void CreateBoards();
			void DeleteBoard();
			void Destroy();

		public:

			void initialize();
			void Update();
			void Render();
			void Reset();

		};



	}
}