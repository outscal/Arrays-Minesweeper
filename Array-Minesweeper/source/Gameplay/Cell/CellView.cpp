#include "../../header/Gameplay/Cell/CellView.h"
#include "../../header/Gameplay/Cell/CellController.h"
#include <SFML/Graphics.hpp>
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"

using namespace sf;
using namespace Global;

namespace Gameplay
{
	namespace Cell
	{
		
		CellView::CellView(CellController* controller)
		{
			cell_controller = cell_controller;
			cell_button = nullptr;

			createCellButton();

			
		}

		CellView::~CellView()
		{
			destroy();
		}

		void CellView::initialize()
		{
			initializeCellButtons();
		}

		void CellView::update()
		{
			cell_button->update();
		}

		void CellView::render()
		{
			cell_button->render();
		}

		void CellView::createCellButton()
		{
			//SetCellSize();
			cell_button = new ButtonView();
		}

		void CellView::initializeCellButtons()
		{
			cell_button->initialize("Cell", 
				Config::cells_texture_path, 
				cell_size,//width
				cell_size, //height
				Vector2f(0, 0));
		}

		void CellView::SetCellSize()
		{
			cell_size = 32*3;
		}

		void CellView::destroy()
		{
			delete(cell_controller);
			delete(cell_button);
		}
	}
}