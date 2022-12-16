#include "Progress/ProgressBarPrintable.hpp"
#include "Progress/ProgressSystem.hpp"

#include <iomanip>
#include <cmath>

ProgressBarPrintable::ProgressBarPrintable(const ProgressStat &stat, const int bar_size) noexcept
	: __stat(&stat), __total_bar_size(bar_size), __last_percent(-1)
{
}


inline void ProgressBarPrintable::show(const std::string& message) noexcept
{
	if(this->__last_percent != this->__getPercent())
	{
		this->__last_percent = this->__getPercent();

		std::cout.flush();
		std::cout << "\r[" <<
			std::setfill('#') << std::setw(this->getCurrentBarSize() + 1) << '\0' <<
			std::setfill('-') << std::setw(	
				this->__total_bar_size - this->getCurrentBarSize() + 2
			) << "] " << this->__getPercent() << "%" << message <<
			(this->__getPercent() >= 100 ? '\n' : '\b');
	}	
}

inline int ProgressBarPrintable::getCurrentBarSize() const noexcept
{
	return (int) std::round(this->__getPercent() * this->__total_bar_size / 100);
}

inline int ProgressBarPrintable::__getPercent() const noexcept
{
 return (int) std::round(this->__stat->getProgress() * 100 / this->__stat->getTotal());
}
