#ifndef PROGRESSBARPRINTABLE_HPP_
#define PROGRESSBARPRINTABLE_HPP_

#include "Printable.hpp"
#include "Progress/ProgressStat.hpp"

#include <cstdint>

class ProgressBarPrintable final : public Printable
{
public:
	explicit ProgressBarPrintable(const ProgressStat&, const int = 15) noexcept;

	virtual void show(const std::string& = " ") noexcept override;
	virtual int getCurrentBarSize() const noexcept;

	virtual ~ProgressBarPrintable() = default;

private:
	const ProgressStat *__stat;
	std::uint64_t __total_bar_size;
	int __last_percent;

	int __getPercent() const noexcept;
};

#endif
