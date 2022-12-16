#ifndef PROGRESSSYSTEM_HPP_
#define PROGRESSSYSTEM_HPP_

#include "Progress/ProgressStat.hpp"

class ProgressSystem
{
public:
	ProgressSystem(ProgressStat&) noexcept;

	virtual void update() noexcept;
	virtual int getPercent() const noexcept;

	virtual ~ProgressSystem() = default;
private:
	ProgressStat *__stat;
};

#endif

