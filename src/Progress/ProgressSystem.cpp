#include "Progress/ProgressSystem.hpp"

#include <cmath>

ProgressSystem::ProgressSystem(ProgressStat &stat) noexcept
	: __stat(&stat)
{
}

inline void ProgressSystem::update() noexcept
{
	this->__stat->setProgress(this->__stat->getProgress() + 1);
}  
inline int ProgressSystem::getPercent() const noexcept
{
	return (int)
		std::round(this->__stat->getProgress() * 100
				/ this->__stat->getTotal());
}
