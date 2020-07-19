#include <string>
#include <queue>
using namespace std;

class DefinedClass;
queue<DefinedClass> PostfixAlgorithm(char* c);
double Calculate_PostfixFunction(queue<DefinedClass>);


class DefinedClass
{
private:
	string OperatorType;
	int Priority;
	double Number;

public:
	DefinedClass(string _OperatorType,int _Priority)
	{
		OperatorType=_OperatorType;
		Priority=_Priority;
		IsOperand=false;
		Number=0;
	}
	DefinedClass(double _Number)
	{
		Number=_Number;
		IsOperand=true;
		OperatorType="";
		Priority=0;
	}

	bool IsOperand;

	string GetOperatorType()
	{
		if(!IsOperand)
			return OperatorType;
		else return "Not a Operator.";
	}
	int GetPriority()
	{
		if(!IsOperand)
			return Priority;
		else return -1;
	}
	double GetNumber()
	{
		if(IsOperand)
			return Number;
		else return NULL;
	}

	~DefinedClass(){}
};