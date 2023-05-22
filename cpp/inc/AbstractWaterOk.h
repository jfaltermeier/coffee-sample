
#include <string>
#include "AutomaticWorkflowTask.h"
	
class AbstractWaterOk: public AutomaticWorkflowTask {
	public:
		std::string getComponent() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
