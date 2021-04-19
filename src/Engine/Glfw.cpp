#include "Glfw.h"
#include "Header.h"
using namespace Engine;

Glfw::Glfw()
{
	if (!glfwInit())
	{
		throw std::runtime_error("Could not initialize GLFW!\n");
	}
	glfwWindowHint(GLFW_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_VERSION_MINOR, 6);
}

Glfw::~Glfw()
{
	glfwTerminate();
}
