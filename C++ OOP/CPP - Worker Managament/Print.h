#pragma once

class Printer
{
	Queue<Worker> Workers;

public:

	void start()
	{
		for (size_t i = this->Workers.front; i < this->Workers.rear + 1; i++)
		{
			for (size_t j = 1; j < this->Workers.items[i].getPage() + 1; j++)
			{
				cout << this->Workers.items[i].getName() << "'s - Pages: " << j << endl;
			}
			this->Workers.dQueue();
			cout << endl;
		}
	}

	void req(Worker newWorker) { Workers.enQueue(newWorker); }
};