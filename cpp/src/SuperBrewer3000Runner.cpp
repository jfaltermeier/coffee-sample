

#include <iostream>
#include "Preheat.h"
#include "Brew.h"
#include "RefillWater.h"
#include "Drink.h"
#include "Push.h"
#include "CheckDripTray.h"
#include "CheckWater.h"
#include "WaterOk.h"


void runPreheat () {
	std::cout << "Run methods of Preheat ..." << std::endl;
	Preheat task;
	// verify initial state
	std::cout << "Preheat duration " << task.getDuration() << "." << std::endl;
	std::cout << "Preheat component " << task.getComponent() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "Preheat finished: " << task.hasFinished() << "." << std::endl;
}
void runBrew () {
	std::cout << "Run methods of Brew ..." << std::endl;
	Brew task;
	// verify initial state
	std::cout << "Brew duration " << task.getDuration() << "." << std::endl;
	std::cout << "Brew component " << task.getComponent() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "Brew finished: " << task.hasFinished() << "." << std::endl;
}
void runRefillWater () {
	std::cout << "Run methods of RefillWater ..." << std::endl;
	RefillWater task;
	// verify initial state
	std::cout << "RefillWater duration " << task.getDuration() << "." << std::endl;
	std::cout << "RefillWater actor " << task.getActor() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "RefillWater finished: " << task.hasFinished() << "." << std::endl;
}
void runDrink () {
	std::cout << "Run methods of Drink ..." << std::endl;
	Drink task;
	// verify initial state
	std::cout << "Drink duration " << task.getDuration() << "." << std::endl;
	std::cout << "Drink actor " << task.getActor() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "Drink finished: " << task.hasFinished() << "." << std::endl;
}
void runPush () {
	std::cout << "Run methods of Push ..." << std::endl;
	Push task;
	// verify initial state
	std::cout << "Push duration " << task.getDuration() << "." << std::endl;
	std::cout << "Push actor " << task.getActor() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "Push finished: " << task.hasFinished() << "." << std::endl;
}
void runCheckDripTray () {
	std::cout << "Run methods of CheckDripTray ..." << std::endl;
	CheckDripTray task;
	// verify initial state
	std::cout << "CheckDripTray duration " << task.getDuration() << "." << std::endl;
	std::cout << "CheckDripTray actor " << task.getActor() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "CheckDripTray finished: " << task.hasFinished() << "." << std::endl;
}
void runCheckWater () {
	std::cout << "Run methods of CheckWater ..." << std::endl;
	CheckWater task;
	// verify initial state
	std::cout << "CheckWater duration " << task.getDuration() << "." << std::endl;
	std::cout << "CheckWater component " << task.getComponent() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "CheckWater finished: " << task.hasFinished() << "." << std::endl;
}
void runWaterOk () {
	std::cout << "Run methods of WaterOk ..." << std::endl;
	WaterOk task;
	// verify initial state
	std::cout << "WaterOk duration " << task.getDuration() << "." << std::endl;
	std::cout << "WaterOk component " << task.getComponent() << "." << std::endl;

	// verify execute
	task.doExecute();
	
	std::cout << "WaterOk finished: " << task.hasFinished() << "." << std::endl;
}

int main () {
	runPreheat();
	runBrew();
	runRefillWater();
	runDrink();
	runPush();
	runCheckDripTray();
	runCheckWater();
	runWaterOk();
}
