#include <stdafx.h>
#include <stdio.h>
#include "PostfixAlgorithm.h"
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>

#define _USE_MATH_DEFINES 
#include <math.h>

using namespace std;

extern double Mem_Answer;

queue<DefinedClass> PostfixAlgorithm(char* Function)
{
	stack<DefinedClass> stack1;
	queue<DefinedClass> queue1;

#pragma region Infix to Postfix

	DefinedClass Oprt_Plus("+",1),
		Oprt_Minus("-",1),
		Oprt_Product("*",2),
		Oprt_Division("/",2);

	int index=0, ascii;

	double num_temp=0;

	bool HasNumber=false;

	while(Function[index])
	{
		char a=Function[index++];
		ascii=(int)a;
		
		if(ascii>47&&ascii<58)
		{
			//current char is a number
			(num_temp*=10)+=atof(&a);

			HasNumber=true;
		}
		else if(HasNumber)
		{	
			//if current char is operator
			//store the operand
			queue1.push(DefinedClass(num_temp));
			num_temp=0;
		}

		//+ = 43, - = 45, *= 42, /= 47
		if(ascii==43||ascii==45||ascii==42||ascii==47)
		{
			//Push Operator
			DefinedClass dc=ascii==43?Oprt_Plus:ascii==45?
				Oprt_Minus:ascii==42?Oprt_Product:Oprt_Division;

			if(stack1.empty())
				stack1.push(dc);
			else 
			{
				/*
				part A
				operator priority
				*/
				while(stack1.top().GetPriority()>=dc.GetPriority()){
					queue1.push(stack1.top());
					stack1.pop();
				}
				stack1.push(dc);
			}
		}
	}

	if(HasNumber)
		queue1.push(DefinedClass(num_temp));
	while(!stack1.empty())
	{
		queue1.push(stack1.top());
		stack1.pop();
	}
/*private bool leftFirst(DefinedClass a, DefinedClass b){
	int r = a.GetPriority();
	int s = b.GetPriority();
	return r>=s;
}*/
#pragma endregion

#pragma region Output Postfix Function to Text
	/* following is developed to output the postfix function*/
	/*
	queue<DefinedClass> q_temp=queue1;
	ofstream t;
	t.open("test.txt");
	while(!q_temp.empty())
	{
		DefinedClass d=q_temp.front();
		q_temp.pop();
		if(d.GetOperatorType()!="(")
			if(d.IsOperand)
				t<<d.GetNumber()<<",";
			else t<<d.GetOperatorType()<<",";
	}
	t.close();*/

#pragma endregion

	//Return postfix function
	return queue1;
}

stack<DefinedClass> stack2;
double Calculate_PostfixFunction(queue<DefinedClass> queue1)
	{
		while(!queue1.empty())
		{
 			DefinedClass d=queue1.front();
 			queue1.pop();
 			/*
			part B
			use stack2 to evaluate the result of postfix function in queue1
			*/
 			if(d.IsOperand){
 				stack2.push(d);
 			}
 			else {
				double a,b;
 				if(d.GetOperatorType()=="+"){
 						a = stack2.top().GetNumber();
						stack2.pop();
 						b = stack2.top().GetNumber();
						stack2.pop();
 						stack2.push(DefinedClass(b+a));
				}
 				if(d.GetOperatorType()=="-"){
 						a = stack2.top().GetNumber();
						stack2.pop();
 						b = stack2.top().GetNumber();
						stack2.pop();
 						stack2.push(DefinedClass(b-a));
				}
 				if(d.GetOperatorType()=="*"){
 						a = stack2.top().GetNumber();
						stack2.pop();
 						b = stack2.top().GetNumber();
						stack2.pop();
 						stack2.push(DefinedClass(b*a));
				}
 				if(d.GetOperatorType()=="/"){
 						a = stack2.top().GetNumber();
						stack2.pop();
 						b = stack2.top().GetNumber();
						stack2.pop();
 						stack2.push(DefinedClass(b/a));
				}
 			}
		}
		return stack2.top().GetNumber();
	}
