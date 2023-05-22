
#include <chrono>
#include <thread>
#include "WorkflowTask.h"

void WorkflowTask::doExecute() {
	preExecute();
	execute();
	postExecute();
}

void WorkflowTask::execute() {
	std::this_thread::sleep_for(std::chrono::milliseconds(getDuration()));
	finished = true;
}
