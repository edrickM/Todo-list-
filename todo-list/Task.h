#pragma once
#include <string>
using namespace std;

class Task
{
	private:
		string name;
		string description;
		string dueDate;

		bool isComplete;

	public:
		Task(const string& name, const string& description, const string& dueDate);

		const string getName();
		const string getDescription();
		const string getDueDate();
		

		void setName(string& newName);
		void setDescription(string& newDescription);
		void setDueDate(string& newDueDate);
		
		const bool getCompletionStatus();

		void toggleCompletion();

		void displayTaskDetails();

};

