#pragma once
#include <chrono>

class FrameTimer
{
public:
	FrameTimer()
	{
		last = std::chrono::steady_clock::now();
	};
	float Mark()
	{
		auto old = last;
		last = std::chrono::steady_clock::now();
		return std::chrono::duration<float>(last - old).count();
	};
private:
	std::chrono::steady_clock::time_point last;
};

