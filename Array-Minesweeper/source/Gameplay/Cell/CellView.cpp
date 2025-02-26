
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

		void CellView::initialize(float width,float height)
		{
			initializeCellButton(width,height);
		}

		void CellView::update()
		{
			cell_button->update();
		}

		void CellView::render()
		{
			cell_button->render();
		}

		void CellView::initializeCellButton(float width, float height)
		{
			cell_width = width;
			cell_height = height;
			cout << "\nWidth : " << width << endl;
			cout << "\nHeight : " << height << endl;
			SetCellTexture();
			cell_button->initialize("CELL",
				Config::cells_texture_path,
				cell_width * slice_count,
				cell_height,
				getCellPosition());
		}

		void CellView::SetCellTexture()
		{
			int index = static_cast<int>(cell_controller->getCellValue());
			switch (cell_controller->getCellState())
			{
			case CellState::HIDDEN:
				cell_button->setTextureRect(IntRect(10 * tile_size, 0, tile_size, tile_size));
				break;

			case CellState::OPEN:
				cell_button->setTextureRect(IntRect(index * tile_size, 0, tile_size, tile_size));
				break;

			case CellState::FLAGGED :
				cell_button->setTextureRect(IntRect(11 * tile_size, 0, tile_size, tile_size));
				break;
			}
		}

		Vector2f CellView::getCellPosition()
		{
			return Vector2f(cell_left_offset,cell_top_offset);
		}

		

		void CellView::destroy()
		{
			delete(cell_controller);
		}
	}
}



