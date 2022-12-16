#include "Progress/ProgressStat.hpp"

ProgressStat::ProgressStat(const std::uint64_t total) noexcept
	: __total(total), __progress(0)
{
}

void ProgressStat::setProgress(const std::uint64_t progress) noexcept
{
	this->__progress = progress;
}
const std::uint64_t &ProgressStat::getProgress() const noexcept
{
	return this->__progress;
}
void ProgressStat::setTotal(const std::uint64_t total) noexcept
{
	this->__total = total;
}
const std::uint64_t &ProgressStat::getTotal() const noexcept
{
	return this->__total;
}
