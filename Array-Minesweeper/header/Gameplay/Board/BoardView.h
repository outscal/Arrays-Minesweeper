#pragma once


namespace Gameplay
{
	namespace Board
	{
		class BoardController;
		class BoardView
		{
		private:
			BoardController* board_controller;

			void destroy();

		public:


			BoardView(BoardController* controller);
			~BoardView();

			void initialize();
			void update();
			void render();
		};
	}
}