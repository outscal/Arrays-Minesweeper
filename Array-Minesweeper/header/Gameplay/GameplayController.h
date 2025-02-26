#pragma once

namespace Gameplay
{
	class GameplayController
	{
	private :
		void destroy();

	public :
		GameplayController();
		~GameplayController();
		void initialize();
		void update();
		void render();

		void reset();
	};
}