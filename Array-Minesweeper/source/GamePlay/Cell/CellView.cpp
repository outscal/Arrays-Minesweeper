#include"../../header/GamePlay/Cell/CellView.h"
#include"../../header/Global/Config.h"
using namespace Global;
using namespace UI::UIElement;
using namespace sf;
namespace Gameplay
{
	namespace Cell
	{
		CellView::CellView(CellController* Controller)
		{
			cellController = Controller;
			cellButton = new ButtonView();
		}
		void CellView::Intialize(float width, float height)
		{
			initializeButtonImage(tile_size * 3, tile_size * 3);
		}
		void CellView::initializeButtonImage(float width, float height)
		{
			cellButton->initialize("Cell", Config::cells_texture_path, width, height, Vector2f(0, 0));
		}
		
		void CellView::Update()
		{
			cellButton->update();
		}
		void CellView::Render()
		{
			cellButton->render();
		}
		CellView::~CellView()
		{
			delete(cellButton);
		}
	}
}