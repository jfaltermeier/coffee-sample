
#include <string>
#include "ManualWorkflowTask.h"
	
class AbstractCheckDripTray: public ManualWorkflowTask {
	public:
		std::string getActor() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
