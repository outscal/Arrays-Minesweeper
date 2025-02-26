#pragma once


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