
#include <string>
#include "WorkflowTask.h"

#ifndef _AutomaticWorkflowTask_
#define _AutomaticWorkflowTask_

class AutomaticWorkflowTask: public WorkflowTask {
	public:
		std::string getComponent();
};

#endif
