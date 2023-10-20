#include <iostream>
#include "marray.h"
using namespace std;


int main() {

    int cap;
    cout << " Kindly enter the capacity of the array : ";
    cin >> cap;
    cout << endl;
    Array myarray(0, cap);
    bool main_choice = false;
    int choice;
    do {

        cout << " ============== My Array =============== " << endl;
        cout << " || 1. Add the value or insert at the end  " << endl;
        cout << " || 2. Search the value by Linear Search " << endl;
        cout << " || 3. Search the value by Binary Search " << endl;
        cout << " || 4. Delete the value " << endl;
        cout << " || 5. Delete the value Permanantly " << endl;
        cout << " || 6. Update the value " << endl;
        cout << " || 7. Value at specific index " << endl;
        cout << " || 8. Reset the array " << endl;
        cout << " || 9. Insert at first " << endl;
        cout << " || 10. Display the front array " << endl;
        cout << " || 11. Display the back array " << endl;
        cout << " || 12. Display the array " << endl;
        cout << " || 13. Bubble sort to sort the array " << endl << endl;
        cout << " Kindly enter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int val;
            cout << " Kindly enter the value/ number to add in an array : ";
            cin >> val;
            myarray.add(val);
            break;
        }

        case 2:
        {
            int s;
            cout << " Enter the value to search in an array : ";
            cin >> s;
            int location = myarray.linear_search(s);
            if (location == -1) 
            {
                cout << " Your value ( " << s << " ) not found :( " << endl << endl;
            }
            else {
                cout << " Your value ( " << s << " ) is found at index ( " << location << " ) " << endl << endl;
            }
            break;
        }

        case 3:
        {
            int key;
            cout << " Enter the value to search in the array : ";
            cin >> key;
            int index = myarray.binary_search(key);

            if (index == -1) 
            {
                cout << " Element " << key << " not found in the array." << endl;
               
            }
            else 
            {
                cout << " Element " << key << " found at index  ( " << index << " ) " << endl;
            }
            break;

        }

        case 4:
        {
            int ind;
            cout << " Enter the index of the value to delete the value : ";
            cin >> ind;
            myarray.Delete(ind);
            break;
        }

        case 5:
        {
            int num;
            cout << " Enter the number to delete permanently from the array : ";
            cin >> num;
            myarray.Delete_permanent(num);
            cout << " Element deleted permanently " << endl;


            break;
        }

        case 6:
        {
            int no, v;
            cout << " Enter the index where you want to change the value : ";
            cin >> no;
            cout << " Now enter the value : ";
            cin >> v;
            myarray.update(no, v);
            break;
        }

        case 7:
        {
            int ind;
            cout << " Kindly enter the index of any number to show its value : ";
            cin >> ind;
            myarray.index_at(ind);
            break;
        }

        case 8:
        {
            myarray.reset(0);
            cout << "Array reset successfully :( " << endl;
            break;
        }


        case 9:
        {
            int val;
            cout << " Kindly enter the number to insert at first : ";
            cin >> val;
            myarray.insert_at_first(val);
            cout << " Your value : " << val << " is inserted at the first index of the array :) " << endl;
            break;
        }
        case 10:
        {
            myarray.front();
            cout << endl;
            break;
        }
        case 11:
        {

            myarray.back();
            cout << endl;
            break;
        }

        case 12:
        {
            myarray.display();

            break;
        }

        case 13:
        {

            myarray.Bubble_Sorting();
            cout << endl;

            break;
        }

        default:
            cout << " invalid chocie :( " << endl << endl;
        }

        cout << endl;
        cout << " Press 1 to perform again and 0 to exit the program :( -> ";
        cin >> main_choice;
        cout << endl;
    } while (main_choice == true);

    return 0;
}
