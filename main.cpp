/*
	HOMEWORK: PHYSICS ENGINE 1: BULLET & FIREWORK PHYSICS
	MEMBERS: Macario Laurel
			 Junma Ogawa
			 Julian Urrutia
*/

//-------------------- INCLUDES --------------------\\

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "glm/glm.hpp"

//-------------------- MAIN CODE --------------------\\

int main() {

#pragma region Initialization

	// Initialise GLFW
	if (glfwInit() != GLFW_TRUE) {
		fprintf(stderr, "Failed to initialized! \n");
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Open a window and create its OpenGL context
	GLFWwindow* window;
	window = glfwCreateWindow(1200, 800, "Physics Engine 1 - Laurel, Ogawa, Urrutia", NULL, NULL);
	if (window == NULL) {
		fprintf(stderr, "Failed to load window! \n");
		return -1;
	}
	glfwMakeContextCurrent(window);

	// Initialize GLEW
	glewExperimental = true;
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		return -1;
	}

#pragma endregion

	// Setup White Background
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

	while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(window) == 0) {

	}

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;

}