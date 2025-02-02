#include"../../header/GamePlay/Cell/CellController.h"
#include"../../header/GamePlay/Cell/CellView.h"
#include"../../header/GamePlay/Cell/CellModel.h"
#include"../../header/Global/ServiceLocator.h"
#include"../../header/Sound/SoundService.h"
namespace Gameplay
{
	namespace Cell
	{
		using namespace sf;
		using namespace Global;
		using namespace Sound;
		void CellController::destroy()
		{
			delete(cellView);
			delete(cellModel);
		}
		CellController::CellController(Vector2i position)
		{
			cellView = new CellView(this);
			cellModel = new CellModel(position);
		}
		CellController::~CellController()
		{
			destroy();
		}
		void CellController::initialize(float cellWidth, float cellHeight)
		{

			cellView->Intialize(cellWidth,cellHeight);
		}
		void CellController::update()
		{
			cellView->Update();
		}
		void CellController::render()
		{
			cellView->Render();
		}
		void CellController::reset()
		{
			cellModel->reset();
		}
		CellValue CellController::GetCellValue()
		{
			return cellModel->GetCellValue();
		}
		CellState CellController::GetCellState()
		{
			return cellModel->GetCellState();
		}
		sf::Vector2i CellController::GetCellPosition()
		{
			return cellModel->GetPosition();
		}

		void CellController::OpenCell()
		{
			if (cellModel->GetCellState() != CellState::HIDDEN) {
				cellModel->SetCellState(CellState::OPEN);
				ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::BUTTON_CLICK);
			}
		}

		void CellController::FlagCell()
		{
			switch (cellModel->GetCellState()) {
			case::Gameplay::Cell::CellState::FLAGGED:
				cellModel->SetCellState(CellState::HIDDEN);
				break;
			case::Gameplay::Cell::CellState::HIDDEN:
				cellModel->SetCellState(CellState::FLAGGED);
				break;
			}
			ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::Flag);
		}
		
	}
}
