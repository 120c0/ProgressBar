#ifndef PROGRESSSTAT_HPP_
#define PROGRESSSTAT_HPP_

#include <iostream>

class ProgressStat final
{
public:
	ProgressStat(const std::uint64_t) noexcept;

	virtual void setProgress(const std::uint64_t) noexcept;
	const std::uint64_t &getProgress() const noexcept;
	virtual void setTotal(const std::uint64_t) noexcept;
	const std::uint64_t &getTotal() const noexcept;

	virtual ~ProgressStat() noexcept = default;
private:
	std::uint64_t __total, __progress;
};

#endif

