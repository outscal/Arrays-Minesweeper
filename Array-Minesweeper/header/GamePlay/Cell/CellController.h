#pragma once
namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellController {
		private:
			CellView* cellView;
			void destroy();
		public:
			CellController();
			~CellController();

			void initialize();
			void update();
			void render();
		};
	}
}