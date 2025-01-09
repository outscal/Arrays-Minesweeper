#include"../../header/GamePlay/Board/GameplayController.h"
using namespace Global;
namespace Gameplay
{
	
	void GameplayController::intialize()
	{
	}
	void GameplayController::Update()
	{
	}
	void GameplayController::Render()
	{
	}
	void GameplayController::Reset()
	{
		ServiceLocator::getInstance()->getBoardService()->ResetBoard();
	}
}