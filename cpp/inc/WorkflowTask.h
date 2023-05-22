
#ifndef _WorkflowTask_
#define _WorkflowTask_
class WorkflowTask {
	protected:
		bool finished;
		void execute();
	public:
		virtual int getDuration() = 0;
		void doExecute();
		virtual void preExecute() = 0;
		virtual void postExecute() = 0;
		bool hasFinished() {
			return finished;
		};
};
#endif
