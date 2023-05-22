
#include <string>
#include "AutomaticWorkflowTask.h"
	
class AbstractCheckWater: public AutomaticWorkflowTask {
	public:
		std::string getComponent() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
