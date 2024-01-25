#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Gameplay/Board/BoardService.h"
#include "../../header/Global/TimeService.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Main/GameService.h"

namespace Gameplay
{
    using namespace Main;
    using namespace Board;
    using namespace Global;
    using namespace Cell;
    using namespace UI::UIElement;

    GameplayController::~GameplayController() {  }

    void GameplayController::initialize() {  }

    void GameplayController::update()
    {
        updateRemainingTime();
        if (isTimeOver()) processGameOver();
    }

    void GameplayController::render() {  }

    void GameplayController::processCellInput(CellController* cell_controller, ButtonType button_type) 
    {
        ServiceLocator::getInstance()->getBoardService()->processCellInput(cell_controller, button_type);
    }

    void GameplayController::processGameOver()
    {
        switch (ServiceLocator::getInstance()->getBoardService()->getBoardState())
        {
        case BoardState::GAME_OVER:
            GameService::setGameState(GameState::CREDITS);
            break;
        default:
            gameOver();
            break;
        }
    }

    void GameplayController::updateRemainingTime() 
    {
        remaining_time -= ServiceLocator::getInstance()->getTimeService()->getDeltaTime();
    }

    bool GameplayController::isTimeOver() { return (remaining_time <= 1); }

    void GameplayController::gameOver()
    {
        remaining_time = restart_time;
        ServiceLocator::getInstance()->getBoardService()->setBoardState(BoardState::GAME_OVER);
    }

    void GameplayController::restart() 
    { 
        ServiceLocator::getInstance()->getBoardService()->resetBoard();
        remaining_time = max_level_duration;
    }

    int GameplayController::getMinesCount() { return ServiceLocator::getInstance()->getBoardService()->getMinesCount(); }

    float GameplayController::getRemainingTime() { return remaining_time; }
}