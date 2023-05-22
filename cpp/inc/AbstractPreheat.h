
#include <string>
#include "AutomaticWorkflowTask.h"
	
class AbstractPreheat: public AutomaticWorkflowTask {
	public:
		std::string getComponent() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
