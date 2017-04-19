#include "Window.h"

namespace VulkanEngine {


	Window::Window()
	{
	}


	Window::~Window()
	{
	}

	int Window::Create()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, "Vulkan Engine", nullptr, nullptr);
		return 0;
	}
}