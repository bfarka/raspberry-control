#include <limits.h>
#include "GPIOManager.h"
#include "gtest/gtest.h"

namespace GPIO {


	TEST(GPIOManager, Positive){
		GPIOManager::getInstance().doSomething();
	}
}
