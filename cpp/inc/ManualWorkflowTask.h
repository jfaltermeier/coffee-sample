
#include <string>
#include "WorkflowTask.h"

#ifndef _ManualWorkflowTask_
#define _ManualWorkflowTask_

class ManualWorkflowTask: public WorkflowTask {
	public:
		std::string getActor();
};

#endif
