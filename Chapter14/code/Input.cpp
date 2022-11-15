#include "Engine.h"

void Engine::input()
{
	Event event;
	while (m_Window.pollEvent(event))
	{
		if (event.type == Event::KeyPressed)
		{
			

			// Handle the player quitting
			if (event.key.code == Keyboard::Escape)
			{
				m_Window.close();
			}

			// Handle the player starting the game
			if (event.key.code == Keyboard::Return)
			{
				m_Playing = true;
			}

			// Switch between Thomas and Bob
			if (event.key.code == Keyboard::Q)
			{
				m_Character1 = !m_Character1;
			}

			// Switch between full and split-screen
			if (event.key.code == Keyboard::E)
			{
				m_SplitScreen = !m_SplitScreen;
			}
		}
	}	
}