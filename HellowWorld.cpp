﻿#include "HellowWorld.hpp"

namespace sstd {

	HellowWorld::HellowWorld() {
	}

	void HellowWorld::load() {
        arx_add_main_command<HellowWorld>();
	}

	void HellowWorld::main() {
		auto varDataTime = QDateTime::currentDateTime().toString().toStdWString();
		varDataTime = LR"(Hellow World!
)" + varDataTime;
		acutPrintf(varDataTime.data());

	}

}/*namespace sstd*/

/********************************/

