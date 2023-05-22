
#include <string>
#include "ManualWorkflowTask.h"
	
class AbstractDrink: public ManualWorkflowTask {
	public:
		std::string getActor() {
			return "";
		}

		int getDuration() {
			return 0;
		}
};
