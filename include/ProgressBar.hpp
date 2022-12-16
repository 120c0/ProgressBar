#ifndef PROGRESSBAR_HPP_
#define PROGRESSBAR_HPP_

#include "Progress/ProgressBarPrintable.hpp"
#include "Progress/ProgressSystem.hpp"
#include "Progress/ProgressStat.hpp"

class ProgressBar
{
public:
	explicit ProgressBar(const std::uint64_t, const int) noexcept;

	virtual void show(const std::string&) noexcept;
	virtual void update() noexcept;

	virtual ~ProgressBar();
private:
	ProgressStat *__stat;
	ProgressSystem *__system;
	ProgressBarPrintable *__print;
};

#endif
