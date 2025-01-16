#include"../../header/GamePlay/GameplayController.h"
using namespace Global;
namespace Gameplay{
	GameplayController::GameplayController()
	{
	}
	void GameplayController::Intialize()
	{
	}
	void GameplayController::update()
	{
	}
	void GameplayController::render()
	{
	}
	void GameplayController::reset()
	{
	}
	GameplayController::~GameplayController()
	{
		ServiceLocator::getInstance()->getBoardService()->ResetBoard();
	}
}