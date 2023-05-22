
#include <string>
#include "ManualWorkflowTask.h"
	
class AbstractRefillWater: public ManualWorkflowTask {
	public:
		std::string getActor() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
