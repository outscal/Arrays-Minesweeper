#pragma once

namespace Gameplay
{
	namespace Cell
	{

		class CellModel
		{
		private :
			float tile_size = 32.f;

			void destroy();
			float CalculateCellSize();

		public:
			CellModel();
			~CellModel();

			void initialize();
			void update();
			void render();

			float getCellSize();
		};
	}
}