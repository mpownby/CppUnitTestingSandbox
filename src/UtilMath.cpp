//
// Created by AARXWZZ on 3/5/2021.
//

#include "UtilMath.h"
#include <stdexcept>

using std::runtime_error;

bool UtilMath::m_initialized = false;

void UtilMath::Initialize()
{
	m_initialized = true;
}

int UtilMath::Multiply(int a, int b)
{
	if (!m_initialized)
	{
		throw runtime_error("Not initialized!");
	}

	return a * b;
}

int UtilMath::Subtract(int a, int b)
{
	if (!m_initialized)
	{
		throw runtime_error("Not initialized!");
	}

	return a - b;
}

int UtilMath::Divide(int a, int b)
{
	if (!m_initialized)
	{
		throw runtime_error("Not initialized!");
	}

	return a / b;
}
