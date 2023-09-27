#include <iostream>
#include <list>
#include <ctime>
#include <string>
class Task {
private:
	int id;
	std::string description;
	bool isCompleted;

public:
	Task() : id(0), description(""), isCompleted(false) {};
	~Task() = default;

	bool create(std::string new_description)
	{
		//generate random int 1-100
		id = rand() % 100 + 1;
		description = new_description;
		return true;
	};

	int getId() { return id; }
	std::string getDescription() { return description; }
	bool getIsCompleted() { return isCompleted; }

	void setCompleted(bool val) { isCompleted = val; }


};

int main()
{
	char input_option;
	int inputId;
	std::string input_description;

	std::list<Task> todoItems;
	std::list<Task>::iterator it;

	srand(time(NULL));

	todoItems.clear();


	while (1)
	{
		system("cls");
		std::cout << "Todo List" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		for (it = todoItems.begin(); it != todoItems.end(); it++) {

			std::string completed = it->getIsCompleted() ? "done" : "not done";

			std::cout << it->getId() << " | " << it->getDescription() << " | " << completed << std::endl;
		}

		if (todoItems.empty())
		{
			std::cout << "Add a your first task!" << "\n" << std::endl;
		}

		std::cout << "[a]dd a new task" << std::endl;
		std::cout << "[c]omplete a task" << std::endl;
		std::cout << "[q]uit" << std::endl;

		std::cout <<"choice: ";

		std::cin >> input_option;

		if (input_option == 'q')
		{
			std::cout << "Have a great day!" << std::endl;
			break;
		}
		else if (input_option == 'a')
		{

			std::cout << "Add a description: " <<std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::getline(std::cin, input_description);

			Task newTask;
			newTask.create(input_description);
			todoItems.push_back(newTask);

		}
		else if (input_option == 'c') 
		{
			std::cout << "Enter Id to mark as completed: ";
			std::cin >> inputId;

			for (it = todoItems.begin(); it != todoItems.end(); it++) {

				if (inputId == it->getId()) 
				{
					it->setCompleted(true);
					break;
				}
			}
		}

	}

	
	
}

