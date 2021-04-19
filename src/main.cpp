#include "Engine/Glfw.h"
#include "Engine/Window.h"
#include <stdexcept>
#include <iostream>

int main(int argc, char* argv[])
{
	try
	{
		Engine::Glfw glfw;
		Engine::Window app(800, 600, "HELLO");
		app.run();
	}
	catch (std::runtime_error e)
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
