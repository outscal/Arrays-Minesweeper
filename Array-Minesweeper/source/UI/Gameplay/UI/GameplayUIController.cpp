#include "../../header/UI/Gameplay/UI/GameplayUIController.h"
#include "../../header/Global/ServiceLocator.h"
#include <sstream>
#include <iomanip>

#include <iostream>
using namespace std;

using namespace Global;

namespace Gameplay
{
	namespace GameplayUI
	{
		GameplayUIController::GameplayUIController()
		{
			time_text = new TextView();
			mine_text = new TextView();
		}
		GameplayUIController::~GameplayUIController()
		{
			destroy();
		}
		void GameplayUIController::initialize()
		{
			initializeTexts();
		}
		void GameplayUIController::update()
		{
			updateTimeText();
			updateMineText();
		}
		void GameplayUIController::render()
		{
			time_text->render();
			mine_text->render();
		}
		void GameplayUIController::show()
		{
			time_text->show();
			mine_text->show();
		}
		void GameplayUIController::createTexts()
		{
			time_text = new TextView();

		}
		void GameplayUIController::initializeTexts()
		{
			initializeTimeText();
			initializeMineText();
		}
		void GameplayUIController::initializeTimeText()
		{
			time_text->initialize("300",
				Vector2f(time_text_left_offset, time_text_top_offset),
				FontType::DS_DIGIB,
				font_size,
				text_color);
		}

		void GameplayUIController::initializeMineText()
		{
			mine_text->initialize("000",
				Vector2f(mine_text_left_offset, mine_text_top_offset),
				FontType::DS_DIGIB,
				font_size,
				text_color);
		}

		void GameplayUIController::updateTimeText()
		{
			int remaining_time = ServiceLocator::getInstance()->getGameplayService()->getRemainingTime();

			std::stringstream stream;

			stream << std::setw(3) << std::setfill('0') << remaining_time;
			std::string string_remaining_time = stream.str();

			time_text->setText(string_remaining_time);
			time_text->update();
		}

		void GameplayUIController::updateMineText()
		{
			int remaining_mines = ServiceLocator::getInstance()->getGameplayService()->getRemainingNumberOfMines();

			std::stringstream stream;

			stream << std::setw(3) << std::setfill('0') << remaining_mines;

			std::string string_remaining_mine = stream.str();

			mine_text->setText(string_remaining_mine);
			mine_text->update();
		}

		void GameplayUIController::destroy()
		{
			delete(time_text);
			delete(mine_text);
		}
	}
}