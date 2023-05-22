
#include <string>
#include "ManualWorkflowTask.h"
	
class AbstractPush: public ManualWorkflowTask {
	public:
		std::string getActor() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
