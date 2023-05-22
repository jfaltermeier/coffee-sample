
#include <string>
#include "AutomaticWorkflowTask.h"
	
class AbstractBrew: public AutomaticWorkflowTask {
	public:
		std::string getComponent() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
