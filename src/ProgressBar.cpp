#include "ProgressBar.hpp"

ProgressBar::ProgressBar(const std::uint64_t total, const int bar_size) noexcept
{
	this->__stat = new ProgressStat(total);
	this->__system = new ProgressSystem(*this->__stat);
	this->__print = new ProgressBarPrintable(*this->__stat, bar_size);
}

void ProgressBar::show(const std::string &message) noexcept
{
	this->__print->show(message);
}
void ProgressBar::update() noexcept
{
	this->__system->update();
}

ProgressBar::~ProgressBar() noexcept
{
	delete this->__stat;
	delete this->__system;
	delete this->__print;
}
