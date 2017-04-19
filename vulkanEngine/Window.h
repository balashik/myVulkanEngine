#pragma once

#include <GLFW\glfw3.h>

namespace VulkanEngine {
	class Window
	{

	private:
		int width = 800;
		int height = 600;
	public:


		GLFWwindow* window;


		Window();
		~Window();

		int Create();
	};
}
