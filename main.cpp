#include "controller.h"
int main(int argc, char* argv[])
{
	int playing = 1;
	setup_controllers(playing);


	while (true)//game loop//frames
	{
		auto controllers = update(playing);
		if (all_players_connected(playing))
		{

			for (int index = 0; index < playing; ++index) {
				if (controllers[index]->A)
				{
					std::cout << index << " A\n";
				}
				if (controllers[index]->B)
				{
					std::cout << index << " B\n";
				}
				if (controllers[index]->X)
				{
					std::cout << index << " X\n";
				}
				if (controllers[index]->Y)
				{
					std::cout << index << " Y\n";
				}
				if (controllers[index]->BACK)
				{
					std::cout << index << " back\n";
				}
				if (controllers[index]->START)
				{
					std::cout << index << " start\n";
				}
				if (controllers[index]->DPAD_UP)
				{
					std::cout << index << "  DPAD_UP\n";
				}
				if (controllers[index]->DPAD_DOWN)
				{
					std::cout << index << " DPAD_DOWN\n";
				}
				if (controllers[index]->DPAD_LEFT)
				{
					std::cout << index << " DPAD_LEFT\n";
				}
				if (controllers[index]->DPAD_RIGHT)
				{
					std::cout << index << " DPAD_RIGHT\n";
				}
				if (controllers[index]->LEFT_SHOULDER)
				{
					std::cout << index << " LB\n";
				}
				if (controllers[index]->RIGHT_SHOULDER)
				{
					std::cout << index << " RB\n";
				}
				if (controllers[index]->bLeftTrigger)
				{
					std::cout << index << " LT\n";
				}
				if (controllers[index]->bRightTrigger)
				{
					std::cout << index << " RT\n";
				}
				if (controllers[index]->sThumbLX || controllers[index]->sThumbLY)
				{
					std::cout << index << " left stick\n";
				}
				if (controllers[index]->sThumbRX || controllers[index]->sThumbRY)
				{
					std::cout << index << " right stick\n";
				}
				//same for leftthumb press

			}

		}
		else
		{
			std::cout << "reconnect controller";
		}
		clean_controller_input(controllers);
	}
	clean_controller(playing);
	return(0);
}