

namespace Gameplay
{
	namespace Cell
	{
		class CellController;

		class CellService
		{
		private :
			CellController* cell_controller;

			void destroy();

		public :
			CellService();
			~CellService();

			void initialize();
			void update();
			void render();
		};
	}
}