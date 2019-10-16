///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-31
// Updated : 2011-05-31
// Licence : This source is under MIT License
// File    : test/core/setup_precision_highp.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_PRECISION_HIGHP_FLOAT
#include <glm/glm.hpp>

static int test_mat()
{
	int Error = 0;

	Error += sizeof(glm::mat2) == sizeof(glm::highp_mat2) ? 0 : 1;
	Error += sizeof(glm::mat3) == sizeof(glm::highp_mat3) ? 0 : 1;
	Error += sizeof(glm::mat4) == sizeof(glm::highp_mat4) ? 0 : 1;

	Error += sizeof(glm::mat2x2) == sizeof(glm::highp_mat2x2) ? 0 : 1;
	Error += sizeof(glm::mat2x3) == sizeof(glm::highp_mat2x3) ? 0 : 1;
	Error += sizeof(glm::mat2x4) == sizeof(glm::highp_mat2x4) ? 0 : 1;
	Error += sizeof(glm::mat3x2) == sizeof(glm::highp_mat3x2) ? 0 : 1;
	Error += sizeof(glm::mat3x3) == sizeof(glm::highp_mat3x3) ? 0 : 1;
	Error += sizeof(glm::mat3x4) == sizeof(glm::highp_mat3x4) ? 0 : 1;
	Error += sizeof(glm::mat4x2) == sizeof(glm::highp_mat4x2) ? 0 : 1;
	Error += sizeof(glm::mat4x3) == sizeof(glm::highp_mat4x3) ? 0 : 1;
	Error += sizeof(glm::mat4x4) == sizeof(glm::highp_mat4x4) ? 0 : 1;

	return Error;
}

static int test_vec()
{
	int Error = 0;

	Error += sizeof(glm::vec2) == sizeof(glm::highp_vec2) ? 0 : 1;
	Error += sizeof(glm::vec3) == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += sizeof(glm::vec4) == sizeof(glm::highp_vec4) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_mat();
	Error += test_vec();
	
	return Error;
}
