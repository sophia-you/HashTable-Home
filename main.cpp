#include <iostream>
#include <string>
#include "student.h"
#include "node.h"

using namespace std;

/*
 * Name | Sophia You
 * Date | 02/08/2024
 * Description | Hash Table. Students are either randomly generated or added
 * manually and stored in a hash table. The user has the option to print,
 * delete, etc. as well. 
 */

int main()
{
  bool editing = true; // while editing is true, the program runs
  while (editing)
    {
      int max = 20;
      char input[max];
      // prompts user for command type
      cout << "LOWER CASE LETTERS ONLY!!!" << endl;
      cout << "Type 'add' to add a student." << endl;
      cout << "Type 'delete' to delete a student." << endl;
      cout << "Type 'print' to print the student roster." << endl;
      cout << "type 'average' to print the school's average GPA." << endl;
      cout << "Type 'quit' to exit editing mode." << endl;
      cin.getline(input, max);
      int length = strlen(input);
      input[length + 1] = '\0';

      if (strcmp(input, "add") == 0)
	{
	  cout << "To enter a student manually, type 'manual.' To generate a random student, type 'random.'" << endl;
	  cin.getline(input, max);
	  if (strcmp(input, "manual") == 0)
	    {
	      int max = 50;
	      char input[max];
	      char* first = new char[25];
	      char* last = new char[50];
	      int id = 0;
	      float gpa = 0.0;

	      // prompt for student information
	      cout << "Enter student information: " << endl;
	      cout << "First name: " << endl;
	      cin.getline(input, max);
	      strcpy(first, input);
	      cout << "Last name: " << endl;
	      cin.getline(input, max);
	      strcpy(last, input);
	      cout << "Student ID: " << endl;
	      cin >> id;
	      cin.ignore(max, '\n');
	      cout << "Student GPA:" << endl;
	      cin >> gpa;
	      cin.ignore(max, '\n');

	      Student* student = new Student(first, last, id, gpa);
	    }
	  else if (strcmp(input, "random") == 0)
	    {
	    }
	  else
	    {
	      cout << "command not found" << endl;
	    }
	}
      else if (strcmp(input, "delete") == 0)
	{
	  int id = 0;
	  cout << "enter the ID of the student you want to delete." << endl;
	  cin >> id;
	  cin.ignore(25, '\n');
	  // remove
	  cout << "Student removed. " << endl;
	  cout << "" << endl;
	}
      else if (strcmp(input, "print") == 0)
	{
	  // prints student roster

	}
      else if (strcmp(input, "quit") == 0)
	{
	  editing = false;
	}
      else
	{
	  cout << "Command not recognized." << endl;
	  cout << "Check your spelling and capitalization and try again." << endl;
	}
    }
}

/*
 * 
 */
void hashFunction(int ID)
{
}
