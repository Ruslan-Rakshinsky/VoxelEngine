#pragma once
#include "Header.h"
namespace Engine
{
	class Window
	{
	private:
		void createWindow();
		void setContextCurrent();
		void mainLoop();
		
	public:
		Window(int width, int height, const char* title);
		~Window();
		void run()
		{
			createWindow();
			mainLoop();
		};
	private:
		GLFWwindow* _window;
		int _width;
		int _height;
		const char* _title;	
	};
}


