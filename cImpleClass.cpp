#include<stdio.h>    
#include <stdlib.h>
#include <string.h>

typedef struct _Person Person;
typedef struct _Employee Employee;

typedef void (*fptrDisplayInfo)(const Person*);

typedef struct _Person{  // base class
	void* _pDerivedObj;
	char *_a;
	char *_b;
	fptrDisplayInfo _display;  // memerber function
}Person;

typedef struct _Employee{  // derived class
	Person* _Person;
	double _wage;
	fptrDisplayInfo _display;
};

void displayPerson(const Person* n) // member function display in base class Person
{
	printf("displayPerson : %s %s\n",n->_a,n->_b);
}

void displayEmployee(const Person* n) // member function override display in derived class Employee
{
	//printf("displayEmployee: ");

	printf("displayEmployee: %s %s %f\n",((Employee*)(n->_pDerivedObj))->_Person->_a,((Employee*)(n->_pDerivedObj))->_Person->_b,((Employee*)(n->_pDerivedObj))->_wage);
}

Person* new_Person(char pFirstName[], char pLastName[])
{

	 Person* pObj = NULL;
    //allocating memory
    pObj = (Person*)malloc(sizeof(Person));
	pObj->_pDerivedObj = pObj;
	pObj->_a = (char*)malloc(sizeof(char)*(strlen(pFirstName)+1));
	strcpy(pObj->_a,pFirstName);
	pObj->_b = (char*)malloc(sizeof(char)*(strlen(pLastName)+1));
	strcpy(pObj->_b,pLastName);
    if (pObj == NULL)
    {
        return NULL;
    }
	pObj->_display=displayPerson;

	return pObj;
}

Person* new_Employee(char pFirstName[], char pLastName[],double wage)
{

	Employee* pEmpObj;
    //calling base class construtor
    Person* pObj = new_Person(pFirstName, pLastName);
    //allocating memory
	pEmpObj = (Employee*)malloc(sizeof(Employee));

    if (pEmpObj == NULL)
    {
        return NULL;
    }
	pObj->_pDerivedObj = pEmpObj; //pointing to derived object
	pEmpObj->_wage=wage;
	pEmpObj->_Person=pObj;
	pObj->_display=displayEmployee;
	return pObj;

}

void delete_Person(Person* pObj)
{
	if (pObj == NULL)
		return ;
	delete pObj;
}

int main()  
{  
	Person* per=new_Person("number1","number2");
	Person* emp=new_Employee("number3","number4",32.0);
	//printf("%d %d\n",p->a,p->b);
	per->_display(per);
	emp->_display(emp);
	//displayPerson(p);


    return 0;  
}  