#include "Window.h"
using namespace Engine;

Window::Window(int width, int height, const char* title)
{
	_width = width;
	_height = height;
	_title = title;
}

Window::~Window()
{
	glfwDestroyWindow(_window);
}



void Window::createWindow()
{
	_window = glfwCreateWindow(_width, _height, _title, nullptr, nullptr);
	if (!_window)
	{
		throw std::runtime_error("Could not create window!\n");
	}
	setContextCurrent();
	if (glewInit()!=GLEW_OK)
	{
		throw std::runtime_error("Could not initialize GLEW!\n");
	}
	glewExperimental = true;
}

void Window::setContextCurrent()
{
	glfwMakeContextCurrent(_window);
}

void Window::mainLoop()
{
	while (!glfwWindowShouldClose(_window))
	{
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(1.0f, 0.2f, 1.0f, 1.0f);
		glfwSwapBuffers(_window);	
	}
}
