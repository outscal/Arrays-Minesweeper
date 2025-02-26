#include <SFML/Graphics.hpp>

#include "../../header/Gameplay/Cell/CellView.h"
#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Global/Config.h"

#include <iostream>
using namespace std;

using namespace sf;
using namespace Global;

namespace Gameplay
{
	namespace Cell
	{
		
		CellView::CellView(CellController* controller)
		{
			cell_controller = controller;
			cell_button = new ButtonView();
		}
		CellView::~CellView()
		{
			destroy();
		}

		void CellView::initialize()
		{
			initializeCellButton();
		}

		void CellView::update()
		{
			cell_button->update();
		}

		void CellView::render()
		{
			cell_button->render();
		}

		void CellView::initializeCellButton()
		{
			SetCellTexture();
			cell_button->initialize("CELL",
				Config::cells_texture_path,
				cell_size * slice_count,
				cell_size ,
				Vector2f(0, 0));
		}

		void CellView::SetCellTexture()
		{
			int index = static_cast<int>(cell_controller->getCellValue());
			cout << index << endl;
			switch (cell_controller->getCellState())
			{
			case CellState::HIDDEN:
				cell_button->setTextureRect(IntRect(10 * cell_size, 0, cell_size, cell_size));
				break;

			case CellState::OPEN:
				cell_button->setTextureRect(IntRect(index * cell_size, 0, cell_size, cell_size));
				break;

			case CellState::FLAGGED :
				cell_button->setTextureRect(IntRect(11 * cell_size, 0, cell_size, cell_size));
				break;
			}
		}

		void CellView::destroy()
		{
			delete(cell_controller);
		}
	}
}



