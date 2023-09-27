#include "Task.h"
#include <iostream>

Task::Task(const string& name, const string& description, const string& dueDate)
	: name(name), description(description), dueDate(dueDate), isComplete(false)
{
	this->name = name;
	this->description = description;
	this->dueDate = dueDate;
	this->isComplete = false;
}

const string Task::getName()
{
	return name;
}

const string Task::getDescription()
{
	return description;
}

const string Task::getDueDate()
{
	return dueDate;
}

const bool Task::getCompletionStatus()
{
	return isComplete;
}

void Task::setName(string& newName)
{
	name = newName;
}

void Task::setDescription(string& newDescription)
{
	description = newDescription;
}

void Task::setDueDate(string& newDueDate)
{
	dueDate = newDueDate;
}


void Task::toggleCompletion()
{
	isComplete = !isComplete;
}

void Task::displayTaskDetails()
{
	cout << "Task: " << name << endl;
	cout << "Description: " << description << endl;
	cout << "Due Date: " << dueDate << endl;
	cout << "Status: " << (isComplete ? "Complete" : "Incomplete") << endl;
}
