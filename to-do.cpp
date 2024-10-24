#include <bits/stdc++.h>
using namespace std;

class addtask
{
public:
    string name;
    string taskdescription;
    string duedate;
    string status;

    addtask(string x, string y, string z, string s)
    {
        name = x;
        taskdescription = y;
        duedate = z;
        status = s;
    }
};

int main()
{

    vector<addtask> tasks;
    int choice;

    cout << "1. Add task" << endl;
    cout << "2. Delete task" << endl;
    cout << "3. Display task" << endl;
    cout << "4. Edit task" << endl;
    cout << "5. Change Task Status" << endl;
    cout << "6. Exit" << endl;
    cout << endl;


    cout << "enter your choice : ";
    cin >> choice;
    cout<<endl;

    for (int a = 1;; a++)
    {
        
        string name;
        string taskdescription;
        string duedate;
        string status = "pending";
        switch (choice)
        {
        case 1:
        {

            cout << "enter task name : ";
            cin >> name;
            cout << "enter task description : ";
            cin >> taskdescription;
            cout << "enter task due date : ";
            cin >> duedate;
            cout << endl;
            addtask myobj(name, taskdescription, duedate, status);

            tasks.push_back(myobj);
            break;
        }
        case 2:
        {

            cout << "All Tasks --"<<endl;
            for (int i = 0; i < tasks.size(); i++)
            {
                cout << i + 1 << ": " << "Name: " << tasks[i].name << " ( "
                     << "status - " << tasks[i].status << " )" << endl
                     << endl
                     << "Description: " << tasks[i].taskdescription << endl
                     << endl
                     << "Due Date: " << tasks[i].duedate << endl
                     << endl;
            }

            int b;
            cout << "enter task number to delete : ";
            cin >> b;
            cout<<endl;
            if(b<=tasks.size()) tasks.erase(tasks.begin() + (b - 1));
            else {cout<<"Enter valid task number "<<endl ;
            break;}
            cout << endl;
            // add delete all task using string comparison and vector.begin and end
        }
        case 3:
        {
            cout << "All task" << endl
                 << "------------------------" << endl;

            for (int i = 0; i < tasks.size(); i++)
            {
                cout << i + 1 << ": " << "Name: " << tasks[i].name << " ( "
                     << "status - " << tasks[i].status << " )" << endl
                     << endl
                     << "Description: " << tasks[i].taskdescription << endl
                     << endl
                     << "Due Date: " << tasks[i].duedate << endl
                     << endl;
            }
            break;
        }
        case 4:{
            int i;
            cout << "Enter the task no. you want to edit: ";
            cin >> i;
            cout << endl;
             cout << "enter task name : ";
            cin >> tasks[i-1].name;
            cout << "enter task description : ";
            cin >> tasks[i-1].taskdescription;
            cout << "enter task due date : ";
            cin >> tasks[i-1].duedate;
            cout << endl;
            
            break;
            

        }
        case 5:
        {
            int i;
            string status_case;
            cout << "enter task no. which should be marked for Completed: ";
            cin >> i;

            tasks[i - 1].status = "completed";
        }
        case 6: return 0;
        default: cout << "Enter Valid Choice!!!!!!!"<<endl<<endl;
        }
        cout << "1. Add task" << endl;
        cout << "2. Delete task" << endl;
        cout << "3. Display task" << endl;
        cout << "4. Edit task" << endl;
        cout << "5. Change Task Status" << endl;
        cout << "6. Exit" << endl;
        cout << endl;
        cout << "enter choice : ";
        cin >> choice;
}}